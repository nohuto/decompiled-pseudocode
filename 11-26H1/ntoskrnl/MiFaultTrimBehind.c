/*
 * XREFs of MiFaultTrimBehind @ 0x14043AA6C
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiClearVadTrimBehind @ 0x14043ABA0 (MiClearVadTrimBehind.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 */

void __fastcall MiFaultTrimBehind(unsigned __int64 a1)
{
  _KPROCESS *Process; // rbp
  ULONG_PTR v3; // rax
  volatile signed __int32 *v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = MiObtainReferencedVadEx(a1, 8LL, &v10);
  v4 = (volatile signed __int32 *)v3;
  if ( v10 >= 0 )
  {
    if ( (*(_DWORD *)(v3 + 48) & 0x80000) == 0 && (*(_DWORD *)(v3 + 72) & 2) != 0 )
    {
      v5 = *(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32);
      v6 = **(_QWORD **)(v3 + 80);
      v7 = MiReferenceControlAreaFileWithTag(v6, 0x63536D4Du, 0);
      v8 = v7[3];
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v6 + 64), (ULONG_PTR)v7, 0x63536D4Du);
      v9 = ((a1 >> 12) - v5) & 0xFFFFFFFFFFFFFF00uLL;
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
        && (unsigned int)PfCheckDeprioritizeFile(Process, HIDWORD(Process[1].CpuPartitionList.Blink), v8, v9) )
      {
        MiDeprioritizeVirtualAddresses((v5 << 12) + ((v9 - 256) << 12), 256LL, &Process[2].ReadyListHead.Blink, 18LL);
      }
      else
      {
        MiClearVadTrimBehind(v4, 0LL);
      }
    }
    MiUnlockAndDereferenceVad(v4);
  }
}

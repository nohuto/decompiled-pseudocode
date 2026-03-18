/*
 * XREFs of NVMeGetSanitizeLogWorkItem @ 0x14001E990
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetSanitizeLogWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // r8d
  __int64 SrbExtension; // rax
  __int64 v10; // r9
  void *v12; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+20h] BYREF

  LocalCommandReuse(a1, a1 + 1008);
  v12 = 0LL;
  v13 = 0LL;
  NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v12, &v13);
  v6 = v13;
  if ( v12 )
  {
    memset(v12, 0, 0x200uLL);
    v7 = *(_QWORD *)(a1 + 1104);
    LOBYTE(v8) = -127;
    *(_BYTE *)(v7 + 4225) |= 3u;
    *(_WORD *)(v7 + 4212) = 0;
    BuildGetLogPageCommand(a1, v7, v8, 0x200u, v6, 0, 0LL, 0);
    *(_BYTE *)(v7 + 4225) |= 4u;
    *(_QWORD *)(v7 + 4192) = NVMeSanitizeRecoverCompletionRoutine;
    *(_QWORD *)(v7 + 4160) = v12;
    *(_QWORD *)(v7 + 4168) = v6;
    *(_DWORD *)(v7 + 4208) = 512;
    ProcessCommand(a1, a1 + 1016);
    WaitForCommandComplete(a1, a1 + 1016, 1);
  }
  else
  {
    *(_BYTE *)(a1 + 1019) = 38;
  }
  if ( *(_BYTE *)(a1 + 1019) != 1 )
  {
    v5 = *(_QWORD *)(a1 + 4056);
    if ( v5 )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4056));
      *(_BYTE *)(SrbExtension + 4225) |= 8u;
      *(_BYTE *)(v10 + 3) = 4;
      NVMeRequestComplete(a1, v10, 0);
      *(_QWORD *)(a1 + 4056) = 0LL;
    }
    *(_DWORD *)(a1 + 4064) &= ~1u;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  if ( v12 )
    NVMeFreeDmaBufferEx(a1, 0, 1, 512LL, (__int64 *)&v12, v6);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}

/*
 * XREFs of MiDeleteAweInfoPages @ 0x14087F2AC
 * Callers:
 *     MiDeleteSectionAwe @ 0x140706188 (MiDeleteSectionAwe.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiWalkAllBitmapRanges @ 0x140443A20 (MiWalkAllBitmapRanges.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiLockAwePagesExclusive @ 0x140706A18 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1407078BC (MiUnlockAwePagesExclusive.c)
 */

__int64 __fastcall MiDeleteAweInfoPages(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // r14
  __int64 ProcessPartition; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 AweInfoPartition; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]

  v12 = a1;
  v1 = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = MiGetProcessPartition(Process);
  AweInfoPartition = MiGetAweInfoPartition(a1);
  v6 = AweInfoPartition;
  MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
  v7 = MiPageChainCount(a1);
  v8 = *(_DWORD *)(a1 + 8);
  v15 = v7;
  if ( (v8 & 1) == 0 || *(_QWORD *)(Process + 1392) )
  {
    v9 = v16;
    if ( AweInfoPartition != ProcessPartition )
      v9 = 1;
    LODWORD(v16) = v9;
    MiWalkAllBitmapRanges((unsigned __int64 *)(a1 + 24), (__int64)MiDeleteAweInfoPageRuns, (__int64)&v12);
    v10 = v14;
    if ( v14 && (*(_DWORD *)(a1 + 8) & 4) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v6 + 23464), -v14);
      _InterlockedAdd64((volatile signed __int64 *)(v6 + 23488), -v10);
    }
    v1 = v10;
  }
  MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
  return v1;
}

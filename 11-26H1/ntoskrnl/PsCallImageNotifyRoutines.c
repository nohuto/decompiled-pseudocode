/*
 * XREFs of PsCallImageNotifyRoutines @ 0x1409E6750
 * Callers:
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 *     MiCallImageNotify @ 0x1409E50E8 (MiCallImageNotify.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x140922600 (FsRtlReleaseFileNameInformation.c)
 *     PerfLogImageLoad @ 0x140A8B0E0 (PerfLogImageLoad.c)
 */

__int64 __fastcall PsCallImageNotifyRoutines(__int128 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 v9; // rdx
  int v10; // eax
  __int128 *v11; // rbp
  __int64 v12; // r13
  _DWORD *v13; // rbx
  __int64 v15; // r14
  signed __int64 *p_PropagateBoostsEntry; // rdi
  struct _EX_RUNDOWN_REF *v17; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi
  ULONG_PTR Count; // r15
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v10 = guard_dispatch_icall_no_overrides(a4, 1024LL);
  else
    v10 = -1073741637;
  v11 = &v20;
  if ( v10 < 0 )
    v11 = a1;
  if ( a2 )
    v12 = *(_QWORD *)(a2 + 464);
  else
    v12 = 0LL;
  v13 = a3 + 1;
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(v11, a2, a3 + 1);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *v13 |= 0x400u;
    a3[6] = a4;
    v15 = 64LL;
    *a3 = 56LL;
    p_PropagateBoostsEntry = (signed __int64 *)&NormalizationListLock.PropagateBoostsEntry;
    do
    {
      v17 = ExReferenceCallBackBlock(p_PropagateBoostsEntry, v9);
      v18 = v17;
      if ( v17 )
      {
        Count = v17[1].Count;
        if ( (*v13 & 0x800) == 0 || (v17[2].Count & 1) != 0 )
        {
          if ( Count )
          {
            KeCallbackValidationPrologue((__int64)&v21);
            guard_dispatch_icall_no_overrides((__int64)v11, v12);
            KeCallbackValidationEpilogue((__int64)&v21, Count, 0x109u);
          }
        }
        ExDereferenceCallBackBlock(p_PropagateBoostsEntry, v18);
      }
      ++p_PropagateBoostsEntry;
      --v15;
    }
    while ( v15 );
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

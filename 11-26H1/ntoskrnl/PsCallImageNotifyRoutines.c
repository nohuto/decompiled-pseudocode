/*
 * XREFs of PsCallImageNotifyRoutines @ 0x140A791A4
 * Callers:
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     MiCallImageNotify @ 0x140A790C8 (MiCallImageNotify.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x1409FDA00 (FsRtlReleaseFileNameInformation.c)
 *     PerfLogImageLoad @ 0x140A79674 (PerfLogImageLoad.c)
 */

__int64 __fastcall PsCallImageNotifyRoutines(__int128 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int128 *v12; // rbp
  __int64 v13; // r13
  _DWORD *v14; // rbx
  __int64 v16; // r14
  union _RTL_RUN_ONCE *v17; // rdi
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rsi
  ULONG_PTR Count; // r15
  __int128 v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks )
    v11 = guard_dispatch_icall_no_overrides(a4, 1024LL);
  else
    v11 = -1073741637;
  v12 = &v21;
  if ( v11 < 0 )
    v12 = a1;
  if ( a2 )
    v13 = *(_QWORD *)(a2 + 464);
  else
    v13 = 0LL;
  v14 = a3 + 1;
  if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    PerfLogImageLoad(v12, a2, a3 + 1);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *v14 |= 0x400u;
    a3[6] = a4;
    v16 = 64LL;
    *a3 = 56LL;
    v17 = &PspLoadImageNotifyRoutine;
    do
    {
      v18 = ExReferenceCallBackBlock((signed __int64 *)v17, v9);
      v19 = v18;
      if ( v18 )
      {
        Count = v18[1].Count;
        if ( (*v14 & 0x800) == 0 || (v18[2].Count & 1) != 0 )
        {
          if ( Count )
          {
            KeCallbackValidationPrologue((__int64)&v22);
            guard_dispatch_icall_no_overrides((__int64)v12, v13);
            KeCallbackValidationEpilogue((__int64)&v22, Count, 0x109u);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)v17, v19);
      }
      ++v17;
      --v16;
    }
    while ( v16 );
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10);
}

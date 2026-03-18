/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F6F00
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_K3@Z @ 0x1400F6B6C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400F7330 (-VidMmValidateLockedPages@@YAJPEAVVIDMM_LOCKED_PAGE_HISTORY@@T_LARGE_INTEGER@@PEBU_MDL@@_KPEBUVI.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_GLOBAL *a4,
        const struct VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // si
  struct _MDL *Mdl; // rax
  unsigned __int64 v9; // r9
  __int64 v11; // rcx

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4
      || (int)VidMmValidateLockedPages(
                (struct VIDMM_GLOBAL *)((char *)a4 + 45256),
                *(union _LARGE_INTEGER *)(*((_QWORD *)a4 + 3) + 2440LL),
                *(const struct _MDL **)this,
                v9,
                a5) >= 0 )
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 5514;
    DxgkLogInternalTriageEvent(v11, 262145LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( v7 )
      MmUnlockPages(*(PMDL *)this);
    IoFreeMdl(*(PMDL *)this);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}

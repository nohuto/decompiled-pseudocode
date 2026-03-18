/*
 * XREFs of ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4AA8
 * Callers:
 *     VidMmCloseAllocation @ 0x14003B110 (VidMmCloseAllocation.c)
 *     VidMmTryCloseAllocation @ 0x14003DA70 (VidMmTryCloseAllocation.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseAllocation(
        VIDMM_GLOBAL *this,
        struct _EX_RUNDOWN_REF *a2,
        bool a3,
        struct VIDMM_LOCAL_ALLOC **a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v11; // rbx
  DXGPUSHLOCK *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8

  ExWaitForRundownProtectionRelease(a2 + 96);
  Current = DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( Current )
  {
    v12 = (struct DXGPROCESS *)((char *)Current + 184);
    if ( *((struct _KTHREAD **)Current + 24) == KeGetCurrentThread() )
    {
      v11 = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v12, v13, v14);
        ExAcquirePushLockExclusiveEx(v12, 0LL);
      }
      *((_QWORD *)v12 + 1) = KeGetCurrentThread();
    }
  }
  if ( a4 )
    *a4 = 0LL;
  if ( (int)VIDMM_GLOBAL::CloseOneAllocation(this, (struct VIDMM_ALLOC *)a2, a4, a3, a5, a6) < 0 )
  {
    if ( v11 )
    {
      *((_QWORD *)v11 + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v11 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    return 3223191810LL;
  }
  else
  {
    if ( v11 )
    {
      *((_QWORD *)v11 + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v11 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
}

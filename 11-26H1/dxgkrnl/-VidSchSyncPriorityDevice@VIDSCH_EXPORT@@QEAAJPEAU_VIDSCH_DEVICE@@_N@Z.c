/*
 * XREFs of ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140075A84
 * Callers:
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1401949B0 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1401F7574 (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSyncPriorityDevice(VIDSCH_EXPORT *this, struct _VIDSCH_DEVICE *a2, char a3)
{
  struct _VIDSCH_DEVICE *v3; // r9

  v3 = a2;
  LOBYTE(a2) = a3;
  return (*(__int64 (__fastcall **)(struct _VIDSCH_DEVICE *, struct _VIDSCH_DEVICE *))(*((_QWORD *)this + 1) + 176LL))(
           v3,
           a2);
}

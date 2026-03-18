/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1401949B0
 * Callers:
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1401F7308 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1403D3438 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 * Callees:
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14005B6F0 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140075A84 (-VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v2 + 16) + 209LL) )
  {
    VIDSCH_EXPORT::VidSchSyncPriorityDevice(*(VIDSCH_EXPORT **)(v2 + 736), *((struct _VIDSCH_DEVICE **)this + 100), 1);
    if ( !(unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 992LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 768LL));
  }
}

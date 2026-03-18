/*
 * XREFs of DpiFdoWaitWakePoCompletionWorkItem @ 0x140255680
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoArmWaitWake @ 0x140255350 (DpiFdoArmWaitWake.c)
 *     DpiFdoDriverDisarmWaitWake @ 0x14025561C (DpiFdoDriverDisarmWaitWake.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

void __fastcall DpiFdoWaitWakePoCompletionWorkItem(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 DeviceExtension; // rbx
  _BYTE *v5; // rbp
  _BYTE *v6; // rsi
  PERESOURCE *v7; // r15

  DeviceExtension = (__int64)IoObject->DeviceExtension;
  *(_DWORD *)(DeviceExtension + 2752) = 1;
  if ( (unsigned int)((_DWORD)Context + 0x3FFFFFFF) <= 1 || (_DWORD)Context == -1073741637 )
  {
    KeEnterCriticalRegion();
    v6 = (_BYTE *)(DeviceExtension + 484);
    if ( *(_BYTE *)(DeviceExtension + 484) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 64LL) + 4232LL));
    v7 = (PERESOURCE *)(DeviceExtension + 168);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
    *(_BYTE *)(DeviceExtension + 2726) = 0;
  }
  else
  {
    v5 = (_BYTE *)(DeviceExtension + 484);
    if ( (int)Context < 0 )
    {
      KeEnterCriticalRegion();
      if ( *v5 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 64LL) + 4232LL));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( *v5 )
        DpiCheckForOutstandingD3Requests(DeviceExtension);
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
    v6 = (_BYTE *)(DeviceExtension + 484);
    v7 = (PERESOURCE *)(DeviceExtension + 168);
    if ( *(_BYTE *)(DeviceExtension + 2727) && (int)DpiFdoArmWaitWake(IoObject) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 579;
    }
  }
  DpiFdoDriverDisarmWaitWake(DeviceExtension);
  if ( *v6 )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*v7);
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 64), DpiFdoArmWaitWake, 0x20u);
}

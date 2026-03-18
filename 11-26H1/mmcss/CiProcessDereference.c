/*
 * XREFs of CiProcessDereference @ 0x14000F0D0
 * Callers:
 *     CiProcessNotification @ 0x140001010 (CiProcessNotification.c)
 *     CiDispatchCreateNotificationClient @ 0x14000D280 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x14000EEF0 (CiThreadCleanup.c)
 *     CiDispatchClose @ 0x14000F320 (CiDispatchClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CiProcessDereference(char *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  bool v4; // zf
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(P + 32);
  v2 = *((_QWORD *)P + 4);
  v3 = v2 - 1;
  v4 = v2 == 1;
  if ( v2 - 1 <= 0 )
  {
LABEL_4:
    if ( !v4 )
      __fastfail(0xEu);
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue.Busy, P + 40);
      WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
      ObfDereferenceObject(*((PVOID *)P + 10));
      ExFreePoolWithTag(P, 0x5073634Du);
    }
    else
    {
      WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 4, v3, v2);
      if ( v5 == v2 )
        break;
      v3 = v2 - 1;
      v4 = v2 == 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_4;
    }
  }
}

/*
 * XREFs of CiProcessLocate @ 0x14000ECA0
 * Callers:
 *     CiProcessNotification @ 0x140001010 (CiProcessNotification.c)
 *     CiDispatchCreateNotificationClient @ 0x14000D280 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 * Callees:
 *     CiProcessComparer @ 0x14000F640 (CiProcessComparer.c)
 */

unsigned __int64 __fastcall CiProcessLocate(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  v3 = (unsigned __int64)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( (WPP_MAIN_CB.Dpc.Type & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
      goto LABEL_17;
    v3 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.32 ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1;
  }
  v4 = WPP_MAIN_CB.Dpc.Type & 1;
  if ( !v3 )
    goto LABEL_17;
  while ( 1 )
  {
    v5 = CiProcessComparer(a1, v3);
    if ( v5 < 0 )
    {
      v6 = *(_QWORD *)v3;
      goto LABEL_9;
    }
    if ( v5 <= 0 )
      break;
    v6 = *(_QWORD *)(v3 + 8);
LABEL_9:
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
    if ( !v3 )
      goto LABEL_17;
  }
  v2 = v3 - 40;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 - 40 + 32)) <= 1 )
    __fastfail(0xEu);
LABEL_17:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}

/*
 * XREFs of CmFcpWnfScmStateChangeNotificationCallback @ 0x1406E70A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall CmFcpWnfScmStateChangeNotificationCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        PRKEVENT Event)
{
  int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8[5]; // [rsp+24h] [rbp-14h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v7 = 0;
  v8[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v9, &v7, v8) >= 0 && v7 == 3 )
    KeSetEvent(Event, 0, 0);
  return 0LL;
}

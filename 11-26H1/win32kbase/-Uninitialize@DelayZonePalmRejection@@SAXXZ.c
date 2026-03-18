/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1401C439C
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x14018860C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x140192A38 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x140194FE4 (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1401C44D8 (-FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  DelayZonePalmRejection *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  DelayZoneTelemetry *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = *(DelayZonePalmRejection **)(UserSessionState + 17352);
  if ( v4 )
  {
    DelayZonePalmRejection::UnlockTouchDeviceHandle(v4);
    v8 = *(DelayZoneTelemetry **)(*(_QWORD *)(UserSessionState + 17352) + 120LL);
    if ( v8 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v8, v5, v6, v7);
      GreDeleteFastMutex(*(char **)(*(_QWORD *)(UserSessionState + 17352) + 120LL), v9, v10, v11);
      *(_QWORD *)(*(_QWORD *)(UserSessionState + 17352) + 120LL) = 0LL;
    }
    DelayZonePalmRejection::FreeDelayZoneList(*(DelayZonePalmRejection **)(UserSessionState + 17352));
    GreDeleteFastMutex(*(char **)(UserSessionState + 17352), v12, v13, v14);
    *(_QWORD *)(UserSessionState + 17352) = 0LL;
  }
}

/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400CF1E8
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400CF13C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x140155698 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ @ 0x1401A0DA8 (-FreeDelayZoneList@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1401A1DEC (-UnlockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1, __int64 a2)
{
  DelayZonePalmRejection **v2; // rbx
  DelayZoneTelemetry *v3; // rcx

  v2 = (DelayZonePalmRejection **)(W32GetUserSessionState(a1, a2) + 17360);
  if ( *v2 )
  {
    DelayZonePalmRejection::UnlockTouchDeviceHandle(*v2);
    v3 = (DelayZoneTelemetry *)*((_QWORD *)*v2 + 15);
    if ( v3 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v3);
      GreDeleteFastMutex(*((char **)*v2 + 15));
      *((_QWORD *)*v2 + 15) = 0LL;
    }
    DelayZonePalmRejection::FreeDelayZoneList(*v2);
    GreDeleteFastMutex((char *)*v2);
    *v2 = 0LL;
  }
}

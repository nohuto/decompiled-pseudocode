/*
 * XREFs of ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x140103180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1401039A4 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x140105600 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessTimer(CPTPEngine *this)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  *((_DWORD *)this + 762) = 0;
  CPTPEngine::CancelMouseUpTimer(this, 1);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    *((_DWORD *)this + 768) |= 0x2000000u;
    v5 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v3);
  }
  return 0LL;
}

/*
 * XREFs of SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140029364
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 *     Control_Transfer_CompleteCancelable @ 0x140020920 (Control_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140029130 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140029210 (Bulk_Stage_FreeScatterGatherList.c)
 *     Control_Transfer_Complete @ 0x140029650 (Control_Transfer_Complete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 */

void __fastcall SecureDmaEnabler_ReleaseResourcesAfterDma(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 *v4; // rbx
  int v5; // edx
  int v6; // esi

  v2 = 0;
  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = (__int64 *)(a1 + 8);
    if ( KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql((_QWORD *)*v4);
      v2 = 1;
    }
    v6 = VslDeleteSecureSection(*(_QWORD *)(a2 + 16));
    if ( v2 )
      Controller_RaiseAndTrackIrql(*v4);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v4 + 72),
        v5,
        18,
        18,
        (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
        v6);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
}

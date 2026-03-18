/*
 * XREFs of AcpiEvaluateOscVsmMethodOnRootBus @ 0x1400AAEA0
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall AcpiEvaluateOscVsmMethodOnRootBus(__int64 a1, __int64 a2, int a3)
{
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]

  v5 = 0;
  v6 = BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1;
  v4 = SB_OSC_VSM_UUID;
  return ACPIAmliEvaluateOsc(*(_QWORD *)(RootDeviceExtension + 760), (int)&v4, a3, 2, &v5);
}

/*
 * XREFs of GetNtProcessorNumber @ 0x140036260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     LookupNtProcessorNumber @ 0x140005878 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  int v6; // [rsp+28h] [rbp-10h]

  v2 = LookupNtProcessorNumber(a1);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = a1[12];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x32u,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
        v6);
    }
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400191A8,
      0LL);
    *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + (unsigned int)a1[14]) = a1;
    v3 = a1 + 8;
    v4 = (_QWORD *)qword_1400191F0;
    if ( *(__int64 **)qword_1400191F0 != &qword_1400191E8 )
      __fastfail(3u);
    *v3 = &qword_1400191E8;
    v3[1] = v4;
    *v4 = v3;
    qword_1400191F0 = (__int64)v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400191A8);
  }
  return (unsigned int)v2;
}

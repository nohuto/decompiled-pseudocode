/*
 * XREFs of GetNtProcessorNumber @ 0x1400327D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     LookupNtProcessorNumber @ 0x14000B2C8 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edx
  int v3; // edi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  v3 = LookupNtProcessorNumber(a1);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        1,
        50,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
        a1[12]);
    }
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400155D8,
      0LL);
    *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + (unsigned int)a1[14]) = a1;
    v4 = a1 + 8;
    v5 = (_QWORD *)qword_140015620;
    if ( *(__int64 **)qword_140015620 != &qword_140015618 )
      __fastfail(3u);
    *v4 = &qword_140015618;
    v4[1] = v5;
    *v5 = v4;
    qword_140015620 = (__int64)v4;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400155D8);
  }
  return (unsigned int)v3;
}

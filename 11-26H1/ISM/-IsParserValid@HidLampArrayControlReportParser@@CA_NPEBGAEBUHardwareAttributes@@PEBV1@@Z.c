/*
 * XREFs of ?IsParserValid@HidLampArrayControlReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800F0094
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800F0164 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUPars.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampArrayControlReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayControlReportParser *a3)
{
  char v5; // bp
  __int16 v6; // bx
  __int16 v7; // di
  __int16 v8; // si
  __int64 v9; // rcx
  void *v11[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-30h]

  if ( *((_BYTE *)a3 + 17) != 2
    || (v5 = 1,
        !HidChannelValueInfo::IsValid(
           (const struct HidLampArrayControlReportParser *)((char *)a3 + 24),
           (__int64)a2,
           1LL)) )
  {
    v5 = 0;
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v6 = *((_WORD *)a2 + 2);
    v7 = *((_WORD *)a2 + 1);
    v8 = *(_WORD *)a2;
    std::string::string(
      v11,
      "LampArrayControlReport: AutonomousMode is required, min value must be 0, and max value must be 1");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v9, (__int64)v11, 2147942487LL, (__int64)a1, v8, v7, v6);
    if ( v12 > 0xF )
      std::_Deallocate<16>(v11[0], (struct std::nothrow_t *)(v12 + 1));
  }
  return v5;
}

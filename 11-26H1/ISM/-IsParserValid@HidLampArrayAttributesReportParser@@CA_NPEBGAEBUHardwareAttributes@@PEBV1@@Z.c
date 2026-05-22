/*
 * XREFs of ?IsParserValid@HidLampArrayAttributesReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EDA6C
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EDCD8 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampArrayAttributesReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampArrayAttributesReportParser *a3)
{
  char v5; // bp
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  __int16 v11; // bx
  __int16 v12; // di
  __int16 v13; // si
  __int64 v14; // rcx
  void *v16[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-30h]

  v5 = 0;
  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid(
         (const struct HidLampArrayAttributesReportParser *)((char *)a3 + 24),
         (__int64)a2,
         0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v6 + 96), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v7 + 168), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v8 + 240), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v9 + 312), (__int64)a2, (__int64)a3)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v10 + 384), (__int64)a2, (__int64)a3) )
  {
    return 1;
  }
  LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
  v11 = *((_WORD *)a2 + 2);
  v12 = *((_WORD *)a2 + 1);
  v13 = *(_WORD *)a2;
  std::string::string(
    v16,
    "LampArrayAttributesReport: One or more of Lamp count, bounding box width/height/depth, LampArrayKind, or update inte"
    "rval are missing or invalid");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v14, (__int64)v16, 2147942487LL, (__int64)a1, v13, v12, v11);
  if ( v17 > 0xF )
    std::_Deallocate<16>(v16[0], (struct std::nothrow_t *)(v17 + 1));
  return v5;
}

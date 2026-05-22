/*
 * XREFs of ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EE678
 * Callers:
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE828 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampAttributesResponseReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampAttributesResponseReportParser *a3)
{
  char v5; // bp
  __int16 v6; // bx
  __int16 v7; // di
  __int16 v8; // si
  __int64 v9; // rcx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r10
  __int16 v17; // bx
  __int16 v18; // di
  __int16 v19; // si
  __int64 v20; // rcx
  void *v21[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v5 = 0;
  if ( *((_WORD *)a3 + 444) || *((_BYTE *)a3 + 890) )
  {
    if ( *((_BYTE *)a3 + 17) == 2
      && HidChannelValueInfo::IsValid(
           (const struct HidLampAttributesResponseReportParser *)((char *)a3 + 24),
           (__int64)a2,
           0x7FFFFFFFLL)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v11 + 96), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v12 + 168), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v13 + 240), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v14 + 312), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v15 + 384), (__int64)a2, (__int64)a3)
      && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v16 + 456), (__int64)a2, (__int64)a3) )
    {
      return 1;
    }
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v17 = *((_WORD *)a2 + 2);
    v18 = *((_WORD *)a2 + 1);
    v19 = *(_WORD *)a2;
    std::string::string(
      v21,
      "LampAttributesResponseReport: LampId, Position X/Y/Z, UpdateLatency, purposes, and IsProgrammable are required");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v20, (__int64)v21, 2147942487LL, (__int64)a1, v19, v18, v17);
    if ( v22 > 0xF )
      std::_Deallocate<16>(v21[0], (struct std::nothrow_t *)(v22 + 1));
    return v5;
  }
  else
  {
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v6 = *((_WORD *)a2 + 2);
    v7 = *((_WORD *)a2 + 1);
    v8 = *(_WORD *)a2;
    std::string::string(
      v21,
      "LampAttributesResponseReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v9, (__int64)v21, 2147942487LL, (__int64)a1, v8, v7, v6);
    if ( v22 > 0xF )
      std::_Deallocate<16>(v21[0], (struct std::nothrow_t *)(v22 + 1));
    return 0;
  }
}

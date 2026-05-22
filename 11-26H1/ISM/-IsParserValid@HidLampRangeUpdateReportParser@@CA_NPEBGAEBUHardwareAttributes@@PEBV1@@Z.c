/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EF888
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EFBB0 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4808 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C482C.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x1800ED568 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct HidLampRangeUpdateReportParser *a3)
{
  char v6; // r14
  __int16 v7; // bx
  __int16 v8; // di
  __int16 v9; // si
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  signed __int64 v13; // rdx
  HidChannelValueInfo *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __m128i si128; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  HidChannelValueInfo *v27; // r9
  __int16 v28; // bx
  __int16 v29; // di
  __int16 v30; // si
  __int64 v31; // rcx
  void *v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v33; // [rsp+50h] [rbp-B0h]
  void *v34[3]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-88h]
  void *v36; // [rsp+80h] [rbp-80h] BYREF
  __m128i v37; // [rsp+90h] [rbp-70h]
  void *v38; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-50h]
  void *v40; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-30h]
  void *v42; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v43; // [rsp+F0h] [rbp-10h]
  void *v44; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v45; // [rsp+118h] [rbp+18h]

  v6 = 0;
  if ( !*(_WORD *)((char *)a3 + 529) && !*((_BYTE *)a3 + 531) )
  {
    LampArrayTelemetry::GetInstance((__int64)a1, (__int64)a2, (__int64)a3);
    v7 = *((_WORD *)a2 + 2);
    v8 = *((_WORD *)a2 + 1);
    v9 = *(_WORD *)a2;
    std::string::string(
      v32,
      "LampRangeUpdateReport: must have at least one active color channel (besides gain) with logical max of 255 or less");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v10, (__int64)v32, 2147942487LL, (__int64)a1, v9, v8, v7);
    v11 = v33.m128i_u64[1];
    if ( v33.m128i_i64[1] <= 0xFuLL )
      return 0;
    v12 = v32[0];
LABEL_20:
    std::_Deallocate<16>(v12, (struct std::nothrow_t *)(v11 + 1));
    return 0;
  }
  v13 = *((_QWORD *)a3 + 25);
  v14 = (const struct HidLampRangeUpdateReportParser *)((char *)a3 + 96);
  if ( *((_QWORD *)a3 + 16) != v13 )
  {
    v15 = std::to_string((__int64)&v44, v13);
    v16 = std::to_string((__int64)v32, *((_QWORD *)a3 + 16));
    v17 = std::string::string(&v42, "LampRangeUpdateReport: logical max for LampIdStart and LampIdEnd must match.");
    v18 = std::operator+<char>((__int64)&v40, v17, " LampIdStart:");
    v19 = (_QWORD *)std::operator+<char>((__int64)&v38, v18, v16);
    v20 = std::operator+<char>((__int64)&v36, v19, ", LampIdEnd:");
    std::operator+<char>((__int64)v34, v20, v15);
    if ( v37.m128i_i64[1] > 0xFuLL )
      std::_Deallocate<16>(v36, (struct std::nothrow_t *)(v37.m128i_i64[1] + 1));
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v37 = si128;
    LOBYTE(v36) = 0;
    if ( v39.m128i_i64[1] > 0xFuLL )
    {
      std::_Deallocate<16>(v38, (struct std::nothrow_t *)(v39.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
    }
    v39 = si128;
    LOBYTE(v38) = 0;
    if ( v41.m128i_i64[1] > 0xFuLL )
    {
      std::_Deallocate<16>(v40, (struct std::nothrow_t *)(v41.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
    }
    v41 = si128;
    LOBYTE(v40) = 0;
    if ( v43.m128i_i64[1] > 0xFuLL )
    {
      std::_Deallocate<16>(v42, (struct std::nothrow_t *)(v43.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
    }
    v43 = si128;
    LOBYTE(v42) = 0;
    if ( v33.m128i_i64[1] > 0xFuLL )
    {
      std::_Deallocate<16>(v32[0], (struct std::nothrow_t *)(v33.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
    }
    v33 = si128;
    LOBYTE(v32[0]) = 0;
    v24 = v45;
    if ( v45 > 0xF )
      std::_Deallocate<16>(v44, (struct std::nothrow_t *)(v45 + 1));
    LampArrayTelemetry::GetInstance(v21, v24, v22);
    LampArrayTelemetry::LogLampArrayHidReportFailure(
      v25,
      (__int64)v34,
      2147942487LL,
      (__int64)a1,
      *(_WORD *)a2,
      *((_WORD *)a2 + 1),
      *((_WORD *)a2 + 2));
    v11 = v35;
    if ( v35 <= 0xF )
      return 0;
    v12 = v34[0];
    goto LABEL_20;
  }
  if ( *((_BYTE *)a3 + 17) == 2
    && HidChannelValueInfo::IsValid(v14, v13, 0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid(v27, v13, (__int64)a3)
    && HidChannelValueInfo::IsValid((const struct HidLampRangeUpdateReportParser *)((char *)a3 + 24), v13, 0xFFFFFFFFLL) )
  {
    return 1;
  }
  LampArrayTelemetry::GetInstance((__int64)v14, v13, (__int64)a3);
  v28 = *((_WORD *)a2 + 2);
  v29 = *((_WORD *)a2 + 1);
  v30 = *(_WORD *)a2;
  std::string::string(v34, "LampRangeUpdateReport: LampIdStart, LampIdEnd and LampUpdateFlags are required values.");
  LampArrayTelemetry::LogLampArrayHidReportFailure(v31, (__int64)v34, 2147942487LL, (__int64)a1, v30, v29, v28);
  if ( v35 > 0xF )
    std::_Deallocate<16>(v34[0], (struct std::nothrow_t *)(v35 + 1));
  return v6;
}

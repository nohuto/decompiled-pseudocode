/*
 * XREFs of ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x1800EF030
 * Callers:
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EF398 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x180097830 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsParserValid(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        struct HidLampMultiUpdateReportParser *a3)
{
  __int64 *v6; // r13
  __int64 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // rdx
  __int64 v18; // rcx
  char v19; // r9
  char v20; // r11
  __int64 v21; // r8
  char *v22; // rdx
  char v23; // r14
  __int16 v24; // bx
  __int16 v25; // di
  __int16 v26; // si
  __int64 v27; // rcx
  __int16 v29; // bx
  __int16 v30; // di
  __int16 v31; // si
  __int64 v32; // rcx
  char IsChannelsValid; // [rsp+40h] [rbp-29h]
  char v34; // [rsp+41h] [rbp-28h]
  char v35; // [rsp+42h] [rbp-27h]
  char v36; // [rsp+43h] [rbp-26h]
  __int64 v37; // [rsp+48h] [rbp-21h]
  __int64 v38; // [rsp+50h] [rbp-19h]
  __int64 v39; // [rsp+58h] [rbp-11h]
  void *v40[3]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp+Fh]

  v6 = (__int64 *)((char *)a3 + 200);
  v37 = *((_QWORD *)a3 + 26) - *((_QWORD *)a3 + 25);
  v7 = (__int64 *)((char *)a3 + 232);
  v8 = *((_QWORD *)a3 + 30) - *((_QWORD *)a3 + 29);
  v9 = *((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33);
  v38 = v9;
  v39 = *((_QWORD *)a3 + 38) - *((_QWORD *)a3 + 37);
  IsChannelsValid = HidLampMultiUpdateReportParser::IsChannelsValid(
                      (__int64 *)a3 + 21,
                      (__int64)a2,
                      0x7FFFFFFFLL,
                      (_DWORD *)a3 + 48);
  v34 = HidLampMultiUpdateReportParser::IsChannelsValid(v6, v10, 255LL, (_DWORD *)a3 + 56);
  v35 = HidLampMultiUpdateReportParser::IsChannelsValid(v7, v11, v12, (_DWORD *)a3 + 64);
  v36 = HidLampMultiUpdateReportParser::IsChannelsValid((__int64 *)a3 + 33, v13, v14, (_DWORD *)a3 + 72);
  v19 = HidLampMultiUpdateReportParser::IsChannelsValid((__int64 *)a3 + 37, v15, v16, (_DWORD *)a3 + 80);
  v20 = 0;
  v21 = v37;
  if ( !v37 && !v8 && !v9 )
  {
    LampArrayTelemetry::GetInstance(v18, (__int64)v17, 0LL);
    v22 = "LampMultiUpdateReport: must have at least one active color channel besides gain";
LABEL_35:
    v29 = *((_WORD *)a2 + 2);
    v30 = *((_WORD *)a2 + 1);
    v31 = *(_WORD *)a2;
    std::string::string(v40, v22);
    LampArrayTelemetry::LogLampArrayHidReportFailure(v32, (__int64)v40, 2147942487LL, (__int64)a1, v31, v30, v29);
    if ( v41 > 0xF )
      std::_Deallocate<16>(v40[0], (struct std::nothrow_t *)(v41 + 1));
    return 0;
  }
  if ( !IsChannelsValid
    || (v18 = *((unsigned int *)a3 + 14),
        v17 = (char *)0x8E38E38E38E38E39LL,
        0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 22) - *((_QWORD *)a3 + 21)) >> 3) != v18) )
  {
    LampArrayTelemetry::GetInstance(v18, (__int64)v17, v37);
    v22 = "LampMultiUpdateReport: number of LampId fields must match lamp count";
    goto LABEL_35;
  }
  v23 = 1;
  if ( v37 )
  {
    if ( !v34 || 0x8E38E38E38E38E39uLL * ((v6[1] - *v6) >> 3) != v18 )
    {
      LampArrayTelemetry::GetInstance(v18, 0x8E38E38E38E38E39uLL, v37);
      v22 = "LampMultiUpdateReport: Red channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 324) = 1;
  }
  if ( v8 )
  {
    if ( !v35 || 0x8E38E38E38E38E39uLL * ((v7[1] - *v7) >> 3) != v18 )
    {
      LampArrayTelemetry::GetInstance(v18, 0x8E38E38E38E38E39uLL, v37);
      v22 = "LampMultiUpdateReport: Green channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 325) = 1;
  }
  if ( v38 )
  {
    if ( !v36
      || (v17 = (char *)a3 + 264,
          v21 = 0x8E38E38E38E38E39uLL,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 34) - *((_QWORD *)a3 + 33)) >> 3) != v18) )
    {
      LampArrayTelemetry::GetInstance(v18, (__int64)v17, v21);
      v22 = "LampMultiUpdateReport: Blue channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 326) = 1;
  }
  else
  {
    v21 = 0x8E38E38E38E38E39uLL;
  }
  if ( v39 )
  {
    if ( !v19
      || (v17 = (char *)a3 + 296,
          0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a3 + 38) - *((_QWORD *)a3 + 37)) >> 3) != v18) )
    {
      LampArrayTelemetry::GetInstance(v18, (__int64)v17, 0x8E38E38E38E38E39uLL);
      v22 = "LampMultiUpdateReport: Gain channels are invalid (max should be 0-255) or missing (number should be equal to lamp count)";
      goto LABEL_35;
    }
    *((_BYTE *)a3 + 327) = 1;
  }
  if ( *((_BYTE *)a3 + 17) != 2
    || !HidChannelValueInfo::IsValid(
          (struct HidLampMultiUpdateReportParser *)((char *)a3 + 24),
          (__int64)v17,
          0x7FFFFFFFLL)
    || !HidChannelValueInfo::IsValid(
          (struct HidLampMultiUpdateReportParser *)((char *)a3 + 96),
          (__int64)v17,
          0xFFFFFFFFLL) )
  {
    v23 = v20;
    LampArrayTelemetry::GetInstance(v18, (__int64)v17, v21);
    v24 = *((_WORD *)a2 + 2);
    v25 = *((_WORD *)a2 + 1);
    v26 = *(_WORD *)a2;
    std::string::string(v40, "LampMultiUpdateReport: Lamp count and LampUpdateFlags are required values");
    LampArrayTelemetry::LogLampArrayHidReportFailure(v27, (__int64)v40, 2147942487LL, (__int64)a1, v26, v25, v24);
    if ( v41 > 0xF )
      std::_Deallocate<16>(v40[0], (struct std::nothrow_t *)(v41 + 1));
  }
  return v23;
}

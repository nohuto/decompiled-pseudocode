/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800EB910
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x180082430 (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008DB14 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4808 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E8CA4 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x1800E8E90 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800EA340 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800ED500 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        unsigned int a2,
        struct LampAttributesResponseDeviceReport *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int16 v14; // bx
  __int16 v15; // si
  __int16 v16; // r14
  signed int LastError; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  const struct std::nothrow_t *v20; // rdx
  ULONG ReportBufferLength; // [rsp+40h] [rbp-49h] BYREF
  PVOID ReportBuffer; // [rsp+48h] [rbp-41h] BYREF
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  __int128 v25; // [rsp+60h] [rbp-29h]
  int v26; // [rsp+70h] [rbp-19h]
  void *v27[2]; // [rsp+78h] [rbp-11h] BYREF
  __m128i v28; // [rsp+88h] [rbp-1h]
  void *v29; // [rsp+98h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v6 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 76),
         &ReportBuffer,
         &ReportBufferLength);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 333LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
  {
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0;
    v6 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
           *((HidLampAttributesResponseReportParser **)this + 76),
           (const unsigned __int8 *)ReportBuffer,
           ReportBufferLength,
           (struct LampAttributesResponseDeviceReport *)&v24);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_OWORD *)a3 = v24;
      *((_OWORD *)a3 + 1) = v25;
      *((_DWORD *)a3 + 8) = v26;
      v7 = 0;
      goto LABEL_19;
    }
    v8 = 350LL;
    goto LABEL_17;
  }
  v9 = std::to_string(&v24, a2);
  v10 = std::string::string(&v29, "Obtaining LampAttributesResponseReport request failed for lamp ID ");
  std::operator+<char>((__int64)v27, (__int64)v10, v9);
  if ( si128.m128i_i64[1] > 0xFuLL )
    std::_Deallocate<16>(v29, (struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v29) = 0;
  v13 = *((_QWORD *)&v25 + 1);
  if ( *((_QWORD *)&v25 + 1) > 0xFuLL )
    std::_Deallocate<16>((void *)v24, (struct std::nothrow_t *)(*((_QWORD *)&v25 + 1) + 1LL));
  LampArrayTelemetry::GetInstance(v11, v13, v12);
  v14 = *((_WORD *)this + 271);
  v15 = *((_WORD *)this + 270);
  v16 = *((_WORD *)this + 269);
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  LampArrayTelemetry::LogLampArrayHidReportFailure(
    v18,
    (__int64)v27,
    (unsigned int)LastError,
    (__int64)this + 24,
    v16,
    v15,
    v14);
  v19 = GetLastError();
  v7 = v19;
  if ( v19 > 0 )
    v7 = (unsigned __int16)v19 | 0x80070000;
  v20 = (const struct std::nothrow_t *)v28.m128i_i64[1];
  if ( v28.m128i_i64[1] > 0xFuLL )
    std::_Deallocate<16>(v27[0], (struct std::nothrow_t *)(v28.m128i_i64[1] + 1));
  v28 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v27[0]) = 0;
LABEL_19:
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v20);
  return v7;
}

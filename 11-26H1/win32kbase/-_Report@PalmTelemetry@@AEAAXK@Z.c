/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x140210EE0
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x140077BEC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1401B4CD8 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1401B86CC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1401C158C (ApiSetGetUserHandedness.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  unsigned __int64 v2; // r13
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r15d
  int v8; // edi
  int v9; // r14d
  int v10; // esi
  int v11; // ebp
  int v12; // ebx
  int UserHandedness; // eax
  __int64 v14; // rdx
  char *v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+B0h] [rbp+8h] BYREF
  int v17; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  v4 = *((_DWORD *)this + 4);
  v15 = (char *)this + 28;
  if ( !v4 || (unsigned int)(a2 - v4) >= 0x2710 )
  {
    v5 = 0LL;
    v17 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v6 = ((int)v5 + *((_DWORD *)this + 6)) % 0x1AAu;
        if ( (_DWORD)v5 )
          LODWORD(v16) = 0;
        else
          LODWORD(v16) = *((_DWORD *)this + 519);
        v7 = *((_DWORD *)this + 6 * v6 + 525);
        v8 = *((_DWORD *)this + 6 * v6 + 521);
        v9 = *((_DWORD *)this + 6 * v6 + 524) / 100;
        v10 = *((_DWORD *)this + 6 * v6 + 520);
        v11 = *((_DWORD *)this + 6 * v6 + 523) / 100;
        v12 = *((_DWORD *)this + 6 * v6 + 522);
        UserHandedness = ApiSetGetUserHandedness(v5);
        RtlStringCchPrintfA(
          v15,
          2048 - v2,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          v10,
          v8,
          v12,
          v11,
          v9,
          v7,
          v16);
        RtlStringCchLengthA((const char *)this + 28, v14, &v18);
        v2 = v18;
        if ( v18 + 48 >= 0x800 )
        {
          v16 = 1LL;
          wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_PenTapped__private_descriptor, 1, 2u, 1LL);
          if ( (unsigned int)dword_1402A9F20 > 5 && tlgKeywordOn((__int64)&dword_1402A9F20, 0x400000000000LL) )
          {
            v16 = (__int64)this + 28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1402A9F20,
              byte_14028804C,
              0LL,
              0LL,
              (void **)&v16);
          }
          memset((char *)this + 28, 0, 0x800uLL);
          v2 = 0LL;
          v18 = 0LL;
        }
        v5 = (unsigned int)(v17 + 1);
        v15 = (char *)this + v2 + 28;
        v17 = v5;
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 3) );
      if ( v2 )
      {
        v16 = 1LL;
        wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_PenTapped__private_descriptor, 1, 2u, 1LL);
        if ( (unsigned int)dword_1402A9F20 > 5 && tlgKeywordOn((__int64)&dword_1402A9F20, 0x400000000000LL) )
        {
          v16 = (__int64)this + 28;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1402A9F20,
            byte_140287FC1,
            0LL,
            0LL,
            (void **)&v16);
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}

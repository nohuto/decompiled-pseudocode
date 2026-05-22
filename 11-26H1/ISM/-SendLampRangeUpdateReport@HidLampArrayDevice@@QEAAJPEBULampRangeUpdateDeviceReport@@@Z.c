/*
 * XREFs of ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18007E9E0
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000BD70 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18005F94C (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180061DD4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampRangeUpdateReport(
        HidLampArrayDevice *this,
        const struct LampRangeUpdateDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  const WCHAR *v4; // rdi
  __int64 v7; // rcx
  int v8; // eax
  signed int v9; // ebx
  const struct std::nothrow_t *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  DWORD LastError; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const WCHAR *ReportBufferLength; // [rsp+50h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF
  const char *v21; // [rsp+68h] [rbp+38h] BYREF

  v4 = (const WCHAR *)((char *)this + 24);
  if ( (unsigned int)dword_180251248 > 5 )
  {
    ReportBufferLength = (const WCHAR *)((char *)this + 24);
    ReportBuffer = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_180251248,
      byte_180216DA4,
      a3,
      a4,
      (const unsigned __int16 **)&ReportBuffer,
      &ReportBufferLength);
  }
  v7 = *((_QWORD *)this + 78);
  LODWORD(ReportBufferLength) = 0;
  ReportBuffer = 0LL;
  v8 = HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(
         v7,
         (__int64)a2,
         (int *)&ReportBuffer,
         &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, (ULONG)ReportBufferLength) )
    {
      if ( (unsigned int)dword_180251248 > 5 )
      {
        ReportBufferLength = v4;
        v21 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (__int64)&dword_180251248,
          byte_180216C11,
          v11,
          v12,
          (const unsigned __int16 **)&v21,
          &ReportBufferLength);
      }
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( (unsigned int)dword_180251248 > 5 )
      {
        LODWORD(ReportBufferLength) = LastError;
        v21 = "Failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_180251248,
          (__int64)&unk_180216BBC,
          v14,
          v15,
          (const unsigned __int16 **)&v21,
          (__int64)&ReportBufferLength);
      }
      if ( v9 > 0 )
        v9 = (unsigned __int16)v9 | 0x80070000;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8,
      v17);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v10);
  return (unsigned int)v9;
}

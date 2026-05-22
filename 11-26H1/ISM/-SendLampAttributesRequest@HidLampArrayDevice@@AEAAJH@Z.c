/*
 * XREFs of ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180085064
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000BD70 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008D7F0 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampAttributesRequest(HidLampArrayDevice *this, int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  signed int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  DWORD LastError; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  const char *v13; // [rsp+50h] [rbp+20h] BYREF
  ULONG ReportBufferLength; // [rsp+58h] [rbp+28h] BYREF
  PVOID ReportBuffer; // [rsp+60h] [rbp+30h] BYREF

  LODWORD(v13) = a2;
  v3 = *((_QWORD *)this + 75);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
         v3,
         &v13,
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      v5 = 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( (unsigned int)dword_180251248 > 5 )
      {
        ReportBufferLength = LastError;
        v13 = "Failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_180251248,
          (__int64)&unk_180216F2E,
          v8,
          v9,
          (const unsigned __int16 **)&v13,
          (__int64)&ReportBufferLength);
      }
      if ( v5 > 0 )
        v5 = (unsigned __int16)v5 | 0x80070000;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4,
      v11);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&ReportBuffer, v6);
  return (unsigned int)v5;
}

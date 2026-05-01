/*
 * XREFs of ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x18029F578
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x1804698C8 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001300 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // [rsp+78h] [rbp+27h] BYREF
  __int64 v13; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+88h] [rbp+37h] BYREF
  __int64 v15; // [rsp+90h] [rbp+3Fh] BYREF

  result = (__int64)TouchKeyboardExperienceTraceLogging::Provider();
  v11 = result;
  if ( *(_DWORD *)result > 5u )
  {
    result = 0x400000000000LL;
    if ( (*(_QWORD *)(v11 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v11 + 24) & 0x400000000000LL) == *(_QWORD *)(v11 + 24) )
    {
      v12 = *a4;
      v13 = *a3;
      v14 = *a2;
      v15 = *a1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
               v11,
               (__int64)&unk_1808077AF,
               v9,
               v10,
               &v15,
               &v14,
               &v13,
               &v12);
    }
  }
  return result;
}

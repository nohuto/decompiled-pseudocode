/*
 * XREFs of ??$UnpackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x1805BCF74
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805C7B00 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000E740 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802901A4 (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::UnpackagedAppDisplayInformationRetrieved<unsigned short const *,unsigned short const *,bool>(
        _QWORD *a1,
        __int64 *a2,
        _BYTE *a3)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  result = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a2;
    LOBYTE(v7) = *a3;
    v11[0] = *a1;
    v10 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_1807EA913,
                                            v7,
                                            v8,
                                            v11,
                                            &v10);
  }
  return result;
}

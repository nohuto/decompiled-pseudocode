/*
 * XREFs of ??$HasSnapId@_K@CSnapComponentTelemetry@@SAX$$QEA_K@Z @ 0x180224EC4
 * Callers:
 *     ?HasSnapId@CShellSnapComponent@@UEAAJPEAE@Z @ 0x18059FCF0 (-HasSnapId@CShellSnapComponent@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

int __fastcall CSnapComponentTelemetry::HasSnapId<unsigned __int64>(__int64 *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = WindowManagementLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
                    (__int64)v2,
                    byte_1808219C4,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}

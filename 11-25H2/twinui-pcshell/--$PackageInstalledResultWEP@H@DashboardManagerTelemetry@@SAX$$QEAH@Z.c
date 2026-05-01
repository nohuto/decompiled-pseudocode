/*
 * XREFs of ??$PackageInstalledResultWEP@H@DashboardManagerTelemetry@@SAX$$QEAH@Z @ 0x1805A02D8
 * Callers:
 *     _lambda_eee19e414dd6f5105c1576905e54cebc_::operator() @ 0x1805A9934 (_lambda_eee19e414dd6f5105c1576905e54cebc_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180193E1C (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall DashboardManagerTelemetry::PackageInstalledResultWEP<int>(int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                    (__int64)v2,
                    byte_1807E9F42,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}

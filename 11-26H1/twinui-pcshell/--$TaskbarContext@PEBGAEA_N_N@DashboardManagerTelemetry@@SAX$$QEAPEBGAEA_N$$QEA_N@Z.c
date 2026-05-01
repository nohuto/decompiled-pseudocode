/*
 * XREFs of ??$TaskbarContext@PEBGAEA_N_N@DashboardManagerTelemetry@@SAX$$QEAPEBGAEA_N$$QEA_N@Z @ 0x1805C4740
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18018CBE4 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1801C3EAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

int __fastcall DashboardManagerTelemetry::TaskbarContext<unsigned short const *,bool &,bool>(
        const WCHAR **a1,
        char *a2,
        _BYTE *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // dl
  _BYTE v11[8]; // [rsp+40h] [rbp-18h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp-10h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v9 = *a2;
    LOBYTE(v7) = *a3;
    v12 = *a1;
    v11[0] = v9;
    v13 = v7;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                    (__int64)v6,
                    byte_180825BEB,
                    v7,
                    v8,
                    &v12,
                    (__int64)v11,
                    (__int64)&v13);
  }
  return (int)v6;
}

/*
 * XREFs of ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x18063849C
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x180639208 (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 *     ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639698 (-HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180639D98 (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputSwitchingManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180639C04 (-Provider@InputSwitchingManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>(const WCHAR *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  const WCHAR *v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputSwitchingManagerTelemetry::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v2,
                    byte_18082DED1,
                    0LL,
                    v3,
                    &v5);
  }
  return (int)v2;
}

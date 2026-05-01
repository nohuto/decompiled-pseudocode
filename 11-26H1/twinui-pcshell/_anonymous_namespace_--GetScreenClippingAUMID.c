/*
 * XREFs of _anonymous_namespace_::GetScreenClippingAUMID @ 0x1802BC1B4
 * Callers:
 *     ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800D8188 (-RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039AB20 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800CD5DC (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

WCHAR *__fastcall anonymous_namespace_::GetScreenClippingAUMID(WCHAR *this)
{
  volatile signed __int32 **v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  WCHAR *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = this;
  v2 = (volatile signed __int32 **)winrt::hstring::hstring(
                                     (winrt::hstring *)&v6,
                                     L"com.microsoft.windows.app.screenclip");
  anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog((__int64 *)this, v2);
  if ( *(_DWORD *)SingleViewExperienceLogging::Provider(v3) > 5u )
  {
    v6 = (WCHAR *)winrt::hstring::c_str((winrt::hstring *)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v4,
      byte_1807F94FC,
      0LL,
      v4,
      (const WCHAR **)&v6);
  }
  return this;
}

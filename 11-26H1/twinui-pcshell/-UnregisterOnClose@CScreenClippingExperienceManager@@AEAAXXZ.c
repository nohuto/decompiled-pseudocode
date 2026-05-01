/*
 * XREFs of ?UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801F61FC
 * Callers:
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x1801F61B0 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801F6258 (-UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::UnregisterOnClose(CScreenClippingExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F8ED9,
      0LL);
  v3 = CScreenClippingExperienceManager::UnregisterForHotKeyHandling(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
}

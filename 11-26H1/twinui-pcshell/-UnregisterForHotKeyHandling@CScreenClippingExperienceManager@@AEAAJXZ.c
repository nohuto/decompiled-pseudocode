/*
 * XREFs of ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801F6258
 * Callers:
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801C8040 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801F61FC (-UnregisterOnClose@CScreenClippingExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::UnregisterForHotKeyHandling(
        CScreenClippingExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int *v4; // rbx
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  v4 = (int *)((char *)this + 280);
  if ( *(_DWORD *)v2 > 5u )
  {
    v6 = *v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1807F896E,
      0LL,
      v3,
      (__int64)&v6);
  }
  if ( *v4 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 64LL))(*((_QWORD *)this + 34));
    *v4 = 0;
  }
  return 0LL;
}

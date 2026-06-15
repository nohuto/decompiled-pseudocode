/*
 * XREFs of ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x180103E68
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800DB86C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x18010323C (--1EffectPackConfigurationManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EffectPackConfigurationManager::Shutdown(EffectPackConfigurationManager *this)
{
  if ( *((_BYTE *)this + 56) )
  {
    UnregisterMediaCallback();
    *((_BYTE *)this + 56) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    (char *)this + 88,
    0LL);
}

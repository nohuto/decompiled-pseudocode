/*
 * XREFs of _GamingAudio::AppList::GetSessionInfo_::_1_::dtor$3 @ 0x1806E5BF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingAudio::AppList::GetSessionInfo_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>(a2 + 56);
}

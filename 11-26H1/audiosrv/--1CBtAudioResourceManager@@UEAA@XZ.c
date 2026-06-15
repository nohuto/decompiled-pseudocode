/*
 * XREFs of ??1CBtAudioResourceManager@@UEAA@XZ @ 0x1800F73D4
 * Callers:
 *     ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F7740 (--_GCBtAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

void __fastcall CBtAudioResourceManager::~CBtAudioResourceManager(void **this)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(this + 78);
  *((_DWORD *)this + 155) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase((CBtAudioResourceManagerBase *)this);
}

/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x18002A1E4
 * Callers:
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::dtor$0 @ 0x1800BA150 (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke_::_1_::dtor$0 @ 0x1800BE0A7 (_CreativeFramework--Actions--PinWebsiteToTaskbarService--Invoke_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$5 @ 0x1800BE0F8 (_CreativeFramework--Actions--MakePinWebsiteToTaskbarService_--_1_--dtor$5.c)
 *     _CreativeFramework::Actions::PinnedWebsiteManager::PinWebsite_::_1_::dtor$7 @ 0x1800BE69B (_CreativeFramework--Actions--PinnedWebsiteManager--PinWebsite_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}

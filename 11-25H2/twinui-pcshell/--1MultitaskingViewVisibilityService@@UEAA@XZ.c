/*
 * XREFs of ??1MultitaskingViewVisibilityService@@UEAA@XZ @ 0x180487D14
 * Callers:
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180487D50 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18008BD68 (--1CGITRegistrationList@@QEAA@XZ.c)
 */

void __fastcall MultitaskingViewVisibilityService::~MultitaskingViewVisibilityService(
        MultitaskingViewVisibilityService *this)
{
  CGITRegistrationList::~CGITRegistrationList((MultitaskingViewVisibilityService *)((char *)this + 72));
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)this + 16);
}

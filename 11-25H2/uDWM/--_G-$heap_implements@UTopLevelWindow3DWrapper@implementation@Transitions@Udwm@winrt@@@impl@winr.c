/*
 * XREFs of ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180079520
 * Callers:
 *     ??_E?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800DD9E0 (--_E-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winr.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180079590 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(a1);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}

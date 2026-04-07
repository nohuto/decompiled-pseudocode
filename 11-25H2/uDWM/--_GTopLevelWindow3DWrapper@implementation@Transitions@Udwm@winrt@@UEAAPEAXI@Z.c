/*
 * XREFs of ??_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x180079558
 * Callers:
 *     ??_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z @ 0x1800DB410 (--_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180079590 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}

/*
 * XREFs of ??_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x18003FF70
 * Callers:
 *     ??_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z @ 0x1800D8330 (--_ETopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040124 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        char a2)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}

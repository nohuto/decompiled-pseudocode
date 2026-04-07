/*
 * XREFs of ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800DA82C
 * Callers:
 *     ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z @ 0x1800DA7E0 (--_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800DD2D0 (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::`vector deleting destructor'(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        char a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual::~UserResizeVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}

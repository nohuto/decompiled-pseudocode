/*
 * XREFs of ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x1803BE280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803BE024 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 */

SearchAppDesktopExperienceView *__fastcall SearchAppDesktopExperienceView::`scalar deleting destructor'(
        SearchAppDesktopExperienceView *this,
        char a2)
{
  SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}

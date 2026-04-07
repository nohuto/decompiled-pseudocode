/*
 * XREFs of ??_GCGroupingStoryboard@@UEAAPEAXI@Z @ 0x1800C06B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C0408 (--1CGroupingStoryboard@@UEAA@XZ.c)
 */

CGroupingStoryboard *__fastcall CGroupingStoryboard::`scalar deleting destructor'(CGroupingStoryboard *this, char a2)
{
  CGroupingStoryboard::~CGroupingStoryboard(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}

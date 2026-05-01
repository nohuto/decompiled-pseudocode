/*
 * XREFs of ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x1804B6850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScrollViewerHost@@UEAA@XZ @ 0x1804B67B4 (--1CScrollViewerHost@@UEAA@XZ.c)
 */

CScrollViewerHost *__fastcall CScrollViewerHost::`vector deleting destructor'(CScrollViewerHost *this, char a2)
{
  CScrollViewerHost::~CScrollViewerHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1E0);
  return this;
}

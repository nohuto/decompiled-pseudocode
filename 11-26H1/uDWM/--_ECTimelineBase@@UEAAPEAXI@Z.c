/*
 * XREFs of ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800CAD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTimelineBase@@UEAA@XZ @ 0x180060E0C (--1CTimelineBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CTimelineBase *__fastcall CTimelineBase::`vector deleting destructor'(CTimelineBase *this, char a2)
{
  CTimelineBase::~CTimelineBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}

/*
 * XREFs of ??_EPriorityBoostHelper@@UEAAPEAXI@Z @ 0x1803C02E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PriorityBoostHelper@@UEAA@XZ @ 0x1803C028C (--1PriorityBoostHelper@@UEAA@XZ.c)
 */

PriorityBoostHelper *__fastcall PriorityBoostHelper::`vector deleting destructor'(PriorityBoostHelper *this, char a2)
{
  PriorityBoostHelper::~PriorityBoostHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}

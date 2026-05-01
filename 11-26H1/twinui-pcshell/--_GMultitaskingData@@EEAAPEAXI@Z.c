/*
 * XREFs of ??_GMultitaskingData@@EEAAPEAXI@Z @ 0x1804AC600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MultitaskingData@@EEAA@XZ @ 0x1804AC544 (--1MultitaskingData@@EEAA@XZ.c)
 */

MultitaskingData *__fastcall MultitaskingData::`scalar deleting destructor'(MultitaskingData *this, char a2)
{
  MultitaskingData::~MultitaskingData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}

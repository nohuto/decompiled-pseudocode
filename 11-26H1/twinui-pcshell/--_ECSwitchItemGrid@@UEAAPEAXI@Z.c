/*
 * XREFs of ??_ECSwitchItemGrid@@UEAAPEAXI@Z @ 0x1804C5CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1804C5BF4 (--1CSwitchItemGrid@@UEAA@XZ.c)
 */

CSwitchItemGrid *__fastcall CSwitchItemGrid::`vector deleting destructor'(CSwitchItemGrid *this, char a2)
{
  CSwitchItemGrid::~CSwitchItemGrid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3B0);
  return this;
}

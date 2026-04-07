/*
 * XREFs of ??_ECAppArrangementBase@@UEAAPEAXI@Z @ 0x1800C05B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800C0320 (--1CAppArrangementBase@@UEAA@XZ.c)
 */

void **__fastcall CAppArrangementBase::`vector deleting destructor'(void **this, char a2)
{
  CAppArrangementBase::~CAppArrangementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}

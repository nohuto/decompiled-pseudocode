/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800C0630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800C0348 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  CAppArrangementImmediate::~CAppArrangementImmediate(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}

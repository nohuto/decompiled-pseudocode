/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x1802F0850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802F05B4 (--1CImmersiveMode@@MEAA@XZ.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  CImmersiveMode::~CImmersiveMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1C0);
  return this;
}

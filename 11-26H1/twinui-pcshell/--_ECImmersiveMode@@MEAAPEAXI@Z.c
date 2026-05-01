/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x1802EB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802EB158 (--1CImmersiveMode@@MEAA@XZ.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  CImmersiveMode::~CImmersiveMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1C0);
  return this;
}

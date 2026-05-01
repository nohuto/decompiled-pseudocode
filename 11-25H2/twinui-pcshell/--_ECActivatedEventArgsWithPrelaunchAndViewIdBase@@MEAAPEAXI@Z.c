/*
 * XREFs of ??_ECActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAAPEAXI@Z @ 0x18065A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ @ 0x180209078 (--1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CActivatedEventArgsWithPrelaunchAndViewIdBase *__fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::`vector deleting destructor'(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        char a2)
{
  CActivatedEventArgsWithPrelaunchAndViewIdBase::~CActivatedEventArgsWithPrelaunchAndViewIdBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}

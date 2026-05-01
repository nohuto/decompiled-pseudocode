/*
 * XREFs of ??_ECActivatedEventArgsWithViewIdBase@@MEAAPEAXI@Z @ 0x180329730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x1800F26E8 (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CActivatedEventArgsWithViewIdBase *__fastcall CActivatedEventArgsWithViewIdBase::`vector deleting destructor'(
        CActivatedEventArgsWithViewIdBase *this,
        char a2)
{
  CActivatedEventArgsWithViewIdBase::~CActivatedEventArgsWithViewIdBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}

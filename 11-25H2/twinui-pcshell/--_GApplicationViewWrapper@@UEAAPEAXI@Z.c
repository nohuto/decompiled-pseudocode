/*
 * XREFs of ??_GApplicationViewWrapper@@UEAAPEAXI@Z @ 0x1800F66D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewWrapper@@UEAA@XZ @ 0x1800F670C (--1ApplicationViewWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewWrapper *__fastcall ApplicationViewWrapper::`scalar deleting destructor'(
        ApplicationViewWrapper *this,
        char a2)
{
  ApplicationViewWrapper::~ApplicationViewWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}

/*
 * XREFs of ??_GApplicationViewWrapper@@UEAAPEAXI@Z @ 0x1800F11E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewWrapper@@UEAA@XZ @ 0x1800F121C (--1ApplicationViewWrapper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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

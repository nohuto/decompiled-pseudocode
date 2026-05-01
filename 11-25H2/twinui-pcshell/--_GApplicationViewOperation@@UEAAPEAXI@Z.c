/*
 * XREFs of ??_GApplicationViewOperation@@UEAAPEAXI@Z @ 0x1801160D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewOperation@@UEAA@XZ @ 0x180116110 (--1ApplicationViewOperation@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewOperation *__fastcall ApplicationViewOperation::`scalar deleting destructor'(
        ApplicationViewOperation *this,
        char a2)
{
  ApplicationViewOperation::~ApplicationViewOperation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}

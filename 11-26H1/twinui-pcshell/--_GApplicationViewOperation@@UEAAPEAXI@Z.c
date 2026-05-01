/*
 * XREFs of ??_GApplicationViewOperation@@UEAAPEAXI@Z @ 0x1800F2C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationViewOperation@@UEAA@XZ @ 0x1800F2CD0 (--1ApplicationViewOperation@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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

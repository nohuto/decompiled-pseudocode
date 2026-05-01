/*
 * XREFs of ??_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z @ 0x1800845F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AgileApplicationViewChangeListenerConverter@@UEAA@XZ @ 0x18008462C (--1AgileApplicationViewChangeListenerConverter@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AgileApplicationViewChangeListenerConverter *__fastcall AgileApplicationViewChangeListenerConverter::`scalar deleting destructor'(
        AgileApplicationViewChangeListenerConverter *this,
        char a2)
{
  AgileApplicationViewChangeListenerConverter::~AgileApplicationViewChangeListenerConverter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}

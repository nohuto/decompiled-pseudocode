/*
 * XREFs of ??_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z @ 0x1801DA250
 * Callers:
 *     <none>
 * Callees:
 *     ??1AgileApplicationViewChangeListenerConverter@@UEAA@XZ @ 0x1801DA28C (--1AgileApplicationViewChangeListenerConverter@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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

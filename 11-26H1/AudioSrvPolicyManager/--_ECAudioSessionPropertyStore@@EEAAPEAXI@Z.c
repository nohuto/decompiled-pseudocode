/*
 * XREFs of ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180003E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x180003E70 (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSessionPropertyStore *__fastcall CAudioSessionPropertyStore::`vector deleting destructor'(
        CAudioSessionPropertyStore *this,
        char a2)
{
  CAudioSessionPropertyStore::~CAudioSessionPropertyStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}

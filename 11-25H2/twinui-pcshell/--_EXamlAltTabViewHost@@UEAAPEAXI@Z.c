/*
 * XREFs of ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x180105CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x180105D1C (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::`vector deleting destructor'(XamlAltTabViewHost *this, char a2)
{
  XamlAltTabViewHost::~XamlAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x220);
  return this;
}

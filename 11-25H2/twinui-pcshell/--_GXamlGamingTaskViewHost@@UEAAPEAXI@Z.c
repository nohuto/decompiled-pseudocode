/*
 * XREFs of ??_GXamlGamingTaskViewHost@@UEAAPEAXI@Z @ 0x18067A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x180679D7C (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 */

XamlGamingTaskViewHost *__fastcall XamlGamingTaskViewHost::`scalar deleting destructor'(
        XamlGamingTaskViewHost *this,
        char a2)
{
  XamlGamingTaskViewHost::~XamlGamingTaskViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x360);
  return this;
}

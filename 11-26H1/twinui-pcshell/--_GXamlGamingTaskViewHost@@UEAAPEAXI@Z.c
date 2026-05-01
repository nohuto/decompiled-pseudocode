/*
 * XREFs of ??_GXamlGamingTaskViewHost@@UEAAPEAXI@Z @ 0x1806A0D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlGamingTaskViewHost@@UEAA@XZ @ 0x1806A08D4 (--1XamlGamingTaskViewHost@@UEAA@XZ.c)
 */

XamlGamingTaskViewHost *__fastcall XamlGamingTaskViewHost::`scalar deleting destructor'(
        XamlGamingTaskViewHost *this,
        char a2)
{
  XamlGamingTaskViewHost::~XamlGamingTaskViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x368);
  return this;
}

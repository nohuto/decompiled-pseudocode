/*
 * XREFs of ??_GWindowingEnvironmentSettings@@UEAAPEAXI@Z @ 0x180408EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpWindowingEnvironmentSettings@@UEAA@XZ @ 0x1804086BC (--1UwpWindowingEnvironmentSettings@@UEAA@XZ.c)
 */

WindowingEnvironmentSettings *__fastcall WindowingEnvironmentSettings::`scalar deleting destructor'(
        WindowingEnvironmentSettings *this,
        char a2)
{
  UwpWindowingEnvironmentSettings::~UwpWindowingEnvironmentSettings(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}

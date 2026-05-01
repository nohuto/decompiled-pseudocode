/*
 * XREFs of ??_GAppViewIconLoader@@UEAAPEAXI@Z @ 0x1801E0A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewIconLoader@@UEAA@XZ @ 0x1801E0A8C (--1AppViewIconLoader@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppViewIconLoader *__fastcall AppViewIconLoader::`scalar deleting destructor'(AppViewIconLoader *this, char a2)
{
  AppViewIconLoader::~AppViewIconLoader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}

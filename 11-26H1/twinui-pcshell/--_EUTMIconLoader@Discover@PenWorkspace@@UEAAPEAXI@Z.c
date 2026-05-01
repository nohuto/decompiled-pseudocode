/*
 * XREFs of ??_EUTMIconLoader@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803EF630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UTMIconLoader@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EF5F4 (--1UTMIconLoader@Discover@PenWorkspace@@UEAA@XZ.c)
 */

PenWorkspace::Discover::UTMIconLoader *__fastcall PenWorkspace::Discover::UTMIconLoader::`vector deleting destructor'(
        PenWorkspace::Discover::UTMIconLoader *this,
        char a2)
{
  PenWorkspace::Discover::UTMIconLoader::~UTMIconLoader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}

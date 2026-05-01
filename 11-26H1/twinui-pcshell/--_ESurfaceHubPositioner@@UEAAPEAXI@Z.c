/*
 * XREFs of ??_ESurfaceHubPositioner@@UEAAPEAXI@Z @ 0x18020C404
 * Callers:
 *     ??_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z @ 0x1804EDAD0 (--_ESurfaceHubPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1SurfaceHubPositioner@@UEAA@XZ @ 0x18020C440 (--1SurfaceHubPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SurfaceHubPositioner *__fastcall SurfaceHubPositioner::`vector deleting destructor'(
        SurfaceHubPositioner *this,
        char a2)
{
  SurfaceHubPositioner::~SurfaceHubPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x248);
  return this;
}

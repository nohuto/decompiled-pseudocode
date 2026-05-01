/*
 * XREFs of ??_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1803FB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1803FB6B0 (--1AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::`vector deleting destructor'(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        char a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::~AppViewListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}

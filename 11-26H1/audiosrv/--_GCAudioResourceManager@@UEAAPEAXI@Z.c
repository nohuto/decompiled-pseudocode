/*
 * XREFs of ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800C53E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioResourceManager@@UEAA@XZ @ 0x1800C44A4 (--1CAudioResourceManager@@UEAA@XZ.c)
 */

CAudioResourceManager *__fastcall CAudioResourceManager::`scalar deleting destructor'(
        CAudioResourceManager *this,
        char a2)
{
  CAudioResourceManager::~CAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}

/*
 * XREFs of ??_GCBtAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F7740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBtAudioResourceManager@@UEAA@XZ @ 0x1800F73D4 (--1CBtAudioResourceManager@@UEAA@XZ.c)
 */

void **__fastcall CBtAudioResourceManager::`scalar deleting destructor'(void **this, char a2)
{
  CBtAudioResourceManager::~CBtAudioResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x278);
  return this;
}

/*
 * XREFs of ??_GCEndpointCharacteristicsCache@@UEAAPEAXI@Z @ 0x180137600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointCharacteristicsCache@@UEAA@XZ @ 0x18013544C (--1CEndpointCharacteristicsCache@@UEAA@XZ.c)
 */

CEndpointCharacteristicsCache *__fastcall CEndpointCharacteristicsCache::`scalar deleting destructor'(
        CEndpointCharacteristicsCache *this,
        char a2)
{
  CEndpointCharacteristicsCache::~CEndpointCharacteristicsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}

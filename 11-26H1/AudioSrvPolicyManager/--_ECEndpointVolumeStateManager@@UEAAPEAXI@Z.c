/*
 * XREFs of ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x180048770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointVolumeStateManager@@UEAA@XZ @ 0x1800486A4 (--1CEndpointVolumeStateManager@@UEAA@XZ.c)
 */

CEndpointVolumeStateManager *__fastcall CEndpointVolumeStateManager::`vector deleting destructor'(
        CEndpointVolumeStateManager *this,
        char a2)
{
  CEndpointVolumeStateManager::~CEndpointVolumeStateManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}

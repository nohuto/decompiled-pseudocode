/*
 * XREFs of ??_GCNetworkExperienceManager@@UEAAPEAXI@Z @ 0x1803B4980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CNetworkExperienceManager@@UEAA@XZ @ 0x1802B0414 (--1CNetworkExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CNetworkExperienceManager *__fastcall CNetworkExperienceManager::`scalar deleting destructor'(
        CNetworkExperienceManager *this,
        char a2)
{
  CNetworkExperienceManager::~CNetworkExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}

/*
 * XREFs of ??_GCNetworkExperienceManager@@UEAAPEAXI@Z @ 0x1803BE150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CNetworkExperienceManager@@UEAA@XZ @ 0x1802A8754 (--1CNetworkExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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

/*
 * XREFs of ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x18056C52C
 * Callers:
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z @ 0x18056C360 (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ @ 0x18056C080 (--1FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vector deleting destructor'(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        char a2)
{
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::~FamilyAppUsageManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}

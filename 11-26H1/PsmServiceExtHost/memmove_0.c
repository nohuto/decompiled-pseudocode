/*
 * XREFs of memmove_0 @ 0x1800A28CE
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18000E610 (PsmHostStateNotification2.c)
 *     SdbGetDatabaseID @ 0x18008D4A8 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x18009048C (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x180096C14 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 *     AslPathClean @ 0x18009EA2C (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

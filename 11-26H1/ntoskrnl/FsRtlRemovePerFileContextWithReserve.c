/*
 * XREFs of FsRtlRemovePerFileContextWithReserve @ 0x1405B5980
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupPerFileContext @ 0x14046F460 (FsRtlLookupPerFileContext.c)
 *     FsRtlRemovePerFileContext @ 0x1405B58B0 (FsRtlRemovePerFileContext.c)
 */

PFSRTL_PER_FILE_CONTEXT __fastcall FsRtlRemovePerFileContextWithReserve(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  PFSRTL_PER_FILE_CONTEXT result; // rax
  PFSRTL_PER_FILE_CONTEXT *v7; // r9

  result = FsRtlLookupPerFileContext(PerFileContextPointer, OwnerId, InstanceId);
  v7 = (PFSRTL_PER_FILE_CONTEXT *)*PerFileContextPointer;
  if ( !result || result != v7[4] )
    return FsRtlRemovePerFileContext(PerFileContextPointer, OwnerId, InstanceId);
  v7[4] = 0LL;
  return result;
}

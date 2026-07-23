/*
 * XREFs of FsRtlLookupPerFileContext @ 0x140468BE0
 * Callers:
 *     FsRtlRemovePerFileContextWithReserve @ 0x1405B8190 (FsRtlRemovePerFileContextWithReserve.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14030C010 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x140468CA0 (FsRtlReleaseAutoExpandPushLockShared.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KLOCK_ENTRIES *v3; // r9
  char *v4; // rcx
  PFSRTL_PER_FILE_CONTEXT result; // rax
  struct _FSRTL_PER_FILE_CONTEXT **v8; // rsi
  struct _FSRTL_PER_FILE_CONTEXT *v9; // rbp
  __int64 v10; // rdx
  struct _FSRTL_PER_FILE_CONTEXT *j; // rax
  struct _FSRTL_PER_FILE_CONTEXT *i; // rcx

  v4 = (char *)*PerFileContextPointer;
  if ( !v4 )
    return 0LL;
  result = (PFSRTL_PER_FILE_CONTEXT)*((_QWORD *)v4 + 4);
  if ( !result || result->OwnerId != OwnerId || InstanceId && result->InstanceId != InstanceId )
  {
    v8 = (struct _FSRTL_PER_FILE_CONTEXT **)(v4 + 16);
    if ( *v8 == (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
      return 0LL;
    v9 = 0LL;
    v10 = FsRtlAcquireAutoExpandPushLockShared((__int64)v4, (__int64)OwnerId, (__int64)InstanceId, v3);
    if ( InstanceId )
    {
      for ( i = *v8; i != (struct _FSRTL_PER_FILE_CONTEXT *)v8; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
      {
        if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        {
          v9 = i;
          break;
        }
      }
    }
    else if ( OwnerId )
    {
      for ( j = *v8; j != (struct _FSRTL_PER_FILE_CONTEXT *)v8; j = (struct _FSRTL_PER_FILE_CONTEXT *)j->Links.Flink )
      {
        if ( j->OwnerId == OwnerId )
        {
          v9 = j;
          break;
        }
      }
    }
    else if ( *v8 != (struct _FSRTL_PER_FILE_CONTEXT *)v8 )
    {
      v9 = *v8;
    }
    FsRtlReleaseAutoExpandPushLockShared(v10);
    return v9;
  }
  return result;
}

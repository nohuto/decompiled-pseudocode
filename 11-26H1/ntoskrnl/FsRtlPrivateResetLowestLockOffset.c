/*
 * XREFs of FsRtlPrivateResetLowestLockOffset @ 0x14030A194
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14030C590 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlPrivateResetLowestLockOffset(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 i; // rax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 j; // rax

  v1 = a1[4];
  v2 = 0LL;
  if ( v1 )
  {
    for ( i = *(_QWORD *)(v1 + 8); i; i = *(_QWORD *)(i + 8) )
      v1 = i;
    v2 = *(_QWORD *)(v1 - 24);
  }
  else if ( !a1[5] )
  {
    result = -1LL;
    goto LABEL_9;
  }
  v5 = a1[5];
  if ( v5 )
  {
    for ( j = *(_QWORD *)(v5 + 8); j; j = *(_QWORD *)(j + 8) )
      v5 = j;
    v7 = (__int64 *)(v5 + 24);
    if ( !v2 )
      goto LABEL_8;
    v6 = (__int64 *)(v2 + 8);
    if ( *v7 < (unsigned __int64)*v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = (__int64 *)(v2 + 8);
  }
  v7 = v6;
LABEL_8:
  result = *v7;
LABEL_9:
  *a1 = result;
  return result;
}

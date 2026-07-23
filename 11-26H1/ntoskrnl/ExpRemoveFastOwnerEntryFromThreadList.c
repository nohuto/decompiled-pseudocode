/*
 * XREFs of ExpRemoveFastOwnerEntryFromThreadList @ 0x14041ECF0
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041E56C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExDisownFastResource @ 0x1404F1ED0 (ExDisownFastResource.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1406D2680 (ExpConvertSharedToExclusiveImmediately.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpRemoveFastOwnerEntryFromThreadList(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}

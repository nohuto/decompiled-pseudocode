/*
 * XREFs of CcGetPrivateVolumeCacheMapFromFileObject @ 0x1403E03E0
 * Callers:
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CcGetPrivateVolumeCacheMapFromFileObject(_QWORD *a1, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *v6; // r8
  struct _LIST_ENTRY *j; // rcx

  if ( !CcEnablePerVolumeLazyWriter )
    return 0LL;
  v2 = a1[5];
  if ( !v2 || (v3 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    if ( a1[2] )
      a1 = (_QWORD *)a1[2];
    for ( i = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
          i != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
          i = i->Flink )
    {
      if ( i[-1].Blink == (struct _LIST_ENTRY *)a1[1] )
      {
        v6 = i + 12;
        for ( j = i[12].Flink; j != v6; j = j->Flink )
        {
          result = j - 37;
          if ( j[-35].Flink == a2 )
            return result;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  return *(struct _LIST_ENTRY **)(v3 + 600);
}

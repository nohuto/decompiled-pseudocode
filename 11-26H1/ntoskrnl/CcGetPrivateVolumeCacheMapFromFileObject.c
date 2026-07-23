/*
 * XREFs of CcGetPrivateVolumeCacheMapFromFileObject @ 0x1403E35D0
 * Callers:
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcGetPrivateVolumeCacheMapFromFileObject(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *result; // rax
  unsigned __int64 i; // rax
  _QWORD *v6; // r8
  _QWORD *j; // rcx

  if ( !CcEnablePerVolumeLazyWriter )
    return 0LL;
  v2 = a1[5];
  if ( !v2 || (v3 = *(_QWORD *)(v2 + 8)) == 0 )
  {
    if ( a1[2] )
      a1 = (_QWORD *)a1[2];
    for ( i = EmpParseLock.KernelWaitTime; (unsigned __int64 *)i != &EmpParseLock.KernelWaitTime; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i - 8) == a1[1] )
      {
        v6 = (_QWORD *)(i + 192);
        for ( j = *(_QWORD **)(i + 192); j != v6; j = (_QWORD *)*j )
        {
          result = j - 74;
          if ( *(j - 70) == a2 )
            return result;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  return *(_QWORD **)(v3 + 600);
}

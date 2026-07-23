/*
 * XREFs of FsRtlFindFirstOverlappingExclusiveNode @ 0x1404742D0
 * Callers:
 *     FsRtlGetNextFileLock @ 0x1405B8250 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlappingExclusiveNode(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  _QWORD *v5; // r10
  _QWORD *v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r8

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  v9 = a1 == 0LL;
  if ( a1 )
  {
    do
    {
      v10 = *a2;
      v5 = a1;
      v11 = a1[8];
      if ( v11 >= *a2 && ((v12 = a1[3]) != 0 || a1[4]) )
      {
        if ( v12 <= *a3 && (*a3 != -1LL || v10) )
        {
          if ( v12 <= v10 )
            break;
          v8 = a1;
        }
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 1;
        a1 = (_QWORD *)a1[1];
      }
      else if ( v11 == *a3 && a1[3] == v10 )
      {
        v8 = a1;
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 0;
        a1 = (_QWORD *)a1[1];
      }
      else
      {
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 0;
        a1 = (_QWORD *)a1[2];
      }
    }
    while ( a1 );
    v9 = a1 == 0LL;
  }
  if ( !v9 )
    return v5;
  return v8;
}

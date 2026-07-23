/*
 * XREFs of FsRtlFindFirstOverlappingSharedNode @ 0x140461570
 * Callers:
 *     FsRtlGetNextFileLock @ 0x1405B8250 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlFindFirstOverlappingSharedNode(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx

  v6 = a1;
  v7 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    do
    {
      v9 = *a2;
      v7 = v6 - 24;
      v10 = *(_QWORD **)(v6 - 24);
      if ( *(_QWORD *)(v6 - 24 + 16) >= *a2 && ((v11 = v10[1]) != 0 || v10[2]) )
      {
        if ( v11 <= *a3 && (*a3 != -1LL || v9) )
        {
          if ( v11 <= v9 )
            break;
          v8 = v6 - 24;
        }
        if ( a4 )
          *a4 = v6;
        if ( a5 )
          *a5 = 1;
        v6 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        if ( v10[6] == *a3 && v10[1] == v9 )
          break;
        if ( a4 )
          *a4 = v6;
        if ( a5 )
          *a5 = 0;
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( v6 );
  }
  if ( v6 )
    v8 = v7;
  v12 = v8 + 24;
  if ( !v8 )
    return 0LL;
  return v12;
}

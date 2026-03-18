/*
 * XREFs of MulFindDisplayDhsurfFromMetaSurf @ 0x1401510B0
 * Callers:
 *     bDfbSurfacesMigrated @ 0x14006FE30 (bDfbSurfacesMigrated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFindDisplayDhsurfFromMetaSurf(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 **i; // r8
  _QWORD *v5; // r9
  __int64 v6; // rax

  if ( *((_WORD *)a1 + 38) != 3 )
    return 0LL;
  v1 = a1[3];
  v2 = 0LL;
  v3 = *a1;
  if ( v1 && (*(_DWORD *)(v1 + 40) & 0x20000) != 0 && v3 )
  {
    for ( i = *(__int64 ***)a1[2]; i; i = (__int64 **)*i )
    {
      v5 = *(_QWORD **)(*(_QWORD *)(v3 + 8) + 8LL * *((unsigned int *)i + 4));
      if ( v5 )
      {
        v6 = v5[3];
        if ( !v6 || *(_DWORD *)(*(_QWORD *)(v6 + 1776) + 32LL) == 1 )
          return *v5;
      }
    }
  }
  return v2;
}

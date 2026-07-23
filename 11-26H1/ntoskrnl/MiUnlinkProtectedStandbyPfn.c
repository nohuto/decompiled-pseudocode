/*
 * XREFs of MiUnlinkProtectedStandbyPfn @ 0x14045B25C
 * Callers:
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 * Callees:
 *     MiDecayNodeNowEmpty @ 0x14045B3F8 (MiDecayNodeNowEmpty.c)
 */

signed __int64 __fastcall MiUnlinkProtectedStandbyPfn(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  BOOL v5; // ebx
  int v6; // ecx
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  signed __int64 v11; // rcx
  signed __int64 result; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int64 v15; // rdx

  v1 = *a1;
  v2 = a1[3];
  v3 = *a1 & 0xFFFFFFFFFFLL;
  v4 = v2 & 0xFFFFFFFFFFLL;
  v5 = 0;
  if ( (v2 & 0xFFFFFFFFFFuLL) < qword_140E34930 || v4 >= qword_140E34930 + 2048 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v5 = v3 == v4;
  }
  v7 = (unsigned __int64 *)(48 * v4 - 0x220000000000LL);
  if ( v6 )
  {
    v9 = (v3 << 12) | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | 0x880;
    if ( qword_140E2D8C0 )
    {
      v8 = (v3 << 12) | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL;
      if ( (qword_140E2D8C0 & v9) != 0 )
        v9 = v8 | 0x890;
      else
        v9 = qword_140E2D8C0 | v8 | 0x880;
    }
    v7[2] = v9;
  }
  else
  {
    *v7 = v1 ^ (v1 ^ *v7) & 0xFFFFFF0000000000uLL;
  }
  v10 = 48 * v3 - 0x220000000000LL;
  if ( v3 < qword_140E34930 || v3 >= qword_140E34930 + 2048 )
  {
    v11 = *(_QWORD *)(v10 + 24);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v10 + 24),
               v2 ^ (v2 ^ v11) & 0xFFFFFF0000000000uLL,
               v11);
    if ( v11 != result )
    {
      do
      {
        v13 = result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v10 + 24),
                   v2 ^ (v2 ^ result) & 0xFFFFFF0000000000uLL,
                   result);
      }
      while ( v13 != result );
    }
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 40);
    v15 = v14;
    for ( result = v14; ; v15 = result )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v10 + 40),
                 v2 ^ (v2 ^ v15) & 0xFFFFFF0000000000uLL,
                 result);
      if ( v14 == result )
        break;
      v14 = result;
    }
  }
  if ( v5 )
    return MiDecayNodeNowEmpty(v4);
  return result;
}

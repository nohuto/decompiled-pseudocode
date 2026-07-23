/*
 * XREFs of MiClusterVadFull @ 0x140467BE0
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadFull(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  __int64 v14; // rdi

  v5 = a1 + 0x220000000000LL;
  v6 = (_QWORD *)(a1 + 8);
  v7 = (unsigned __int128)(v5 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = *v6 | 0x8000000000000000uLL;
  if ( a3 )
  {
    if ( v8 < *(_QWORD *)(a3 + 8) )
      return 0LL;
    v14 = *(_QWORD *)(a3 + 8);
    if ( v8 >= v14 + 8 * (unsigned __int64)(unsigned int)(*(_DWORD *)(a3 + 44) - *(_DWORD *)(a3 + 52)) )
      return 0LL;
    v9 = (__int64)(v8 - v14) >> 3;
  }
  else
  {
    v9 = (v8 >> 3) & 0x1FF;
  }
  if ( (v9 & (a2 - 1)) != ((((unsigned __int64)v7 >> 63) + (v7 >> 3)) & (a2 - 1)) )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  v11 = a1 + 48 * a2 - 48;
  v12 = v8 + 8 * (a2 - 1);
  while ( (unsigned __int64)(v6 - 1) < v11 )
  {
    if ( (v6[4] & 0xFFFFFFFFFFLL) != v10
      || (*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFLL) != v10
      || (*v6 | 0x8000000000000000uLL) != v8
      || (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != v12 )
    {
      return 0LL;
    }
    v6 += 6;
    v11 -= 48LL;
    v8 += 8LL;
    v12 -= 8LL;
  }
  return 1LL;
}

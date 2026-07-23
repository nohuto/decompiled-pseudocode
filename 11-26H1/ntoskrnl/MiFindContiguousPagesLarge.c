/*
 * XREFs of MiFindContiguousPagesLarge @ 0x1403D366C
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiFindLargeNodePage @ 0x1403D3884 (MiFindLargeNodePage.c)
 *     MiInitializeFoundLargeNodePage @ 0x1406EF99C (MiInitializeFoundLargeNodePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindContiguousPagesLarge(__int64 *a1, ULONG_PTR *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 *v8; // rcx
  int v9; // r9d
  _DWORD *v10; // r10
  __int64 v11; // rdx
  __int64 i; // rax
  __int64 LargeNodePage; // rax
  __int64 v14; // rdi
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdi
  _OWORD v20[2]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v21; // [rsp+60h] [rbp-9h] BYREF
  __int128 v22; // [rsp+70h] [rbp+7h]

  v2 = *a1;
  *(_QWORD *)&v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  DWORD2(v22) = 0;
  v21 = 0LL;
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_QWORD *)(v2 + 24);
  if ( *(_QWORD *)(v2 + 8) == 0x100000LL )
    *(_DWORD *)(v2 + 60) |= 0x8000u;
  v7 = !_bittest64(&KeFeatureBits, 0x25u);
  v8 = &MiPageSizes[v7];
  do
  {
    if ( v5 == *v8 )
      break;
    LODWORD(v7) = v7 + 1;
    ++v8;
  }
  while ( (unsigned int)v7 < 3 );
  v9 = (unsigned __int16)KeNumberNodes;
  if ( (((unsigned __int8)((unsigned __int8)&v21 + 9) - 41) & 4) != 0 )
    LODWORD(v20[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v20;
  if ( (((unsigned __int8)((unsigned __int8)&v21 + 9) - 41) & 4) != 0 )
    v10 = (_DWORD *)v20 + 1;
  memset64(v10, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
  if ( (((unsigned __int8)((unsigned __int8)&v21 + 9) - 41) & 4) == 0 )
    v10[2] = v9;
  v11 = 0LL;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    if ( v6 == MiPageSizes[i] )
    {
      v11 = MiDemandLargePageCoalesceTimeBounds[i];
      break;
    }
  }
  *((_QWORD *)&v21 + 1) = v11;
  v22 = 0LL;
  LargeNodePage = MiFindLargeNodePage(
                    *(_QWORD *)v2,
                    *(_DWORD *)(v2 + 52),
                    v7,
                    v7,
                    *(_DWORD *)(v2 + 60),
                    *(_DWORD *)(v2 + 48),
                    (__int64)v20);
  v14 = LargeNodePage;
  if ( !LargeNodePage )
    return 3221225495LL;
  MiGetPfnPageSizeIndex(LargeNodePage);
  MiInitializeFoundLargeNodePage(v14, *(unsigned int *)(v2 + 60), *(unsigned int *)(v2 + 64));
  v16 = (v14 + 0x220000000000LL) / 48;
  if ( v16 + v5 - 1 > *(_QWORD *)(v2 + 16) )
  {
    MiFreeContiguousPages(v16, v5, 0);
    *((_DWORD *)a1 + 64) &= ~1u;
    return 3221225495LL;
  }
  *a2 = v16;
  v17 = *(_QWORD *)(v2 + 72);
  if ( v17 )
  {
    v18 = (_QWORD *)(v17 + 8 * (((unsigned __int64)*(unsigned int *)(v17 + 40) >> 12) + 6));
    if ( v5 )
    {
      v19 = v5;
      do
      {
        *v18++ = v16++;
        --v19;
      }
      while ( v19 );
    }
    *(_DWORD *)(v17 + 40) += (_DWORD)v5 << 12;
  }
  return 0LL;
}

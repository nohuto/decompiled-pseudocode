/*
 * XREFs of ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x140113750
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140113090 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall umptr_r<unsigned char>::read<unsigned char>(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // r10
  size_t v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  char v12; // al

  v6 = *(_QWORD *)(a1 + 16);
  if ( a4 )
  {
    v9 = 0LL;
    if ( v6 <= 0x7FFFFFFFFFFFFFFFLL
      && ((v10 = v6 + a4, v11 = v6 >> 63, (_DWORD)v11 != a4 >> 63)
       || (_DWORD)v11 == (unsigned __int64)v10 > 0x7FFFFFFFFFFFFFFFLL)
      && v10 >= 0 )
    {
      v9 = v10;
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    if ( !v12 || v9 > *(_QWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 24) = 1;
    v6 = v9;
  }
  v7 = 0LL;
  if ( a3 > *(_QWORD *)(a1 + 8) - v6 )
    goto LABEL_17;
  v7 = a3;
  if ( !is_mul_ok(a3, 1uLL) )
  {
    v7 = -1LL;
LABEL_17:
    *(_BYTE *)(a1 + 24) = 1;
  }
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  memmove(a2, (const void *)(v6 + *(_QWORD *)a1), v7);
  return 1;
}

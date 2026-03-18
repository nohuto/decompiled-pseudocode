/*
 * XREFs of ??$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z @ 0x1401F4594
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1403ED820 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     PREALLOCMEM2 @ 0x14020E9A0 (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<FONTSUB,1651729991>(unsigned int *a1, void **a2, _DWORD *a3, _OWORD *a4)
{
  int v4; // eax
  _OWORD *v9; // rdx
  __int128 v10; // xmm0
  _OWORD *v11; // rbx
  int v13; // esi
  __int64 v14; // rax

  v4 = *a1;
  if ( *a1 < *a3 )
    goto LABEL_2;
  v13 = v4 + 32;
  if ( *a2 )
    v14 = PREALLOCMEM2(*a2);
  else
    v14 = PALLOCMEM(196 * (v4 + 32), 1651729991LL);
  if ( v14 )
  {
    *a2 = (void *)v14;
    *a3 = v13;
LABEL_2:
    v9 = (char *)*a2 + 196 * *a1;
    *v9 = *a4;
    v9[1] = a4[1];
    v9[2] = a4[2];
    v9[3] = a4[3];
    v9[4] = a4[4];
    v9[5] = a4[5];
    v9[6] = a4[6];
    v9 += 8;
    v10 = a4[7];
    v11 = a4 + 8;
    *(v9 - 1) = v10;
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    *((_DWORD *)v9 + 16) = *((_DWORD *)v11 + 16);
    ++*a1;
    return 0LL;
  }
  return 3221225495LL;
}

/*
 * XREFs of sub_1800D05B8 @ 0x1800D05B8
 * Callers:
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D05B8(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 256);
  return v1 == 4318
      && (*(_DWORD *)(a1 + 260) == 1028
       || *(_DWORD *)(a1 + 260) == 1058
       || *(_DWORD *)(a1 + 260) == 1060
       || *(_DWORD *)(a1 + 260) == 1764)
      || v1 == 32902 && (*(_DWORD *)(a1 + 260) == 66 || *(_DWORD *)(a1 + 260) == 70);
}

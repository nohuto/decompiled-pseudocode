/*
 * XREFs of RtlpValidAccessFilterAce @ 0x14077FD94
 * Callers:
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     SepCheckAcl @ 0x1409E0B40 (SepCheckAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // ax
  __int64 v3; // r8
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && (v2 = *(unsigned __int8 *)(a1 + 9), (unsigned __int8)v2 <= 0xFu)
        && (v3 = (unsigned __int16)(4 * (v2 + 2)), (int)v1 - (int)v3 - 8 >= 6)
        && *(_DWORD *)(v3 + a1 + 8) == 2020897377;
  return result;
}

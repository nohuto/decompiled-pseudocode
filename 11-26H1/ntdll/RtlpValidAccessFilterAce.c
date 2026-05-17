/*
 * XREFs of RtlpValidAccessFilterAce @ 0x180122DB8
 * Callers:
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidAccessFilterAce(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 9) <= 0xFu
        && (v2 = (unsigned __int16)(4 * (*(unsigned __int8 *)(a1 + 9) + 2)), (int)v1 - (int)v2 - 8 >= 6)
        && *(_DWORD *)(v2 + a1 + 8) == 2020897377;
  return result;
}

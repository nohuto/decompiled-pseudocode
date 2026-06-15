/*
 * XREFs of sub_14003FC00 @ 0x14003FC00
 * Callers:
 *     sub_140035C30 @ 0x140035C30 (sub_140035C30.c)
 *     sub_1400549B0 @ 0x1400549B0 (sub_1400549B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003FC00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 i; // rdx

  *(_OWORD *)a1 = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 44);
  result = *(unsigned int *)(a2 + 48);
  *(_DWORD *)(a1 + 24) = result;
  v3 = a2 + *(unsigned int *)(a2 + 76);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    result = *(unsigned int *)(v3 + 4 * i + 80);
    *(_DWORD *)(a1 + 4 * i + 28) = result;
  }
  return result;
}

/*
 * XREFs of CddEngGetRgnBox @ 0x1401FB9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14012E038 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall CddEngGetRgnBox(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_OWORD *)(a1 + 28);
  v5 = a1;
  *(_OWORD *)a2 = v2;
  result = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v5);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}

/*
 * XREFs of CddEngGetRgnBox @ 0x1401D2900
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14008BC70 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall CddEngGetRgnBox(__int64 a1, const struct REGION_CORE *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  Win32kRS *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_OWORD *)(a1 + 28);
  v5 = (Win32kRS *)a1;
  *(_OWORD *)a2 = v2;
  result = RGNCOREOBJ::iComplexity(&v5, a2);
  if ( (_DWORD)result == 1 )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  return result;
}

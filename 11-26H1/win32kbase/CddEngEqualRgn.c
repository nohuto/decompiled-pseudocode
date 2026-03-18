/*
 * XREFs of CddEngEqualRgn @ 0x1401FB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14013CAF0 (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CddEngEqualRgn(REGION_CORE *a1, REGION_CORE *a2)
{
  __int64 result; // rax
  REGION_CORE *v3; // [rsp+30h] [rbp+8h] BYREF
  REGION_CORE *v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = a1;
  v3 = a2;
  if ( a1 )
  {
    if ( a2 )
      return (unsigned __int8)RGNCOREOBJ::bEqual(&v4, &v3);
  }
  return result;
}

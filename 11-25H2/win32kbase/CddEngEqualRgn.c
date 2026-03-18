/*
 * XREFs of CddEngEqualRgn @ 0x1401D28C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14009617C (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CddEngEqualRgn(REGION_CORE *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  REGION_CORE *v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = a1;
  v3 = a2;
  if ( a1 )
  {
    if ( a2 )
      return (unsigned __int8)RGNCOREOBJ::bEqual(&v4, (const struct RGNCOREOBJ *)&v3);
  }
  return result;
}

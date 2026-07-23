/*
 * XREFs of PnpConvertDevpropcompkeyArrayToString @ 0x1409F8958
 * Callers:
 *     PiDqTraceQueryCreate @ 0x140950F84 (PiDqTraceQueryCreate.c)
 * Callees:
 *     ConvertDevpropcompkeyToString @ 0x1409F8B48 (ConvertDevpropcompkeyToString.c)
 */

__int64 __fastcall PnpConvertDevpropcompkeyArrayToString(
        __int64 a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  _WORD *v6; // r14
  unsigned int v10; // ebx
  unsigned int i; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v13 = 0;
  v10 = 2;
  if ( a4 >= 2 )
    *a3 = 0;
  for ( i = 0; i < a2; ++i )
  {
    result = ConvertDevpropcompkeyToString(a1 + 32LL * i, v6, v5, &v13);
    if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
      return result;
    if ( v10 + v13 - 2 < v10 )
      return 3221225621LL;
    v10 += v13 - 2;
    if ( v5 >= (unsigned __int64)v13 - 2 )
    {
      v5 += 2 - v13;
      v6 += ((unsigned __int64)v13 - 2) >> 1;
    }
  }
  result = 0LL;
  if ( a5 )
    *a5 = v10;
  if ( v10 > a4 )
    return 3221225507LL;
  return result;
}

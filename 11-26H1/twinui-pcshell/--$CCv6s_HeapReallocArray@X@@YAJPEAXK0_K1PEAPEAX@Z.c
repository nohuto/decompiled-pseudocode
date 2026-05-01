/*
 * XREFs of ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x180683D80
 * Callers:
 *     _DSA_MaybeShrink @ 0x180683E00 (_DSA_MaybeShrink.c)
 *     DSA_Preallocate @ 0x1806843BC (DSA_Preallocate.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CCv6s_HeapReallocArray<void>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 result; // rax
  void *v7; // r10
  void *v8; // r11
  LPVOID v9; // rax
  SIZE_T dwBytes[3]; // [rsp+20h] [rbp-18h] BYREF

  dwBytes[0] = 0LL;
  result = ULongLongMult(a4, a5, dwBytes);
  if ( (int)result >= 0 )
  {
    if ( v7 )
      v9 = HeapReAlloc(v8, 0, v7, dwBytes[0]);
    else
      v9 = HeapAlloc(v8, 0, dwBytes[0]);
    if ( v9 )
    {
      *a6 = v9;
      return 0LL;
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}

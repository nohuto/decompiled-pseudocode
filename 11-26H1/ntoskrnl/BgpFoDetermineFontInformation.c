/*
 * XREFs of BgpFoDetermineFontInformation @ 0x140D139B0
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x140D148A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFoGetTextMetrics @ 0x14051954C (BgpFoGetTextMetrics.c)
 *     BgpFoGetFontHandle @ 0x140C54508 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpFoDetermineFontInformation(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 **a6)
{
  __int64 result; // rax
  __int64 *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  int v12; // ecx
  unsigned int *v13; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-18h]
  unsigned int v16; // [rsp+30h] [rbp-10h]
  int v17; // [rsp+34h] [rbp-Ch]
  __int64 *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF

  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  result = BgpFoGetFontHandle(0LL, &v18);
  if ( (int)result >= 0 )
  {
    v9 = v18;
    v10 = 4;
    v15 = v18;
    v14[0] = 0;
    v14[1] = -1;
    v17 = 0;
    do
    {
      v11 = v10++;
      v16 = v10;
      result = BgpFoGetTextMetrics((__int64)v14, (__int64)&v19);
      if ( (int)result < 0 )
        return result;
      v12 = HIDWORD(v19);
    }
    while ( HIDWORD(v19) < a1 );
    if ( HIDWORD(v19) <= a1 )
    {
LABEL_10:
      *a4 = v19;
      v13 = a5;
      a4[1] = v12;
      *v13 = v10;
      *a6 = v9;
      return 0LL;
    }
    if ( v10 <= 5 )
      return 3221225473LL;
    v10 = v11;
    v16 = v11;
    result = BgpFoGetTextMetrics((__int64)v14, (__int64)&v19);
    if ( (int)result >= 0 )
    {
      v12 = HIDWORD(v19);
      goto LABEL_10;
    }
  }
  return result;
}

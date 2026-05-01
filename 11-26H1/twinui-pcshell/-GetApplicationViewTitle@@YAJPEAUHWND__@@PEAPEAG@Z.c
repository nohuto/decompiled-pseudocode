/*
 * XREFs of ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800BFA2C
 * Callers:
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x1800C0460 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BFC54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall GetApplicationViewTitle(HWND hWnd, unsigned __int16 **a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int16 *v7; // rax
  signed __int64 v8; // rdx
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  LPARAM lParam; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v13[260]; // [rsp+28h] [rbp-D8h] BYREF
  _WORD v14[256]; // [rsp+230h] [rbp+130h] BYREF

  *a2 = 0LL;
  v14[0] = 0;
  memset_0(&lParam, 0, 0x208uLL);
  v4 = 255LL;
  result = StringCchPrintfW(v13, 0xFFuLL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)hWnd);
  if ( (int)result >= 0 )
  {
    v6 = 255LL;
    v7 = v13;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    result = v6 == 0 ? 0x80070057 : 0;
    if ( v6 )
    {
      lParam = 255 - v6;
      if ( EnumPropsExW(hWnd, ApplicationViewTitleEnum, (LPARAM)&lParam) )
      {
        return 2147943568LL;
      }
      else
      {
        v8 = (char *)v13 - (char *)v14;
        v9 = v14;
        do
        {
          if ( v4 == -2147483391 )
            break;
          v10 = *(_WORD *)((char *)v9 + v8);
          if ( !v10 )
            break;
          *v9++ = v10;
          --v4;
        }
        while ( v4 );
        v11 = v9 - 1;
        if ( v4 )
          v11 = v9;
        *v11 = 0;
        result = v4 == 0 ? 0x8007007A : 0;
        if ( v4 )
          return _AllocString<CTCoAllocPolicy>(v9, v8, &v14[lParam], a2);
      }
    }
  }
  return result;
}

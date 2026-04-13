/*
 * XREFs of ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180018DF0
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x180005F7C (_Wcrtomb.c)
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_out(
        __int64 a1,
        mbstate_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        wchar_t **a5,
        char *a6,
        char *a7,
        void **a8)
{
  char *v9; // rcx
  wchar_t *v11; // rdx
  BOOL v12; // ebx
  const _Cvtvec *v13; // r13
  wchar_t v14; // dx
  int v15; // eax
  unsigned int Wchar; // r12d
  int v17; // eax
  __int64 v18; // r15
  char Src[8]; // [rsp+28h] [rbp-40h] BYREF

  v9 = a6;
  *a5 = a3;
  *a8 = a6;
  v11 = *a5;
  v12 = *a5 != a4;
  if ( *a5 == a4 || a6 == a7 )
    return v12;
  v13 = (const _Cvtvec *)(a1 + 16);
  while ( 1 )
  {
    v14 = *v11;
    if ( __mb_cur_max > a7 - v9 )
      break;
    v15 = Wcrtomb(v9, v14, a2, v13);
    if ( v15 < 0 )
      return 2LL;
    ++*a5;
    *a8 = (char *)*a8 + v15;
LABEL_10:
    v11 = *a5;
    v12 = 0;
    if ( *a5 != a4 )
    {
      v9 = (char *)*a8;
      if ( *a8 != a7 )
        continue;
    }
    return v12;
  }
  Wchar = a2->_Wchar;
  v17 = Wcrtomb(Src, v14, a2, v13);
  if ( v17 >= 0 )
  {
    v18 = v17;
    if ( a7 - (_BYTE *)*a8 < v17 )
    {
      a2->_Wchar = Wchar;
      return v12;
    }
    memcpy_0(*a8, Src, v17);
    ++*a5;
    *a8 = (char *)*a8 + v18;
    goto LABEL_10;
  }
  return 2LL;
}

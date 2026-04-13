/*
 * XREFs of ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18006B530
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x180005F7C (_Wcrtomb.c)
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::do_out(
        __int64 a1,
        mbstate_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        wchar_t **a5,
        char *a6,
        char *a7,
        void **a8)
{
  __int64 v8; // rax
  char *v10; // rcx
  BOOL i; // ebx
  const _Cvtvec *v13; // r9
  wchar_t v14; // dx
  int v15; // eax
  unsigned int Wchar; // r15d
  int v17; // eax
  __int64 v18; // rbp
  char Src[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = a1;
  v10 = a6;
  *a5 = a3;
  *a8 = a6;
  for ( i = *a5 != a4; ; i = 0 )
  {
    if ( *a5 == a4 || v10 == a7 )
      return i;
    v13 = (const _Cvtvec *)(v8 + 16);
    v14 = **a5;
    if ( __mb_cur_max <= a7 - v10 )
    {
      v15 = Wcrtomb(v10, v14, a2, v13);
      if ( v15 < 0 )
        return 2LL;
      ++*a5;
      *a8 = (char *)*a8 + v15;
      goto LABEL_10;
    }
    Wchar = a2->_Wchar;
    v17 = Wcrtomb(Src, v14, a2, v13);
    if ( v17 < 0 )
      break;
    v18 = v17;
    if ( a7 - (_BYTE *)*a8 < v17 )
    {
      a2->_Wchar = Wchar;
      return i;
    }
    memcpy_0(*a8, Src, v17);
    ++*a5;
    *a8 = (char *)*a8 + v18;
LABEL_10:
    v10 = (char *)*a8;
    v8 = a1;
  }
  return 2LL;
}

/*
 * XREFs of ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x1805F35D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802CB590 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall std::filebuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  char v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[7]; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-38h] BYREF
  char *v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h] BYREF

  v2 = -1;
  if ( a2 == -1 )
    return 0LL;
  if ( ((__int64 (*)(void))std::streambuf::pptr)() )
  {
    v6 = std::streambuf::epptr(a1);
    if ( std::streambuf::pptr(a1) < v6 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    std::filebuf::_Reset_back(a1);
    v7 = *(_QWORD *)(a1 + 104);
    if ( !v7 )
    {
      v8 = (unsigned int)(char)a2;
LABEL_9:
      v9 = (unsigned int)_o_fputc(v8, *(_QWORD *)(a1 + 128)) == -1;
LABEL_17:
      if ( !v9 )
        return a2;
      return v2;
    }
    v16 = 0LL;
    v15 = 0LL;
    v13 = a2;
    v10 = std::codecvt<char,char,_Mbstatet>::out(v7, a1 + 116, &v13, v14, &v16, v17, &v18, &v15);
    if ( !v10 || (v11 = v10 - 1) == 0 )
    {
      if ( v15 != v17 )
      {
        v12 = v15 - v17;
        if ( v12 != _o_fwrite(v17, 1LL, v15 - v17, *(_QWORD *)(a1 + 128)) )
          return v2;
      }
      *(_BYTE *)(a1 + 113) = 1;
      v9 = v16 == &v13;
      goto LABEL_17;
    }
    if ( v11 == 2 )
    {
      v8 = (unsigned int)v13;
      goto LABEL_9;
    }
  }
  return v2;
}

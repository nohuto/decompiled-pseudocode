/*
 * XREFs of ?seekpos@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x18015C080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::basic_stringbuf<unsigned short>::seekpos(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        char a4)
{
  _BYTE *v4; // rdi
  bool v8; // cl
  bool v9; // al
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r12

  v4 = (_BYTE *)(a1 + 112);
  v8 = (a4 & 1) != 0 && (*v4 & 4) != 0;
  v9 = (a4 & 2) != 0 && (*v4 & 2) != 0;
  if ( v8 || v9 )
    goto LABEL_29;
  v10 = *a3 + a3[1];
  v11 = std::basic_streambuf<unsigned short>::gptr(a1);
  if ( (*v4 & 2) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v13 = std::basic_streambuf<unsigned short>::pptr(a1);
    v12 = v13;
    if ( v13 && *(_QWORD *)(a1 + 104) < v13 )
      *(_QWORD *)(a1 + 104) = v13;
  }
  v14 = std::basic_streambuf<unsigned short>::eback(a1);
  v15 = v14;
  if ( v10 > (*(_QWORD *)(a1 + 104) - v14) >> 1 || v10 && ((a4 & 1) != 0 && !v11 || (a4 & 2) != 0 && !v12) )
  {
LABEL_29:
    *a2 = -1LL;
  }
  else
  {
    v16 = v14 + 2 * v10;
    if ( (a4 & 1) != 0 && v11 )
      std::basic_streambuf<unsigned short>::setg(a1, v14, v14 + 2 * v10);
    if ( (a4 & 2) != 0 && v12 )
    {
      std::basic_streambuf<unsigned short>::epptr(a1);
      std::basic_streambuf<unsigned short>::setp(a1, v15, v16);
    }
    *a2 = v10;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}

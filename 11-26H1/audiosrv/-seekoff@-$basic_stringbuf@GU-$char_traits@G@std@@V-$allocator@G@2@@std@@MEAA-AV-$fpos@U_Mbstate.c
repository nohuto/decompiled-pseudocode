/*
 * XREFs of ?seekoff@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x18015BEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::basic_stringbuf<unsigned short>::seekoff(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // rdi
  bool v10; // cl
  bool v11; // al
  __int64 v12; // r13
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15

  v5 = (_BYTE *)(a1 + 112);
  v10 = (a5 & 1) != 0 && (*v5 & 4) != 0;
  v11 = (a5 & 2) != 0 && (*v5 & 2) != 0;
  if ( v10 || v11 )
    goto LABEL_44;
  v12 = std::basic_streambuf<unsigned short>::gptr(a1);
  if ( (*v5 & 2) != 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v14 = std::basic_streambuf<unsigned short>::pptr(a1);
    v13 = v14;
    if ( v14 && *(_QWORD *)(a1 + 104) < v14 )
      *(_QWORD *)(a1 + 104) = v14;
  }
  v15 = std::basic_streambuf<unsigned short>::eback(a1);
  v16 = v15;
  v17 = (*(_QWORD *)(a1 + 104) - v15) >> 1;
  if ( !a4 )
  {
    v19 = 0LL;
    goto LABEL_31;
  }
  v18 = a4 - 1;
  if ( !v18 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v12 && v15 )
          goto LABEL_44;
        v20 = v12;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v13 && v15 )
          goto LABEL_44;
        v20 = v13;
      }
      v19 = (v20 - v16) >> 1;
      goto LABEL_31;
    }
LABEL_44:
    *a2 = -1LL;
    goto LABEL_45;
  }
  if ( v18 != 1 )
    goto LABEL_44;
  v19 = (*(_QWORD *)(a1 + 104) - v15) >> 1;
LABEL_31:
  v21 = v19 + a3;
  if ( v19 + a3 > v17 || v21 && ((a5 & 1) != 0 && !v12 || (a5 & 2) != 0 && !v13) )
    goto LABEL_44;
  if ( (a5 & 1) != 0 && v12 )
    std::basic_streambuf<unsigned short>::setg(a1, v16, v16 + 2 * v21);
  if ( (a5 & 2) != 0 && v13 )
  {
    std::basic_streambuf<unsigned short>::epptr(a1);
    std::basic_streambuf<unsigned short>::setp(a1, v16, v16 + 2 * v21);
  }
  *a2 = v21;
LABEL_45:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}

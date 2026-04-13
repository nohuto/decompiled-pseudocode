/*
 * XREFs of ?do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z @ 0x180020740
 * Callers:
 *     <none>
 * Callees:
 *     _Strxfrm @ 0x180021300 (_Strxfrm.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C934 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::collate<char>::do_transform(const _Collvec *a1, __int64 *a2, const char *a3, const char *a4)
{
  size_t v8; // rax
  unsigned __int64 v9; // rcx
  const _Collvec *v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rdx
  char *v15; // rcx
  __int64 *v16; // rcx

  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  v8 = a4 - a3;
  v9 = 0LL;
  if ( a4 == a3 )
  {
LABEL_17:
    if ( v8 > v9 )
    {
      std::string::append(a2, v8 - v9);
      return a2;
    }
  }
  else
  {
    v10 = a1 + 1;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v8 > v11 )
      {
        std::string::append(a2, v8 - v11);
      }
      else
      {
        v12 = (unsigned __int64)a2[3] < 0x10 ? (__int64)a2 : *a2;
        a2[2] = v8;
        *(_BYTE *)(v12 + v8) = 0;
      }
      v13 = (unsigned __int64)a2[3] < 0x10 ? (__int64)a2 : *a2;
      v14 = (char *)(v13 + a2[2]);
      v15 = (unsigned __int64)a2[3] < 0x10 ? (char *)a2 : (char *)*a2;
      v8 = Strxfrm(v15, v14, a3, a4, v10);
      v9 = a2[2];
      v11 = v9;
      if ( v8 <= v9 )
        break;
      if ( !v8 )
        goto LABEL_17;
    }
  }
  if ( (unsigned __int64)a2[3] < 0x10 )
    v16 = a2;
  else
    v16 = (__int64 *)*a2;
  a2[2] = v8;
  *((_BYTE *)v16 + v8) = 0;
  return a2;
}

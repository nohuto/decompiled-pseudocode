/*
 * XREFs of sub_180020BC0 @ 0x180020BC0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18000CED0 (memcpy.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800117B4 @ 0x1800117B4 (sub_1800117B4.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 *     sub_18001E920 @ 0x18001E920 (sub_18001E920.c)
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 */

__int64 __fastcall sub_180020BC0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  char *v8; // rbx
  __int64 v9; // rcx
  void *v10; // r15
  size_t v11; // rsi
  __int64 v12; // rbx
  char *v13; // r14
  __int64 v14; // rcx
  char *v15; // r9
  char *v16; // r8
  char *v17; // rbx
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( sub_18001E898(-1, a2) )
      return sub_18001E920(a2);
    v5 = std::streambuf::pptr(a1);
    v6 = std::streambuf::epptr(a1);
    v7 = v6;
    if ( v5 && v5 < v6 )
    {
      v8 = (char *)std::streambuf::_Pninc(a1);
      *v8 = sub_18001E9F0(a2);
      *(_QWORD *)(a1 + 104) = v5 + 1;
      return a2;
    }
    v10 = (void *)std::streambuf::eback(a1);
    v11 = (v7 - (_QWORD)v10) & -(__int64)(v5 != 0);
    v12 = 32LL;
    if ( v11 < 0x20 )
    {
LABEL_12:
      v20 = v12;
      v13 = (char *)sub_1800117B4(v9, (unsigned __int64 *)&v20);
      memcpy(v13, v10, v11);
      *(_QWORD *)(a1 + 104) = &v13[v11 + 1];
      std::streambuf::setp(a1, v13, &v13[v11], &v13[v12]);
      v14 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v15 = v13;
        v16 = v13;
      }
      else
      {
        v17 = *(char **)(a1 + 104);
        v18 = std::streambuf::gptr(a1);
        v15 = v17;
        v14 = a1;
        v16 = (char *)(v18 + v13 - (_BYTE *)v10);
      }
      std::streambuf::setg(v14, v13, v16, v15);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        sub_18000E26C(v10, v11);
      *(_DWORD *)(a1 + 112) |= 1u;
      v19 = (char *)std::streambuf::_Pninc(a1);
      *v19 = sub_18001E9F0(a2);
      return a2;
    }
    if ( v11 < 0x3FFFFFFF )
    {
      v12 = 2 * v11;
      goto LABEL_12;
    }
    v12 = 0x7FFFFFFFLL;
    if ( v11 < 0x7FFFFFFF )
      goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}

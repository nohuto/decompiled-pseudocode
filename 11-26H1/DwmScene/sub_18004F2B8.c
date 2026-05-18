/*
 * XREFs of sub_18004F2B8 @ 0x18004F2B8
 * Callers:
 *     sub_18004F428 @ 0x18004F428 (sub_18004F428.c)
 * Callees:
 *     sub_18001E6FC @ 0x18001E6FC (sub_18001E6FC.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 *     sub_18001E934 @ 0x18001E934 (sub_18001E934.c)
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_18001E9FC @ 0x18001E9FC (sub_18001E9FC.c)
 *     sub_18004F6C4 @ 0x18004F6C4 (sub_18004F6C4.c)
 *     sub_18005035C @ 0x18005035C (sub_18005035C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004F2B8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  unsigned int v6; // edi
  char v7; // r14
  int v8; // r15d
  __int64 v9; // rax
  int i; // eax
  int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v6 = 0;
  v7 = 0;
  LOBYTE(a3) = 1;
  sub_18004F6C4(v17, a1, a3);
  if ( v17[8] )
  {
    sub_18005035C(a2);
    v8 = sub_18001E9FC(v3);
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v13) )
    {
      v11 = i;
      if ( sub_18001E898(-1, i) )
        break;
      if ( sub_18001E898(v11, v8) )
      {
        v7 = 1;
        v14 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        std::streambuf::sbumpc(v14);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(a2 + 16) >= 0x7FFFFFFFFFFFFFFFuLL )
      {
        v6 = 2;
        goto LABEL_10;
      }
      LOBYTE(v12) = sub_18001E9F0(v11);
      sub_18001E934(a2, v12);
      v7 = 1;
      v13 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
    v6 = 1;
  }
LABEL_10:
  v15 = v6 | 2;
  if ( v7 )
    v15 = v6;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15, 0LL);
  sub_18001E6FC((__int64)v17);
  return a1;
}

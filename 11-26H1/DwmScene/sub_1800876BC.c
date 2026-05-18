/*
 * XREFs of sub_1800876BC @ 0x1800876BC
 * Callers:
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 * Callees:
 *     sub_18001E6FC @ 0x18001E6FC (sub_18001E6FC.c)
 *     sub_18001E740 @ 0x18001E740 (sub_18001E740.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 *     sub_18001E934 @ 0x18001E934 (sub_18001E934.c)
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_18001F180 @ 0x18001F180 (sub_18001F180.c)
 *     sub_18004F6C4 @ 0x18004F6C4 (sub_18004F6C4.c)
 *     sub_18005035C @ 0x18005035C (sub_18005035C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800876BC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64); // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  int i; // eax
  char v11; // si
  char v12; // si
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE v18[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  sub_18004F6C4((__int64)v18, a1, 0);
  if ( v18[8] )
  {
    v6 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v19);
    v7 = sub_18001F180(v6);
    sub_18001E740((__int64)v19);
    sub_18005035C(a2);
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) > 0
      && (unsigned __int64)std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) < 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)));
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v15) )
    {
      v11 = i;
      if ( !v8 )
        break;
      if ( sub_18001E898(-1, i) )
      {
        v4 = 1;
        break;
      }
      v12 = sub_18001E9F0(v11);
      LOBYTE(v13) = v12;
      if ( (unsigned __int8)std::ctype<char>::is(v7, 72LL, v13) )
        break;
      LOBYTE(v14) = v12;
      sub_18001E934(a2, v14);
      v5 = 1;
      --v8;
      v15 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  v16 = v4 | 2;
  if ( v5 )
    v16 = v4;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v16, 0LL);
  sub_18001E6FC((__int64)v18);
  return a1;
}

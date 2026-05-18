/*
 * XREFs of sub_180020570 @ 0x180020570
 * Callers:
 *     sub_1800C2B64 @ 0x1800C2B64 (sub_1800C2B64.c)
 *     sub_1800C2C44 @ 0x1800C2C44 (sub_1800C2C44.c)
 *     sub_1800C2E34 @ 0x1800C2E34 (sub_1800C2E34.c)
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     sub_1800C4FE4 @ 0x1800C4FE4 (sub_1800C4FE4.c)
 * Callees:
 *     sub_18001E62C @ 0x18001E62C (sub_18001E62C.c)
 *     sub_18001E780 @ 0x18001E780 (sub_18001E780.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180020570(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  sub_18001E62C((__int64)&v15, a1);
  if ( v16 )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v8) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v9 = std::streambuf::sputc(v7, v8);
        if ( sub_18001E898(-1, v9) )
          goto LABEL_17;
        --v6;
      }
    }
    v10 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v10, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v12) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v13 = std::streambuf::sputc(v11, v12);
        if ( sub_18001E898(-1, v13) )
          goto LABEL_17;
        --v6;
      }
    }
    else
    {
LABEL_17:
      v4 = 4;
    }
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  sub_18001E780(&v15);
  return a1;
}

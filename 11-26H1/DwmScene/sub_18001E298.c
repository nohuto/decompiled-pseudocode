/*
 * XREFs of sub_18001E298 @ 0x18001E298
 * Callers:
 *     sub_18001E154 @ 0x18001E154 (sub_18001E154.c)
 * Callees:
 *     sub_18001E62C @ 0x18001E62C (sub_18001E62C.c)
 *     sub_18001E780 @ 0x18001E780 (sub_18001E780.c)
 *     sub_18001E898 @ 0x18001E898 (sub_18001E898.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E298(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= a3 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - a3;
  }
  sub_18001E62C(v16, a1);
  if ( v16[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v9) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v10 = std::streambuf::sputc(v8, v9);
        if ( (unsigned __int8)sub_18001E898(0xFFFFFFFFLL, v10) )
        {
          v6 = 4;
          goto LABEL_12;
        }
        --v7;
      }
    }
    v14 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v14, a2, a3) == a3 )
    {
LABEL_12:
      while ( v7 )
      {
        v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v12) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v13 = std::streambuf::sputc(v11, v12);
        if ( (unsigned __int8)sub_18001E898(0xFFFFFFFFLL, v13) )
        {
          v6 |= 4u;
          break;
        }
        --v7;
      }
    }
    else
    {
      v6 = 4;
    }
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v6 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_18001E780(v16);
  return a1;
}

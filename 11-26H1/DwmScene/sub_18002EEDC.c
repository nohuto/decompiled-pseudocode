/*
 * XREFs of sub_18002EEDC @ 0x18002EEDC
 * Callers:
 *     sub_18002D224 @ 0x18002D224 (sub_18002D224.c)
 * Callees:
 *     sub_18001FA2C @ 0x18001FA2C (sub_18001FA2C.c)
 *     sub_1800312C4 @ 0x1800312C4 (sub_1800312C4.c)
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002EEDC(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  __int16 v10; // ax
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  __int16 v13; // ax
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
  sub_1800312C4(v16, a1);
  if ( v16[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v9 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v10 = std::wstreambuf::sputc(v8, v9);
        if ( sub_18001FA2C(0xFFFF, v10) )
        {
          v6 = 4;
          goto LABEL_12;
        }
        --v7;
      }
    }
    v14 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::wstreambuf::sputn(v14, a2, a3) == a3 )
    {
LABEL_12:
      while ( v7 )
      {
        v11 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v12 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v13 = std::wstreambuf::sputc(v11, v12);
        if ( sub_18001FA2C(0xFFFF, v13) )
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
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_180031EE8(v16);
  return a1;
}

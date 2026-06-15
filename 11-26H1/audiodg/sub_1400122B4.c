/*
 * XREFs of sub_1400122B4 @ 0x1400122B4
 * Callers:
 *     sub_140011F40 @ 0x140011F40 (sub_140011F40.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_140028D60 @ 0x140028D60 (sub_140028D60.c)
 *     sub_14006622C @ 0x14006622C (sub_14006622C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400122B4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rsi
  int v7; // ebx
  int v8; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  sub_140028D60(*(_QWORD *)(a2 + 24), a1 + 24);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v11 = sub_14006622C(a1 + 24);
    v10 = 1;
    if ( ((v11 - 1) & v12) != 0 )
    {
      v7 = -2147467261;
      v8 = 539;
      goto LABEL_4;
    }
    v6 = (__int64 *)(a1 + 88);
  }
  else
  {
    v6 = (__int64 *)(a1 + 88);
    sub_14000EE10((__int64 *)(a1 + 152));
    v7 = sub_1400B6010(a3);
    if ( v7 < 0 )
    {
      v8 = 531;
LABEL_4:
      sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp", v7);
      return (unsigned int)v7;
    }
    *(_QWORD *)(a1 + 72) = sub_1400B6010(*(_QWORD *)(a1 + 152));
    v10 = 0;
  }
  *(_DWORD *)(a1 + 64) = v10;
  sub_14000EE10((__int64 *)(a1 + 104));
  v7 = sub_1400B6010(a3);
  if ( v7 < 0 )
  {
    v8 = 545;
    goto LABEL_4;
  }
  v13 = sub_1400B6010(*(_QWORD *)(a1 + 104));
  v14 = *v6;
  *(_QWORD *)(a1 + 112) = v13;
  sub_1400B6010(v14);
  return 0LL;
}

/*
 * XREFs of sub_140026194 @ 0x140026194
 * Callers:
 *     sub_140025F80 @ 0x140025F80 (sub_140025F80.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400262DC @ 0x1400262DC (sub_1400262DC.c)
 *     sub_14002633C @ 0x14002633C (sub_14002633C.c)
 *     sub_140054A88 @ 0x140054A88 (sub_140054A88.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140026194(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = sub_14002633C(a1, a2, (unsigned int)(*(_DWORD *)a2 - 1));
      if ( v5 >= 0 )
        return 0LL;
      v6 = 261;
      break;
    case 2:
      v5 = sub_1400262DC();
      if ( v5 >= 0 )
        return 0LL;
      v6 = 267;
      break;
    case 3:
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
      sub_1400B6010(*(_QWORD *)(a1 + 8));
      v3 = *(_QWORD *)(a1 + 40);
      goto LABEL_5;
    case 4:
      v5 = sub_140054A88();
      if ( v5 >= 0 )
        return 0LL;
      v6 = 264;
      break;
    case 5:
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
      return 0LL;
    default:
      if ( (unsigned int)(*(_DWORD *)a2 - 6) > 1 )
        return 0LL;
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
      v3 = *(_QWORD *)(a1 + 8);
LABEL_5:
      sub_1400B6010(v3);
      return 0LL;
  }
  sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v5);
  return (unsigned int)v5;
}

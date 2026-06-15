/*
 * XREFs of sub_1400733C4 @ 0x1400733C4
 * Callers:
 *     sub_140074190 @ 0x140074190 (sub_140074190.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400738A4 @ 0x1400738A4 (sub_1400738A4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400733C4(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r10

  *a3 = 0LL;
  if ( !sub_14001FC10(a2, &stru_1400C6598) && !sub_14001FC10(v3, &dword_1400C6698) )
  {
    if ( sub_14001FC10(v7, v6) || sub_14001FC10(v8, &stru_1400C65A8) )
    {
      *v9 = v10;
      v11 = 0;
    }
    else
    {
      v11 = sub_1400738A4(v10 + 8, v12);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    sub_1400B6010(*v9);
    return (unsigned int)v11;
  }
  *v4 = v5;
  sub_1400B6010(v5);
  return 0LL;
}

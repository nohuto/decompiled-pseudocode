/*
 * XREFs of sub_140050F5C @ 0x140050F5C
 * Callers:
 *     sub_140051670 @ 0x140051670 (sub_140051670.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400481BC @ 0x1400481BC (sub_1400481BC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140050F5C(__int64 a1, _DWORD *a2, _QWORD *a3)
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
  _DWORD *v12; // r10

  *a3 = 0LL;
  if ( !sub_14001FC10(a2, &stru_1400C6598) && !sub_14001FC10(v3, &dword_1400C6698) )
  {
    if ( sub_14001FC10(v7, v6) || sub_14001FC10(v8, &xmmword_1400C83B0) )
    {
      *v9 = v10;
      v11 = 0;
    }
    else
    {
      v11 = sub_1400481BC(v10 + 8, v12, v9);
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

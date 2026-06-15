/*
 * XREFs of sub_140086B50 @ 0x140086B50
 * Callers:
 *     sub_140086DE8 @ 0x140086DE8 (sub_140086DE8.c)
 *     sub_140088840 @ 0x140088840 (sub_140088840.c)
 * Callees:
 *     sub_1400481BC @ 0x1400481BC (sub_1400481BC.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140086B50(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  _DWORD *v12; // r10

  *a3 = 0LL;
  if ( !(unsigned int)sub_140088ED0(a2, &stru_1400C6598, a3, a1)
    && !(unsigned int)sub_140088ED0(v3, &dword_1400C6698, v4, v5) )
  {
    if ( (unsigned int)sub_140088ED0(v7, v6, v4, v5) || (unsigned int)sub_140088ED0(v8, &xmmword_1400C9350, v9, v10 + 8) )
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

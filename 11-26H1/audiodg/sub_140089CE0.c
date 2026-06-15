/*
 * XREFs of sub_140089CE0 @ 0x140089CE0
 * Callers:
 *     sub_140089D70 @ 0x140089D70 (sub_140089D70.c)
 *     sub_140089D80 @ 0x140089D80 (sub_140089D80.c)
 *     sub_140089D90 @ 0x140089D90 (sub_140089D90.c)
 * Callees:
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_140089A10 @ 0x140089A10 (sub_140089A10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140089CE0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r10
  int v11; // ebx

  *a3 = 0LL;
  if ( sub_140088ED0(a2, &stru_1400C6598) || sub_140088ED0(v3, &dword_1400C6698) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  if ( sub_140088ED0(v7, v6) )
  {
    *v8 = v9;
    v11 = 0;
LABEL_6:
    sub_1400B6010(*v8);
    return (unsigned int)v11;
  }
  v11 = sub_140089A10(v9 + 8, v10);
  if ( v11 >= 0 )
    goto LABEL_6;
  return (unsigned int)v11;
}

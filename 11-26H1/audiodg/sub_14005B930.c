/*
 * XREFs of sub_14005B930 @ 0x14005B930
 * Callers:
 *     sub_14005B9D0 @ 0x14005B9D0 (sub_14005B9D0.c)
 *     sub_14005B9E0 @ 0x14005B9E0 (sub_14005B9E0.c)
 *     sub_14005B9F0 @ 0x14005B9F0 (sub_14005B9F0.c)
 *     sub_14005BA00 @ 0x14005BA00 (sub_14005BA00.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_14005B850 @ 0x14005B850 (sub_14005B850.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005B930(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // r10
  int v9; // ebx
  _DWORD *v10; // r10

  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  if ( sub_14001FC10(v3, &xmmword_1400C6CB0) || sub_14001FC10(v8, &xmmword_1400C72F0) )
  {
    *v6 = v7;
    v9 = 0;
LABEL_6:
    sub_1400B6010(*v6);
    return (unsigned int)v9;
  }
  v9 = sub_14005B850(v7 + 8, v10);
  if ( v9 >= 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}

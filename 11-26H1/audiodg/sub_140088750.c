/*
 * XREFs of sub_140088750 @ 0x140088750
 * Callers:
 *     sub_1400887E0 @ 0x1400887E0 (sub_1400887E0.c)
 *     sub_1400887F0 @ 0x1400887F0 (sub_1400887F0.c)
 *     sub_140088800 @ 0x140088800 (sub_140088800.c)
 *     sub_140088810 @ 0x140088810 (sub_140088810.c)
 *     sub_140088820 @ 0x140088820 (sub_140088820.c)
 *     sub_140088830 @ 0x140088830 (sub_140088830.c)
 * Callees:
 *     sub_140087A88 @ 0x140087A88 (sub_140087A88.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140088750(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // ebx

  *a3 = 0LL;
  if ( (unsigned int)sub_140088ED0(a2, &stru_1400C6598, a3, a1) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  if ( (unsigned int)sub_140088ED0(v3, &unk_1400C9030, v4, v5) )
  {
    *v6 = v7;
    v9 = 0;
LABEL_5:
    sub_1400B6010(*v6);
    return (unsigned int)v9;
  }
  v9 = sub_140087A88(v7 + 8, v8, (__int64)v6, v7);
  if ( v9 >= 0 )
    goto LABEL_5;
  return (unsigned int)v9;
}

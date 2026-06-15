/*
 * XREFs of sub_140087B70 @ 0x140087B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140087A88 @ 0x140087A88 (sub_140087A88.c)
 *     sub_140088ED0 @ 0x140088ED0 (sub_140088ED0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140087B70(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  *a2 = 0LL;
  if ( (unsigned int)sub_140088ED0(&stru_1400C6598, &stru_1400C6598, v3, &stru_1400C6598) )
  {
    *a2 = v5;
    v9 = v5;
    goto LABEL_7;
  }
  if ( (unsigned int)sub_140088ED0(v4, &unk_1400C9030, v5, v6) )
  {
    *a2 = v7;
LABEL_5:
    v9 = *a2;
LABEL_7:
    sub_1400B6010(v9);
    return a2;
  }
  if ( (int)sub_140087A88(v7 + 8, v8, (__int64)a2, v8) >= 0 )
    goto LABEL_5;
  return a2;
}

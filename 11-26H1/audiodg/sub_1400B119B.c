/*
 * XREFs of sub_1400B119B @ 0x1400B119B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005A364 @ 0x14005A364 (sub_14005A364.c)
 *     sub_14005A370 @ 0x14005A370 (sub_14005A370.c)
 */

void __fastcall __noreturn sub_1400B119B(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  char *v6; // r8
  char *v7; // rcx
  __int64 *v8; // rbx

  v3 = (char *)a2[21];
  a2[7] = v3;
  v4 = a2[4];
  a2[8] = v4;
  v5 = a2[23];
  a2[9] = &v3[v5];
  sub_14005A370(&v3[v5], (__int64)&v3[2 * v5], v3);
  a2[6] = 0LL;
  v6 = &v3[v5];
  v7 = &v3[2 * v5];
  v8 = (__int64 *)a2[5];
  sub_14005A364(v7, *v8, v6);
  *v8 = v4;
  throw;
}

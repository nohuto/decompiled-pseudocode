/*
 * XREFs of sub_1400B120C @ 0x1400B120C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14005A370 @ 0x14005A370 (sub_14005A370.c)
 */

void __fastcall __noreturn sub_1400B120C(__int64 a1, _QWORD *a2)
{
  char *v3; // r8
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 *v6; // rbx

  v3 = (char *)a2[21];
  a2[7] = v3;
  v4 = a2[4];
  a2[8] = v4;
  v5 = (void *)a2[23];
  a2[9] = v5;
  v6 = (__int64 *)a2[5];
  sub_14005A370(v5, *v6, v3);
  a2[6] = 0LL;
  *v6 = v4;
  throw;
}

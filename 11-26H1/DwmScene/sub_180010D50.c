/*
 * XREFs of sub_180010D50 @ 0x180010D50
 * Callers:
 *     sub_18000DCEC @ 0x18000DCEC (sub_18000DCEC.c)
 *     sub_18000DD9C @ 0x18000DD9C (sub_18000DD9C.c)
 *     sub_18000E044 @ 0x18000E044 (sub_18000E044.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180010E50 @ 0x180010E50 (sub_180010E50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_180010D50(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1801C8458 )
    qword_1801C8458();
  if ( qword_1801C8430 )
    qword_1801C8430(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_180010E50(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_180010E50(v5, v2, 0LL);
}

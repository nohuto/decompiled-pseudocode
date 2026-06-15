/*
 * XREFs of sub_14004F650 @ 0x14004F650
 * Callers:
 *     sub_14003DCC0 @ 0x14003DCC0 (sub_14003DCC0.c)
 *     sub_14004C0AC @ 0x14004C0AC (sub_14004C0AC.c)
 *     sub_14004C16C @ 0x14004C16C (sub_14004C16C.c)
 *     sub_14004C30C @ 0x14004C30C (sub_14004C30C.c)
 *     sub_14004C5CC @ 0x14004C5CC (sub_14004C5CC.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004F700 @ 0x14004F700 (sub_14004F700.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall __noreturn sub_14004F650(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1400E83F8 )
    sub_1400B6010(a1);
  if ( qword_1400E83B8 )
    sub_1400B6010(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_14004F700(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_14004F700(v5, v2, 0LL);
}

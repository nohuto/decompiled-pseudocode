/*
 * XREFs of sub_180096C00 @ 0x180096C00
 * Callers:
 *     sub_1800975F0 @ 0x1800975F0 (sub_1800975F0.c)
 * Callees:
 *     sub_180096B40 @ 0x180096B40 (sub_180096B40.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180096C00(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // xmm2_8

  v3 = a2;
  v4 = a1 + 8;
  v5 = a1 + 32;
  if ( *(_BYTE *)(a1 + 80) || (result = sub_180096B40((float *)v5, (float *)v4)) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    *(_OWORD *)v5 = *(_OWORD *)v4;
    *(_QWORD *)(v5 + 16) = v7;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  }
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}

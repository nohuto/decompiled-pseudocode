/*
 * XREFs of sub_140072A78 @ 0x140072A78
 * Callers:
 *     TopLevelExceptionFilter @ 0x14006EC80 (TopLevelExceptionFilter.c)
 * Callees:
 *     sub_140046BEC @ 0x140046BEC (sub_140046BEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140072A78(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v3 = v1;
  if ( v1 )
    sub_1400B6010(v1);
  sub_1400B6010(*(_QWORD *)(v1 + 144));
  return sub_140046BEC(&v3);
}

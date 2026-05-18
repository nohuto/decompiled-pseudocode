/*
 * XREFs of sub_1800DA389 @ 0x1800DA389
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800DA389(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  size_t v4; // r8

  v3 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 128) + 8LL))(*(_QWORD *)(a2 + 128));
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  sub_18001490C(a2 + 136, v3, v4);
  return 0LL;
}

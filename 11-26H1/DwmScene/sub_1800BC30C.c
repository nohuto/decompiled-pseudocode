/*
 * XREFs of sub_1800BC30C @ 0x1800BC30C
 * Callers:
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800BC30C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rdx
  char v4; // si
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v8 = a1 + 4168;
  sub_180012AC4(a1 + 4168);
  v4 = 0;
  v5 = **(_QWORD **)(a1 + 4136);
  v7 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( v4 || (***(unsigned __int8 (__fastcall ****)(_QWORD))(v5 + 32))(*(_QWORD *)(v5 + 32)) )
      v4 = 1;
    sub_18001D6F4(&v7, v3);
    v5 = v7;
  }
  Mtx_unlock(v2);
  return v4;
}

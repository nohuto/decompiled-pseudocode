/*
 * XREFs of sub_180026D10 @ 0x180026D10
 * Callers:
 *     sub_1800BD1E0 @ 0x1800BD1E0 (sub_1800BD1E0.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180026D10(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  sub_180012B20(&v5);
  v2 = v5;
  v3 = *(_DWORD *)(a1 + 3884) == 1;
  *(_QWORD *)(a1 + 488) = v5 - *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = v2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 456) = v2;
    v4 = v2 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 472) = v4;
    sub_180024D18(v4);
    sub_18001DCFC(&qword_1801BD228, 3);
  }
}

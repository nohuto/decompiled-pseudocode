/*
 * XREFs of sub_180077D20 @ 0x180077D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800431E4 @ 0x1800431E4 (sub_1800431E4.c)
 *     sub_1800438CC @ 0x1800438CC (sub_1800438CC.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_18004A294 @ 0x18004A294 (sub_18004A294.c)
 *     sub_18004A388 @ 0x18004A388 (sub_18004A388.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180077D20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int16 v7; // ax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  sub_18004A294(a2, (__int64)&v10);
  v5 = v10;
  v7 = sub_1800431E4(v10, (__int64)&unk_1801CBE78, v6);
  if ( sub_1800438CC(v5, v7) )
  {
    v8 = sub_180033D14(*(_QWORD *)(a3 + 3984), 1);
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801C9998, 0LL);
  }
  v9 = (__int64 *)sub_18004A388(a2, &v12);
  sub_180046FD4(*v9);
  if ( v13 )
    sub_180010EC8(v13);
  if ( v11 )
    sub_180010EC8(v11);
}

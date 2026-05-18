/*
 * XREFs of sub_18006541C @ 0x18006541C
 * Callers:
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006541C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  int v7; // r8d
  __int64 v8; // rdi
  bool v9; // cl
  char v10; // al
  char v11; // bl
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  _QWORD v16[4]; // [rsp+50h] [rbp-20h] BYREF

  v3 = sub_180033D14(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C94B8, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C94D8, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C94F8, 0LL);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C98B8, 0LL);
  v8 = *(_QWORD *)(a1 + 512);
  v9 = v6 != 0;
  if ( v7 )
    v9 = 1;
  v10 = v9;
  if ( v4 )
    v10 = 1;
  v11 = v10;
  if ( v5 )
    v11 = 1;
  v12 = sub_1800181BC(v16, (__int64)&unk_1801CCF98);
  sub_18004E8E8(v8, &v14, (__int64)v12);
  sub_18005E0AC(v14, (__int64)&unk_1801CD2F8, v11);
  sub_18004EDEC(v8, (__int64)&unk_1801CD1D8);
  result = sub_18004EDEC(v8, (__int64)&unk_1801CD1F8);
  if ( v15 )
    return sub_180010EC8(v15);
  return result;
}

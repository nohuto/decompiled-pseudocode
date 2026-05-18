/*
 * XREFs of sub_180067318 @ 0x180067318
 * Callers:
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180060250 @ 0x180060250 (sub_180060250.c)
 *     sub_18006FB90 @ 0x18006FB90 (sub_18006FB90.c)
 *     sub_18006FBCC @ 0x18006FBCC (sub_18006FBCC.c)
 *     sub_1800D086C @ 0x1800D086C (sub_1800D086C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180067318(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // edi
  void *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  void *v11; // rdx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF

  v6 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801C9118, 0LL)
    || !(unsigned __int8)sub_18006FBCC(a3) )
  {
    return 0;
  }
  v7 = sub_18006FB90(a3);
  if ( v7 == 4 )
  {
    v8 = &unk_1801CA778;
  }
  else
  {
    if ( v7 != 5 )
      goto LABEL_8;
    v8 = &unk_1801CA7D8;
  }
  sub_1800D086C(v6, v8);
LABEL_8:
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C9358, 2LL);
  if ( v7 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_1801C9358,
      (unsigned int)((v9 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801CB6B8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_1801CB6B8, v10, 1LL);
  switch ( v7 )
  {
    case 9:
      v11 = &unk_1801C91F8;
LABEL_14:
      sub_1800D086C(v6, v11);
      break;
    case 11:
      v11 = &unk_1801C9318;
      goto LABEL_14;
    case 13:
      v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801C9378, 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
        v6,
        &unk_1801C9378,
        (unsigned int)((v12 + 1) % 22),
        1LL);
      break;
  }
  v13 = sub_180012C40(v21, a2);
  sub_180033B20(a1, &v19, v14, v13);
  if ( v7 == 14 )
  {
    sub_180060250(v21, &v19);
    v15 = v21[0];
    v16 = *(float *)(v21[0] + 1880) * 0.5;
    goto LABEL_21;
  }
  if ( v7 == 15 )
  {
    sub_180060250(v21, &v19);
    v15 = v21[0];
    v16 = *(float *)(v21[0] + 1880) + *(float *)(v21[0] + 1880);
LABEL_21:
    v17 = v21[1];
    *(float *)(v15 + 1880) = v16;
    if ( v17 )
      sub_180010EC8(v17);
  }
  if ( v20 )
    sub_180010EC8(v20);
  return 1;
}

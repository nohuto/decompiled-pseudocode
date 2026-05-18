/*
 * XREFs of sub_180069C74 @ 0x180069C74
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18005A85C @ 0x18005A85C (sub_18005A85C.c)
 *     sub_18005A88C @ 0x18005A88C (sub_18005A88C.c)
 *     sub_18005A92C @ 0x18005A92C (sub_18005A92C.c)
 *     sub_18005A980 @ 0x18005A980 (sub_18005A980.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_180087584 @ 0x180087584 (sub_180087584.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180069C74(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // xmm8_4
  int v5; // xmm9_4
  int v6; // xmm10_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  unsigned int v10; // r15d
  __int64 v11; // rdx
  _UNKNOWN **v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  char v16; // al
  char v17; // r12
  double v18; // xmm0_8
  float v19; // xmm11_4
  double v20; // xmm0_8
  float v21; // xmm12_4
  double v22; // xmm0_8
  float v23; // xmm13_4
  char v24; // r13
  char v25; // al
  double v26; // xmm0_8
  int v27; // xmm14_4
  int v28; // eax
  double v29; // xmm0_8
  int v30; // xmm15_4
  unsigned int v31; // ecx
  float v32; // xmm0_4
  double v33; // xmm0_8
  __int64 v34; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-F0h]
  __int64 v36; // [rsp+30h] [rbp-E8h]
  __int64 v37; // [rsp+38h] [rbp-E0h]
  char v38; // [rsp+128h] [rbp+10h]
  int v39; // [rsp+130h] [rbp+18h]
  int v40; // [rsp+138h] [rbp+20h]

  v3 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801CA738, 0LL) )
  {
    v7 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801CA6D8);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801CA6F8);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801CA718);
    v6 = LODWORD(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801CA698, 0LL);
  v12 = &off_1801BD888;
  v13 = sub_18005F93C(*a2, v11) + 144;
  do
  {
    if ( *(_QWORD *)v13 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v13 + 8LL));
    v14 = *(_QWORD *)(v13 - 8);
    v36 = v14;
    v15 = *(_QWORD *)v13;
    v37 = *(_QWORD *)v13;
    if ( v14 )
    {
      sub_180012C40(&v34, (_QWORD *)(v13 - 136));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *(v12 - 1), 0LL);
      v17 = v16;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *v12);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[1]);
      v19 = *(float *)&v18;
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[4]);
      v21 = *(float *)&v20;
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[5]);
      v23 = *(float *)&v22;
      v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v12[3], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v12[6], 0LL);
      v38 = v25;
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[7]);
      v27 = LODWORD(v26);
      v39 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v12[9], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v12[10], 0LL);
      v40 = v28;
      v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[11]);
      v30 = LODWORD(v29);
      v31 = (int)o_roundf();
      if ( v31 >= 0x10 )
      {
        if ( v31 > 0x800 )
          v31 = 2048;
      }
      else
      {
        v31 = 16;
      }
      *(_DWORD *)(v14 + 1940) = v31;
      sub_180087584(v14, v10);
      *(_BYTE *)(v14 + 72) = v17;
      sub_18005A980(v14, v19);
      *(_BYTE *)(v14 + 1953) = v24;
      sub_18005A92C(v14, v21);
      sub_18005A85C(v14, v23);
      *(_BYTE *)(v14 + 1952) = v38;
      *(_DWORD *)(v14 + 1948) = v27;
      *(_DWORD *)(v14 + 1960) = v39;
      *(_DWORD *)(v14 + 1964) = v40;
      *(_DWORD *)(v14 + 1968) = v30;
      if ( v34 && *(_DWORD *)(v34 + 120) == 1 )
      {
        sub_18005A88C(v14, *(float *)(v34 + 112));
        v32 = 0.0;
      }
      else
      {
        v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[2]);
        sub_18005A88C(v14, *(float *)&v33);
        v32 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v12[8]);
      }
      *(float *)(v14 + 1956) = v32;
      *(_DWORD *)(v14 + 400) = v4;
      *(_DWORD *)(v14 + 404) = v5;
      *(_DWORD *)(v14 + 408) = v6;
      if ( v35 )
        sub_180010EC8(v35);
    }
    if ( v15 )
      sub_180010EC8(v15);
    v13 += 16LL;
    v12 += 13;
  }
  while ( (__int64)v12 < (__int64)&off_1801BD9C0 );
}

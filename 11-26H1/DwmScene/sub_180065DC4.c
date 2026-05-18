/*
 * XREFs of sub_180065DC4 @ 0x180065DC4
 * Callers:
 *     sub_180063E30 @ 0x180063E30 (sub_180063E30.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003BA5C @ 0x18003BA5C (sub_18003BA5C.c)
 *     sub_180060250 @ 0x180060250 (sub_180060250.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180065DC4(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+30h] [rbp-50h] BYREF
  __m128 v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h]
  __int64 v37; // [rsp+60h] [rbp-20h] BYREF
  __int64 v38; // [rsp+68h] [rbp-18h]

  result = *a2;
  if ( *(_BYTE *)(*a2 + 116) )
  {
    v5 = sub_180012C40(&v37, a2);
    sub_180033B20(a1, &v35, v6, v5);
    result = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
    v8 = result;
    v9 = v35;
    if ( v35 && (*(_DWORD *)(v35 + 440) & 0x2000000) != 0 )
    {
      (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)result + 168LL))(
        result,
        &unk_1801CB5B8,
        v7,
        1LL);
      sub_180012A94(v9 + 56, &v37);
      v10 = v37;
      if ( v37 )
      {
        sub_18003B950(v37, (__int64)&v33);
        sub_18003BA5C(v10, &v34);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB5D8,
          v11,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB5F8,
          v12,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB618,
          v13,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB638,
          v14,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB658,
          v15,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB678,
          v16,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB698,
          v17,
          1LL);
      }
      result = (__int64)sub_180060250((__int64 *)&v34, &v35);
      v19 = v34.m128_u64[0];
      if ( v34.m128_u64[0] )
      {
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB758,
          v18,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB778,
          v20,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB7B8,
          v21,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB7D8,
          v22,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB798,
          v23,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB7F8,
          v24,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB818,
          v25,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB838,
          v26,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB858,
          v27,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB878,
          v28,
          1LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v8 + 152LL))(
          v8,
          &unk_1801CB738,
          *(unsigned int *)(v19 + 1868),
          1LL);
        (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v8 + 152LL))(
          v8,
          &unk_1801CB898,
          *(unsigned int *)(v19 + 1816),
          1LL);
        LOBYTE(v29) = *(_BYTE *)(v19 + 1864);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 144LL))(
          v8,
          &unk_1801CB8D8,
          v29,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB978,
          v30,
          1LL);
        (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
          v8,
          &unk_1801CB958,
          v31,
          1LL);
        result = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v8 + 168LL))(
                   v8,
                   &unk_1801CB938,
                   v32,
                   1LL);
      }
      if ( v34.m128_u64[1] )
        result = sub_180010EC8(v34.m128_i64[1]);
      if ( v38 )
        result = sub_180010EC8(v38);
    }
    if ( v36 )
      return sub_180010EC8(v36);
  }
  return result;
}

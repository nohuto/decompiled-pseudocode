/*
 * XREFs of sub_1800553F4 @ 0x1800553F4
 * Callers:
 *     sub_18005537C @ 0x18005537C (sub_18005537C.c)
 *     sub_180055960 @ 0x180055960 (sub_180055960.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180018788 @ 0x180018788 (sub_180018788.c)
 *     sub_18001E148 @ 0x18001E148 (sub_18001E148.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029DAC @ 0x180029DAC (sub_180029DAC.c)
 *     sub_18002EB04 @ 0x18002EB04 (sub_18002EB04.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_18005526C @ 0x18005526C (sub_18005526C.c)
 *     sub_180055B0C @ 0x180055B0C (sub_180055B0C.c)
 *     sub_18005AB0C @ 0x18005AB0C (sub_18005AB0C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
int __fastcall sub_1800553F4(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // r15d
  int v8; // edx
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rax
  void (__fastcall *v17)(__int64, _QWORD *); // r8
  __int64 v18; // r9
  _QWORD *v19; // r13
  _QWORD *v20; // rsi
  unsigned int **v21; // r12
  unsigned int *v22; // rbx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rax
  int result; // eax
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  char v33; // [rsp+60h] [rbp-A8h]
  char v34[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v40; // [rsp+A8h] [rbp-60h]
  _BYTE v41[16]; // [rsp+B0h] [rbp-58h] BYREF
  char v42[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-30h]
  _BYTE v46[56]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v47; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v48; // [rsp+160h] [rbp+58h]

  *(_BYTE *)(a1 + 424) = 1;
  sub_18005526C(a1, &v30);
  v2 = v30;
  if ( v30 )
    v2 = sub_18001E148((unsigned int *)(v30 + 192));
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(a1 + 72) )
  {
    if ( !*(_BYTE *)(a1 + 432) || (v3 = *(_DWORD *)(a1 + 428), *(_DWORD *)(a1 + 428) = v2, v2 > v3) )
    {
      *(_QWORD *)(a1 + 440) = *sub_180012B20(&v47);
      sub_180029DAC(*(_QWORD *)(a1 + 24) + 1104LL, (__int64)v46);
      LODWORD(v47) = 0;
      v32 = 0LL;
      v33 = 0;
      if ( v30 )
      {
        v4 = (__int64 *)sub_180029C50(v30 + 16, (__int64)v34);
        sub_180018788(&v32, v4);
        sub_180011E54((__int64)v34);
        v5 = v30;
        LODWORD(v47) = *(_DWORD *)(v30 + 112);
        v6 = *(_DWORD *)(a1 + 16);
        if ( v6 )
        {
          *(_DWORD *)(v30 + 112) = v6;
          v6 = *(_DWORD *)(a1 + 16);
          v5 = v30;
        }
        v7 = *(_DWORD *)(v5 + 112);
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 16);
        v7 = 1;
        if ( v6 )
          v7 = *(_DWORD *)(a1 + 16);
      }
      v8 = 1;
      if ( v6 )
        v8 = v6;
      v9 = sub_180033D14(*(_QWORD *)(a1 + 24), v8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801C9878);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801C9898);
      v10 = *(_QWORD **)(a1 + 64);
      v11 = *(_QWORD **)(a1 + 72);
      v48 = v11;
      while ( v10 != v11 )
      {
        sub_1800382B8((__int64)v10, &v28);
        if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 352LL))(v28) )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 376LL))(v28, v42);
          sub_180012A94(v12, &v37);
          if ( v43 )
            sub_180010F00(v43);
          v13 = v37;
          if ( v37 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37) )
          {
            sub_180029C10(v13 + 24, (__int64)v34);
            sub_180029C10(v28 + 8, (__int64)v41);
            v14 = sub_180033D14(*(_QWORD *)(a1 + 24), v7);
            v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, &unk_1801C9658, 0LL);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 304LL))(v28, v15);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL))(v28);
            v16 = sub_180033D5C(*(_QWORD *)(a1 + 24), &v44);
            v17(v18, v16);
            if ( v45 )
              sub_180010EC8(v45);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 232LL))(v28, v7);
            v19 = *(_QWORD **)(a1 + 48);
            v20 = *(_QWORD **)(a1 + 40);
            if ( v20 != v19 )
            {
              v21 = (unsigned int **)(a1 + 88);
              do
              {
                sub_1800162D0(&v39, v20);
                sub_18002EB04((__int64 *)(a1 + 88), &v35, (__int64)&v39);
                v22 = (unsigned int *)v36;
                if ( *(_BYTE *)(v36 + 25) || (unsigned __int64)v40 < *(_QWORD *)(v36 + 40) )
                  v22 = *v21;
                if ( v40 )
                  sub_180010F00(v40);
                if ( v22 != *v21 )
                {
                  v23 = *v20;
                  if ( (_mm_movemask_ps(
                          _mm_cmpeq_ps(
                            (__m128)*((unsigned __int64 *)v22 + 6),
                            (__m128)*(unsigned __int64 *)(*v20 + 344LL))) & 3) != 3
                    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*((unsigned __int64 *)v22 + 7), (__m128)*(unsigned __int64 *)(v23 + 352))) & 3) != 3
                    || *(_DWORD *)(v23 + 360) != v22[16] )
                  {
                    sub_18005AB0C(
                      *v20,
                      _mm_unpacklo_ps((__m128)v22[12], (__m128)v22[13]).m128_u64[0],
                      _mm_unpacklo_ps((__m128)v22[14], (__m128)v22[15]).m128_u64[0],
                      v22[16]);
                  }
                }
                v20 += 2;
              }
              while ( v20 != v19 );
            }
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), &v28);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 240LL))(v28, v7);
            sub_180035A5C(*(_QWORD **)(a1 + 24), (__int64)&v30, a1 + 40, &v28);
            sub_1800351DC(*(_QWORD *)(a1 + 24), &v37, &v28, (__int64)v41, (__int64)v34, (__int64)&v32);
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), &v28);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 248LL))(v28);
            v24 = *(_QWORD *)(a1 + 24);
            v35 = 0LL;
            v25 = v10[1];
            if ( v25 )
            {
              *(_QWORD *)&v35 = *v10;
              *((_QWORD *)&v35 + 1) = v25;
              _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
            }
            sub_180036C34(v24, (unsigned __int64 *)&v35);
            sub_180011E54((__int64)v41);
            sub_180011E54((__int64)v34);
          }
          if ( v38 )
            sub_180010EC8(v38);
          v11 = v48;
        }
        if ( v29 )
          sub_180010EC8(v29);
        v10 += 2;
      }
      if ( v30 )
        *(_DWORD *)(v30 + 112) = v47;
      v26 = sub_180012B20(&v47);
      sub_180055B0C(a1, *v26 - *(_QWORD *)(a1 + 440));
      sub_180011E54((__int64)&v32);
      sub_180029B0C((__int64)v46);
    }
  }
  *(_BYTE *)(a1 + 424) = 0;
  result = Cnd_broadcast((_Cnd_t)(a1 + 280));
  if ( v31 )
    return sub_180010EC8(v31);
  return result;
}

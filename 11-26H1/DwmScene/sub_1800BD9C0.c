/*
 * XREFs of sub_1800BD9C0 @ 0x1800BD9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002657C @ 0x18002657C (sub_18002657C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180028640 @ 0x180028640 (sub_180028640.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BD9C0(__int64 a1, int a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __m128 v11; // xmm7
  __m128 v12; // xmm8
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // [rsp+38h] [rbp-79h] BYREF
  __int64 v16; // [rsp+40h] [rbp-71h]
  __int64 *v17; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-61h]
  __int128 v19; // [rsp+58h] [rbp-59h] BYREF
  __int64 v20; // [rsp+68h] [rbp-49h] BYREF
  __int64 v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h] BYREF
  __int64 v23; // [rsp+80h] [rbp-31h]
  _BYTE v24[96]; // [rsp+88h] [rbp-29h] BYREF
  int v25; // [rsp+118h] [rbp+67h] BYREF
  int v26; // [rsp+120h] [rbp+6Fh]

  v3 = 0;
  v26 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_1800266A4(a1);
  v5 = result;
  v6 = 0;
  if ( (_DWORD)result )
  {
    v7 = *((_QWORD *)&v19 + 1);
    do
    {
      sub_180026650(a1, &v17, v6);
      v8 = v17;
      sub_180029C50((__int64)(v17 + 1), (__int64)v24);
      (*(void (__fastcall **)(__int64 *))(*v8 + 112))(v8);
      (*(void (__fastcall **)(__int64 *))(*v8 + 120))(v8);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(*v8 + 152))(v8);
      sub_180012C40(&v20, v9);
      if ( v20 )
      {
        v10 = (__int128 *)sub_180012C40(&v22, (_QWORD *)(v20 + 456));
        v3 |= 1u;
      }
      else
      {
        v19 = 0LL;
        v10 = &v19;
        v3 |= 2u;
        v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      }
      sub_180012C40(&v15, v10);
      if ( (v3 & 2) != 0 )
      {
        v3 &= ~2u;
        if ( v7 )
          sub_180010EC8(v7);
      }
      if ( (v3 & 1) != 0 )
      {
        v3 &= ~1u;
        if ( v23 )
          sub_180010EC8(v23);
      }
      v11 = 0LL;
      v12 = 0LL;
      if ( v15 )
      {
        v13 = sub_18002657C(v15, &v25);
        v11 = (__m128)(unsigned int)*v13;
        v12 = (__m128)(unsigned int)v13[1];
      }
      v14 = *v8;
      (*(void (__fastcall **)(__int64 *))(v14 + 104))(v17);
      (*(void (__fastcall **)(__int64 *))(*v17 + 96))(v17);
      (*(void (__fastcall **)(__int64 *))(v14 + 56))(v17);
      if ( v15 )
        sub_180028640(v15, _mm_unpacklo_ps(v11, v12).m128_i64[0]);
      if ( v16 )
        sub_180010EC8(v16);
      if ( v21 )
        sub_180010EC8(v21);
      result = sub_180011E54((__int64)v24);
      if ( v18 )
        result = sub_180010EC8(v18);
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}

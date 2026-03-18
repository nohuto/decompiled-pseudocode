/*
 * XREFs of ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1800EFBE0
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1800EF6C0 (-GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x1800EF980 (-GetTargetTime@CTargetStats@@QEAA_K_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CTargetStats::UpdatePresentStats(__m128i *this)
{
  __int64 v2; // rcx
  unsigned __int32 v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int32 v16; // edx
  __int64 v17; // rdx
  bool result; // al
  unsigned int v19; // edi
  __m128i v20; // [rsp+20h] [rbp-68h] BYREF
  __m128i v21; // [rsp+30h] [rbp-58h]
  __m128i v22; // [rsp+40h] [rbp-48h]
  __m128i v23; // [rsp+50h] [rbp-38h]
  __m128i v24; // [rsp+60h] [rbp-28h]

  v2 = this[2].m128i_i64[0];
  if ( !v2 )
    return 0;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
  if ( !v3 )
    return 0;
  v4 = this[2].m128i_i64[0];
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v4 + 344LL))(v4, &v20) )
    return 0;
  v5 = v21.m128i_i64[1];
  if ( !v21.m128i_i64[1] )
    return 0;
  if ( !v22.m128i_i64[1] )
    return 0;
  v6 = v24.m128i_i64[0];
  if ( !v24.m128i_i64[0] || !v24.m128i_i32[2] )
    return 0;
  v7 = v21;
  v8 = v22;
  v9 = v20;
  this[3] = v20;
  this[15].m128i_i32[2] = v3;
  this[4] = v7;
  v10 = v23;
  this[5] = v8;
  v11 = v24;
  this[6] = v10;
  this[7] = v11;
  if ( this[7].m128i_i64[0] == 0xFFFFFFFFLL )
    this[8].m128i_i64[0] = v5;
  else
    this[8].m128i_i64[0] = v5 + 9 * v6 / 10;
  v12 = _mm_cvtsi128_si32(v9);
  if ( v3 > v12 )
  {
    v19 = v3 - v12;
    v13 = 8;
    if ( v19 < 8 )
      v13 = v19;
  }
  else
  {
    v13 = 0;
  }
  this[15].m128i_i32[3] = v13;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this[2].m128i_i64[0] + 272LL))(this[2].m128i_i64[0]);
  v15 = this[4].m128i_i64[1];
  v16 = this[4].m128i_i32[0];
  this[8].m128i_i64[1] = v14;
  this[9].m128i_i64[1] = v14;
  this[9].m128i_i64[0] = v15;
  this[10].m128i_i32[0] = v16;
  v17 = this[8].m128i_i64[1] * this[7].m128i_u32[2];
  LODWORD(v15) = this[5].m128i_i32[1];
  this[10].m128i_i64[1] = this[5].m128i_i64[1];
  result = 1;
  this[11].m128i_i64[0] = v17;
  this[11].m128i_i32[2] = v15;
  return result;
}

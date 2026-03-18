/*
 * XREFs of ?Update@CTargetStats@@IEAAX_K@Z @ 0x18016D050
 * Callers:
 *     ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18016D010 (-GetOutstandingPresents@CTargetStats@@QEAAI_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetStats::Update(__m128i *this, LARGE_INTEGER a2)
{
  LARGE_INTEGER v2; // rdi
  __int64 v4; // rcx
  unsigned __int32 v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int32 v18; // edx
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rdi
  unsigned int v26; // esi
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-78h] BYREF
  __m128i v28; // [rsp+30h] [rbp-68h] BYREF
  __m128i v29; // [rsp+40h] [rbp-58h]
  __m128i v30; // [rsp+50h] [rbp-48h]
  __m128i v31; // [rsp+60h] [rbp-38h]
  __m128i v32; // [rsp+70h] [rbp-28h]

  v2 = a2;
  if ( a2.QuadPart > (unsigned __int64)this[8].m128i_i64[0] )
  {
    v4 = this[2].m128i_i64[0];
    if ( v4 )
    {
      v5 = (*(__int64 (**)(void))(*(_QWORD *)v4 + 104LL))();
      if ( v5 )
      {
        v6 = this[2].m128i_i64[0];
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        if ( !(*(unsigned int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v6 + 344LL))(v6, &v28) )
        {
          v7 = v29.m128i_i64[1];
          if ( v29.m128i_i64[1] )
          {
            if ( v30.m128i_i64[1] )
            {
              v8 = v32.m128i_i64[0];
              if ( v32.m128i_i64[0] )
              {
                if ( v32.m128i_i32[2] )
                {
                  v9 = v29;
                  v10 = v30;
                  v11 = v28;
                  this[3] = v28;
                  this[15].m128i_i32[2] = v5;
                  this[4] = v9;
                  v12 = v31;
                  this[5] = v10;
                  v13 = v32;
                  this[6] = v12;
                  this[7] = v13;
                  if ( this[7].m128i_i64[0] == 0xFFFFFFFFLL )
                    this[8].m128i_i64[0] = v7;
                  else
                    this[8].m128i_i64[0] = v7 + 9 * v8 / 10;
                  v14 = _mm_cvtsi128_si32(v11);
                  if ( v5 > v14 )
                  {
                    v26 = v5 - v14;
                    v15 = 8;
                    if ( v26 < 8 )
                      v15 = v26;
                  }
                  else
                  {
                    v15 = 0;
                  }
                  this[15].m128i_i32[3] = v15;
                  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this[2].m128i_i64[0] + 272LL))(this[2].m128i_i64[0]);
                  v17 = this[4].m128i_i64[1];
                  v18 = this[4].m128i_i32[0];
                  this[8].m128i_i64[1] = v16;
                  this[9].m128i_i64[0] = v17;
                  this[10].m128i_i32[0] = v18;
                  this[9].m128i_i64[1] = v16;
                  v19 = this[5].m128i_i64[1];
                  LODWORD(v17) = this[5].m128i_i32[1];
                  this[11].m128i_i64[0] = this[8].m128i_i64[1] * this[7].m128i_u32[2];
                  this[10].m128i_i64[1] = v19;
                  this[11].m128i_i32[2] = v17;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( this[8].m128i_i64[0] )
  {
    v20 = this[10].m128i_i64[0];
    v21 = this[15].m128i_i32[3] + 1;
    this[12] = this[9];
    this[13].m128i_i64[0] = v20;
    v22 = this[12].m128i_i64[1] * v21;
    this[13].m128i_i32[0] += v21;
    this[12].m128i_i64[0] += v22;
    PerformanceCount = v2;
    if ( !v2.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v2 = PerformanceCount;
    }
    v23 = this[12].m128i_i64[0];
    v24 = this[12].m128i_u64[1];
    if ( v24 + v23 < v2.QuadPart )
    {
      v25 = v2.QuadPart - v23;
      this[13].m128i_i32[0] += v25 / v24;
      this[12].m128i_i64[0] = v23 + v24 * (v25 / v24);
    }
  }
}

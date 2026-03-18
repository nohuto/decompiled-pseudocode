/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x18016FDF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::GetStats(
        __m128i *this,
        LARGE_INTEGER a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  LARGE_INTEGER v4; // rbp
  __int64 v6; // rcx
  unsigned __int32 v7; // esi
  __int64 v8; // r8
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int32 v19; // edx
  __int64 v20; // rax
  __int32 *v21; // rsi
  __int64 v22; // xmm1_8
  unsigned int v23; // ecx
  __int64 v24; // rax
  LARGE_INTEGER v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  CComposition *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r8d
  LARGE_INTEGER v32; // rax
  __int64 v33; // r9
  __int64 v34; // r14
  DWORD LowPart; // r10d
  unsigned __int64 v36; // r12
  int v37; // r13d
  unsigned __int64 v38; // r15
  __int64 v39; // r14
  LONGLONG v40; // rax
  unsigned __int64 v41; // rtt
  DWORD v42; // r15d
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rbp
  __int32 v45; // eax
  unsigned int v47; // esi
  LARGE_INTEGER v48; // [rsp+20h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+30h] [rbp-A8h]
  __m128i v51; // [rsp+40h] [rbp-98h] BYREF
  __m128i v52; // [rsp+50h] [rbp-88h]
  __m128i v53; // [rsp+60h] [rbp-78h]
  __m128i v54; // [rsp+70h] [rbp-68h]
  __m128i v55; // [rsp+80h] [rbp-58h]

  v4 = a2;
  if ( a2.QuadPart > (unsigned __int64)this[2006].m128i_i64[0] )
  {
    v6 = this[2000].m128i_i64[0];
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
      if ( v7 )
      {
        memset_0(&v51, 0, 0x50uLL);
        if ( !(*(unsigned int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)this[2000].m128i_i64[0] + 344LL))(
                this[2000].m128i_i64[0],
                &v51) )
        {
          v8 = v52.m128i_i64[1];
          if ( v52.m128i_i64[1] )
          {
            if ( v53.m128i_i64[1] )
            {
              v9 = v55.m128i_i64[0];
              if ( v55.m128i_i64[0] )
              {
                if ( v55.m128i_i32[2] )
                {
                  v10 = v52;
                  v11 = v53;
                  v12 = v51;
                  this[2001] = v51;
                  this[2013].m128i_i32[2] = v7;
                  this[2002] = v10;
                  v13 = v54;
                  this[2003] = v11;
                  v14 = v55;
                  this[2004] = v13;
                  this[2005] = v14;
                  if ( this[2005].m128i_i64[0] == 0xFFFFFFFFLL )
                    this[2006].m128i_i64[0] = v8;
                  else
                    this[2006].m128i_i64[0] = v8 + 9 * v9 / 10;
                  v15 = _mm_cvtsi128_si32(v12);
                  if ( v7 > v15 )
                  {
                    v47 = v7 - v15;
                    v16 = 8;
                    if ( v47 < 8 )
                      v16 = v47;
                  }
                  else
                  {
                    v16 = 0;
                  }
                  this[2013].m128i_i32[3] = v16;
                  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this[2000].m128i_i64[0] + 272LL))(this[2000].m128i_i64[0]);
                  v18 = this[2002].m128i_i64[1];
                  v19 = this[2002].m128i_i32[0];
                  this[2006].m128i_i64[1] = v17;
                  this[2007].m128i_i64[0] = v18;
                  this[2008].m128i_i32[0] = v19;
                  this[2007].m128i_i64[1] = v17;
                  v20 = this[2003].m128i_i64[1];
                  LODWORD(v18) = this[2003].m128i_i32[1];
                  this[2009].m128i_i64[0] = this[2006].m128i_i64[1] * this[2005].m128i_u32[2];
                  this[2008].m128i_i64[1] = v20;
                  this[2009].m128i_i32[2] = v18;
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = &this[2013].m128i_i32[3];
  if ( this[2006].m128i_i64[0] )
  {
    v22 = this[2008].m128i_i64[0];
    v23 = *v21 + 1;
    this[2010] = this[2007];
    this[2011].m128i_i64[0] = v22;
    v24 = this[2010].m128i_i64[1] * v23;
    this[2011].m128i_i32[0] += v23;
    this[2010].m128i_i64[0] += v24;
    v25 = v4;
    PerformanceCount = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v25 = PerformanceCount;
    }
    v26 = this[2010].m128i_i64[0];
    v27 = this[2010].m128i_u64[1];
    if ( v27 + v26 < v25.QuadPart )
    {
      this[2011].m128i_i32[0] += (v25.QuadPart - v26) / v27;
      this[2010].m128i_i64[0] = v26 + v27 * ((v25.QuadPart - v26) / v27);
    }
  }
  v28 = g_pComposition;
  *(_DWORD *)a3 = *v21;
  v29 = 0LL;
  if ( v28 )
    v29 = *((_QWORD *)v28 + 110);
  if ( this[2014].m128i_i64[1] == v29 )
    v30 = this[2014].m128i_i64[0];
  else
    v30 = 0LL;
  *((_QWORD *)a3 + 1) = v30;
  *((_QWORD *)a3 + 2) = this[2006].m128i_i64[1];
  if ( this[2006].m128i_i64[0] )
  {
    v31 = *v21;
    v32 = v4;
    v33 = this[2008].m128i_i64[1];
    v34 = (unsigned int)*v21;
    LowPart = this[2009].m128i_u32[2];
    v36 = this[2009].m128i_u64[0];
    v37 = *v21 + this[2008].m128i_i32[0];
    v38 = this[2007].m128i_u64[1];
    v50 = v33;
    v39 = this[2007].m128i_i64[0] + v38 * v34;
    PerformanceCount.LowPart = LowPart;
    v48 = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&v48);
      v31 = *v21;
      v32 = v48;
      v33 = v50;
      LowPart = PerformanceCount.LowPart;
    }
    if ( v39 + v38 < v32.QuadPart )
    {
      v41 = v32.QuadPart - v39;
      v40 = (v32.QuadPart - v39) / v38;
      v39 += v38 * (v41 / v38);
      v37 += v40;
    }
    v48 = v4;
    v42 = v31 / this[2005].m128i_i32[2] + LowPart;
    v43 = v33 + v36 * (v31 / this[2005].m128i_i32[2]);
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&v48);
      v4 = v48;
    }
    if ( v36 + v43 < v4.QuadPart )
    {
      v44 = v4.QuadPart - v43;
      v43 += v36 * (v44 / v36);
      v42 += v44 / v36;
    }
    v45 = this[2013].m128i_i32[2];
    *((_DWORD *)a3 + 7) = v37;
    *((_DWORD *)a3 + 8) = v42;
    *((_DWORD *)a3 + 6) = v45;
    *((_QWORD *)a3 + 5) = v39;
    *((_QWORD *)a3 + 6) = v43;
    *((_DWORD *)a3 + 14) = this[2001].m128i_i32[0];
    *((_DWORD *)a3 + 15) = this[2001].m128i_i32[1];
    *((_DWORD *)a3 + 16) = this[2004].m128i_i32[0];
    *((_QWORD *)a3 + 9) = this[2001].m128i_i64[1];
    *((_QWORD *)a3 + 10) = this[2004].m128i_i64[1];
  }
  else
  {
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_QWORD *)a3 + 7) = 0LL;
    *((_DWORD *)a3 + 16) = 0;
    *((_QWORD *)a3 + 9) = 0LL;
    *((_QWORD *)a3 + 10) = 0LL;
  }
  return 1;
}

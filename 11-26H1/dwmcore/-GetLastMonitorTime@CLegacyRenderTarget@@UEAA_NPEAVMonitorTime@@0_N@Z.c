/*
 * XREFs of ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1801702A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacyRenderTarget::GetLastMonitorTime(
        __m128i *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3,
        char a4)
{
  int v4; // r14d
  __int64 v8; // rcx
  unsigned __int32 v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  unsigned int v18; // eax
  __int64 v19; // rax
  __int32 v20; // ecx
  __m128i *v21; // r8
  char *v22; // r9
  __int64 v23; // rax
  __int32 v24; // ecx
  bool result; // al
  unsigned int v26; // ebp
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-98h] BYREF
  __m128i v28; // [rsp+30h] [rbp-88h] BYREF
  __m128i v29; // [rsp+40h] [rbp-78h]
  __m128i v30; // [rsp+50h] [rbp-68h]
  __m128i v31; // [rsp+60h] [rbp-58h]
  __m128i v32; // [rsp+70h] [rbp-48h]

  v4 = 0;
  if ( !a4 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart <= (unsigned __int64)this[2006].m128i_i64[0] )
    {
      v21 = this + 2007;
      v22 = &this[2008].m128i_i8[8];
LABEL_14:
      result = 1;
      *(__m128i *)a2 = *v21;
      *((_QWORD *)a2 + 2) = v21[1].m128i_i64[0];
      *(_OWORD *)a3 = *(_OWORD *)v22;
      *((_QWORD *)a3 + 2) = *((_QWORD *)v22 + 2);
      return result;
    }
  }
  v8 = this[2000].m128i_i64[0];
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL))(v8);
    if ( v9 )
    {
      v10 = this[2000].m128i_i64[0];
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      if ( !(*(unsigned int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v10 + 344LL))(v10, &v28) )
      {
        v11 = v29.m128i_i64[1];
        if ( v29.m128i_i64[1] )
        {
          if ( v30.m128i_i64[1] )
          {
            v12 = v32.m128i_i64[0];
            if ( v32.m128i_i64[0] )
            {
              if ( v32.m128i_i32[2] )
              {
                v13 = v29;
                v14 = v30;
                v15 = v28;
                this[2001] = v28;
                this[2013].m128i_i32[2] = v9;
                this[2002] = v13;
                v16 = v31;
                this[2003] = v14;
                v17 = v32;
                this[2004] = v16;
                this[2005] = v17;
                if ( this[2005].m128i_i64[0] == 0xFFFFFFFFLL )
                  this[2006].m128i_i64[0] = v11;
                else
                  this[2006].m128i_i64[0] = v11 + 9 * v12 / 10;
                v18 = _mm_cvtsi128_si32(v15);
                if ( v9 > v18 )
                {
                  v26 = v9 - v18;
                  v4 = 8;
                  if ( v26 < 8 )
                    v4 = v26;
                }
                this[2013].m128i_i32[3] = v4;
                v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this[2000].m128i_i64[0] + 272LL))(this[2000].m128i_i64[0]);
                v20 = this[2002].m128i_i32[0];
                v21 = this + 2007;
                this[2006].m128i_i64[1] = v19;
                v22 = &this[2008].m128i_i8[8];
                this[2007].m128i_i64[0] = this[2002].m128i_i64[1];
                this[2008].m128i_i32[0] = v20;
                this[2007].m128i_i64[1] = v19;
                v23 = this[2003].m128i_i64[1];
                v24 = this[2003].m128i_i32[1];
                this[2009].m128i_i64[0] = this[2006].m128i_i64[1] * this[2005].m128i_u32[2];
                this[2008].m128i_i64[1] = v23;
                this[2009].m128i_i32[2] = v24;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

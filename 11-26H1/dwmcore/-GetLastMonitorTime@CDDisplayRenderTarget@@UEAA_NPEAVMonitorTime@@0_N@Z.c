/*
 * XREFs of ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180177B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDDisplayRenderTarget::GetLastMonitorTime(
        CDDisplayRenderTarget *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3,
        char a4)
{
  int v4; // r14d
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __m128i v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // eax
  __int64 v18; // rax
  int v19; // ecx
  char *v20; // r8
  char *v21; // r9
  __int64 v22; // rax
  int v23; // ecx
  bool result; // al
  unsigned int v25; // ebp
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-98h] BYREF
  __m128i v27; // [rsp+30h] [rbp-88h] BYREF
  __int128 v28; // [rsp+40h] [rbp-78h]
  __int128 v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+60h] [rbp-58h]
  __int128 v31; // [rsp+70h] [rbp-48h]

  v4 = 0;
  if ( !a4 )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart <= *((_QWORD *)this + 4015) )
    {
      v20 = (char *)this + 32136;
      v21 = (char *)this + 32160;
LABEL_14:
      result = 1;
      *(_OWORD *)a2 = *(_OWORD *)v20;
      *((_QWORD *)a2 + 2) = *((_QWORD *)v20 + 2);
      *(_OWORD *)a3 = *(_OWORD *)v21;
      *((_QWORD *)a3 + 2) = *((_QWORD *)v21 + 2);
      return result;
    }
  }
  v8 = *((_QWORD *)this + 4003);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL))(v8);
    if ( v9 )
    {
      memset_0(&v27, 0, 0x50uLL);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 4003) + 344LL))(
              *((_QWORD *)this + 4003),
              &v27) )
      {
        v10 = *((_QWORD *)&v28 + 1);
        if ( *((_QWORD *)&v28 + 1) )
        {
          if ( *((_QWORD *)&v29 + 1) )
          {
            v11 = v31;
            if ( (_QWORD)v31 )
            {
              if ( DWORD2(v31) )
              {
                v12 = v28;
                v13 = v29;
                v14 = v27;
                *(__m128i *)((char *)this + 32040) = v27;
                *((_DWORD *)this + 8060) = v9;
                *(_OWORD *)((char *)this + 32056) = v12;
                v15 = v30;
                *(_OWORD *)((char *)this + 32072) = v13;
                v16 = v31;
                *(_OWORD *)((char *)this + 32088) = v15;
                *(_OWORD *)((char *)this + 32104) = v16;
                if ( *((_QWORD *)this + 4013) == 0xFFFFFFFFLL )
                  *((_QWORD *)this + 4015) = v10;
                else
                  *((_QWORD *)this + 4015) = v10 + 9 * v11 / 10;
                v17 = _mm_cvtsi128_si32(v14);
                if ( v9 > v17 )
                {
                  v25 = v9 - v17;
                  v4 = 8;
                  if ( v25 < 8 )
                    v4 = v25;
                }
                *((_DWORD *)this + 8061) = v4;
                v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4003) + 272LL))(*((_QWORD *)this + 4003));
                v19 = *((_DWORD *)this + 8014);
                v20 = (char *)this + 32136;
                *((_QWORD *)this + 4016) = v18;
                v21 = (char *)this + 32160;
                *((_QWORD *)this + 4017) = *((_QWORD *)this + 4008);
                *((_DWORD *)this + 8038) = v19;
                *((_QWORD *)this + 4018) = v18;
                v22 = *((_QWORD *)this + 4010);
                v23 = *((_DWORD *)this + 8019);
                *((_QWORD *)this + 4021) = *((_QWORD *)this + 4016) * *((unsigned int *)this + 8028);
                *((_QWORD *)this + 4020) = v22;
                *((_DWORD *)this + 8044) = v23;
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

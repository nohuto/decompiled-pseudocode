/*
 * XREFs of ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1800EF6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1800EFBE0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 */

char __fastcall CDDisplayRenderTarget::GetStats(
        CDDisplayRenderTarget *this,
        LARGE_INTEGER a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  char *v3; // rbx
  LARGE_INTEGER v5; // rbp
  __int64 v6; // rsi
  unsigned int *v7; // r14
  __int64 v8; // xmm1_8
  unsigned int v9; // ecx
  __int64 v10; // rax
  LARGE_INTEGER v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  CComposition *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r8d
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // r10
  int LowPart; // r9d
  DWORD v22; // r11d
  unsigned __int64 v23; // r13
  __int64 v24; // r15
  LONGLONG v25; // rax
  unsigned __int64 v26; // rtt
  DWORD v27; // r12d
  __int64 v28; // r14
  unsigned __int64 v29; // rbp
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER v32; // [rsp+78h] [rbp+10h] BYREF
  LARGE_INTEGER v33; // [rsp+80h] [rbp+18h] BYREF
  __int64 v34; // [rsp+88h] [rbp+20h]

  v3 = (char *)this + 31992;
  v5 = a2;
  if ( a2.QuadPart > *((_QWORD *)this + 4015) )
    CTargetStats::UpdatePresentStats((CDDisplayRenderTarget *)((char *)this + 31992));
  v6 = 0LL;
  v7 = (unsigned int *)(v3 + 252);
  if ( *((_QWORD *)v3 + 16) )
  {
    v8 = *((_QWORD *)v3 + 20);
    v9 = *v7 + 1;
    *((_OWORD *)v3 + 12) = *((_OWORD *)v3 + 9);
    *((_QWORD *)v3 + 26) = v8;
    v10 = *((_QWORD *)v3 + 25) * v9;
    *((_DWORD *)v3 + 52) += v9;
    *((_QWORD *)v3 + 24) += v10;
    v11 = v5;
    PerformanceCount = v5;
    if ( !v5.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v11 = PerformanceCount;
    }
    v12 = *((_QWORD *)v3 + 24);
    v13 = *((_QWORD *)v3 + 25);
    if ( v13 + v12 < v11.QuadPart )
    {
      *((_DWORD *)v3 + 52) += (v11.QuadPart - v12) / v13;
      *((_QWORD *)v3 + 24) = v12 + v13 * ((v11.QuadPart - v12) / v13);
    }
  }
  v14 = g_pComposition;
  *(_DWORD *)a3 = *v7;
  v15 = 0LL;
  if ( v14 )
    v15 = *((_QWORD *)v14 + 110);
  if ( *((_QWORD *)v3 + 33) == v15 )
    v16 = *((_QWORD *)v3 + 32);
  else
    v16 = 0LL;
  *((_QWORD *)a3 + 1) = v16;
  *((_QWORD *)a3 + 2) = *((_QWORD *)v3 + 17);
  if ( *((_QWORD *)v3 + 16) )
  {
    v17 = *v7;
    v18 = v5;
    v19 = *((_QWORD *)v3 + 19);
    v20 = *((_QWORD *)v3 + 21);
    LowPart = *v7 + *((_DWORD *)v3 + 40);
    v22 = *((_DWORD *)v3 + 46);
    v23 = *((_QWORD *)v3 + 22);
    v34 = v20;
    v24 = *((_QWORD *)v3 + 18) + v19 * v17;
    v32.LowPart = v22;
    PerformanceCount.LowPart = LowPart;
    v33 = v5;
    if ( !v5.QuadPart )
    {
      QueryPerformanceCounter(&v33);
      v17 = *v7;
      v18 = v33;
      LowPart = PerformanceCount.LowPart;
      v20 = v34;
      v22 = v32.LowPart;
    }
    if ( v19 + v24 < v18.QuadPart )
    {
      v26 = v18.QuadPart - v24;
      v25 = (v18.QuadPart - v24) / v19;
      v24 += v19 * (v26 / v19);
      PerformanceCount.LowPart = v25 + LowPart;
    }
    v32 = v5;
    v27 = v17 / *((_DWORD *)v3 + 30) + v22;
    v28 = v20 + v23 * (v17 / *((_DWORD *)v3 + 30));
    if ( !v5.QuadPart )
    {
      QueryPerformanceCounter(&v32);
      v5 = v32;
    }
    if ( v28 + v23 < v5.QuadPart )
    {
      v29 = v5.QuadPart - v28;
      v28 += v23 * (v29 / v23);
      v27 += v29 / v23;
    }
    *((_DWORD *)a3 + 6) = *((_DWORD *)v3 + 62);
    *((_DWORD *)a3 + 7) = PerformanceCount.LowPart;
    *((_DWORD *)a3 + 8) = v27;
    *((_QWORD *)a3 + 5) = v24;
    *((_QWORD *)a3 + 6) = v28;
    *((_DWORD *)a3 + 14) = *((_DWORD *)v3 + 12);
    *((_DWORD *)a3 + 15) = *((_DWORD *)v3 + 13);
    *((_DWORD *)a3 + 16) = *((_DWORD *)v3 + 24);
    *((_QWORD *)a3 + 9) = *((_QWORD *)v3 + 7);
    v6 = *((_QWORD *)v3 + 13);
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
  }
  *((_QWORD *)a3 + 10) = v6;
  return 1;
}

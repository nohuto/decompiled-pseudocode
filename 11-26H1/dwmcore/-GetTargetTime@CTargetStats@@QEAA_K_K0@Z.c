/*
 * XREFs of ?GetTargetTime@CTargetStats@@QEAA_K_K0@Z @ 0x1800EF980
 * Callers:
 *     ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x1800EDBB0 (-GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z.c)
 *     ?GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z @ 0x1800EDC10 (-GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z.c)
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1800EFBE0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     McTemplateU0nxnnn_EventWriteTransfer @ 0x180212F98 (McTemplateU0nxnnn_EventWriteTransfer.c)
 */

unsigned __int64 __fastcall CTargetStats::GetTargetTime(CTargetStats *this, unsigned __int64 a2, LARGE_INTEGER a3)
{
  __int64 v3; // rdi
  _OWORD *v7; // r14
  __int64 v8; // xmm1_8
  unsigned int v9; // ecx
  __int64 v10; // rax
  LARGE_INTEGER v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  LARGE_INTEGER v14; // r8
  char *v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v18; // r10
  int v19; // r9d
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  unsigned __int64 v24; // rtt
  __int128 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+70h] [rbp-28h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  if ( a3.QuadPart > *((_QWORD *)this + 16) )
    CTargetStats::UpdatePresentStats(this);
  v7 = (_OWORD *)((char *)this + 144);
  if ( *((_QWORD *)this + 16) )
  {
    v8 = *((_QWORD *)this + 20);
    v9 = *((_DWORD *)this + 63) + 1;
    *((_OWORD *)this + 12) = *v7;
    *((_QWORD *)this + 26) = v8;
    v10 = *((_QWORD *)this + 25) * v9;
    *((_DWORD *)this + 52) += v9;
    *((_QWORD *)this + 24) += v10;
    v11 = a3;
    PerformanceCount = a3;
    if ( !a3.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v11 = PerformanceCount;
    }
    v12 = *((_QWORD *)this + 24);
    v13 = *((_QWORD *)this + 25);
    if ( v13 + v12 < v11.QuadPart )
    {
      *((_DWORD *)this + 52) += (v11.QuadPart - v12) / v13;
      *((_QWORD *)this + 24) = v12 + v13 * ((v11.QuadPart - v12) / v13);
    }
  }
  v14 = *(LARGE_INTEGER *)v7;
  if ( !*(_QWORD *)v7
    || v14.QuadPart < (unsigned __int64)a3.QuadPart
    && (unsigned int)((a3.QuadPart - v14.QuadPart) / *((_QWORD *)this + 19)) > 3
    || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
  {
    v15 = (char *)this + 216;
    v16 = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_DWORD *)this + 58) = 0;
    *((_QWORD *)this + 28) = 0LL;
  }
  else
  {
    v18 = *((_QWORD *)this + 19);
    v19 = *((_DWORD *)this + 40);
    v20 = a2 + (v18 >> 1);
    if ( v20 < v14.QuadPart )
    {
      v24 = v14.QuadPart - v20;
      v14.QuadPart -= v18 * ((unsigned int)((v14.QuadPart - v20) / v18) + 1);
      *(LARGE_INTEGER *)&v25 = v14;
      v21 = v19 - (v24 / v18 + 1);
    }
    else
    {
      *(_QWORD *)&v25 = v14.QuadPart + v18 * (unsigned int)((v20 - v14.QuadPart) / v18);
      v21 = (v20 - v14.QuadPart) / v18 + v19;
    }
    LODWORD(v26) = v21;
    if ( v21 >= *((_DWORD *)this + 52) )
    {
      v23 = v26;
      *((_QWORD *)&v25 + 1) = *((_QWORD *)this + 19);
      v22 = v25;
    }
    else
    {
      v22 = *((_OWORD *)this + 12);
      v23 = *((_QWORD *)this + 26);
    }
    v15 = (char *)this + 216;
    *(_OWORD *)((char *)this + 216) = v22;
    *((_QWORD *)this + 29) = v23;
    v16 = a2 - *((_QWORD *)this + 27);
    if ( *((_QWORD *)this + 27) >= a2 )
      v16 = *((_QWORD *)this + 27) - a2;
  }
  *((_QWORD *)this + 30) = v16;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 110);
  *((_QWORD *)this + 34) = v3;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0nxnnn_EventWriteTransfer((_DWORD)this + 192, v16, v14.LowPart, (_DWORD)this, v16);
  return *(_QWORD *)v15;
}

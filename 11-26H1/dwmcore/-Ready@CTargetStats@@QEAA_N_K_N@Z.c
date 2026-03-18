/*
 * XREFs of ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1800EFBE0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x18018C560 (-GetFrameDuration@CComposition@@QEBA_KXZ.c)
 *     McTemplateU0nxnnn_EventWriteTransfer @ 0x180212F98 (McTemplateU0nxnnn_EventWriteTransfer.c)
 *     McTemplateU0ntqqxxnnn_EventWriteTransfer @ 0x1802533F0 (McTemplateU0ntqqxxnnn_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int8 __fastcall CTargetStats::Ready(DWORD *this, LARGE_INTEGER a2, char a3)
{
  unsigned __int8 v3; // si
  unsigned __int64 v4; // r12
  char v5; // bl
  LARGE_INTEGER v6; // r15
  _OWORD *v8; // r14
  LARGE_INTEGER v9; // r8
  __int64 v10; // xmm1_8
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  CComposition *v18; // r8
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  LARGE_INTEGER v21; // r9
  _QWORD *v22; // r10
  DWORD LowPart; // r11d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r10
  DWORD v28; // r8d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rtt
  unsigned __int64 v31; // rdx
  DWORD v32; // r8d
  __int64 v34; // r13
  LARGE_INTEGER v35; // r10
  _QWORD *v36; // r9
  DWORD v37; // r11d
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  DWORD v40; // r11d
  unsigned __int64 v41; // rcx
  LONGLONG v42; // rcx
  DWORD v43; // r11d
  __int128 v44; // xmm0
  __int64 v45; // xmm1_8
  unsigned __int64 v46; // rbx
  DWORD v47; // r11d
  unsigned __int64 v48; // rcx
  LONGLONG v49; // rcx
  DWORD v50; // r11d
  __int128 v51; // xmm0
  __int64 v52; // xmm1_8
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rtt
  __int64 v55; // rbx
  int v56; // [rsp+48h] [rbp-31h]
  __int128 v57; // [rsp+80h] [rbp+7h]
  __int128 v58; // [rsp+80h] [rbp+7h]
  __int64 v59; // [rsp+90h] [rbp+17h]
  LARGE_INTEGER PerformanceCount; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 v61; // [rsp+E8h] [rbp+6Fh]
  char v62; // [rsp+F0h] [rbp+77h]

  v62 = a3;
  v3 = 0;
  LOBYTE(v4) = -1;
  v5 = a3;
  v6 = a2;
  if ( a2.QuadPart > *((_QWORD *)this + 16) )
    CTargetStats::UpdatePresentStats((CTargetStats *)this);
  v8 = this + 36;
  if ( *((_QWORD *)this + 16) )
  {
    v9 = v6;
    v10 = *((_QWORD *)this + 20);
    v11 = this[63] + 1;
    *((_OWORD *)this + 12) = *v8;
    *((_QWORD *)this + 26) = v10;
    v12 = *((_QWORD *)this + 25) * v11;
    this[52] += v11;
    *((_QWORD *)this + 24) += v12;
    PerformanceCount = v6;
    if ( !v6.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v9 = PerformanceCount;
    }
    v13 = *((_QWORD *)this + 24);
    v14 = *((_QWORD *)this + 25);
    if ( v14 + v13 < v9.QuadPart )
    {
      v15 = v9.QuadPart - v13;
      a2.QuadPart = v15 % v14;
      this[52] += v15 / v14;
      *((_QWORD *)this + 24) = v13 + v15 / v14 * v14;
    }
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, LARGE_INTEGER))(**((_QWORD **)g_pComposition + 39) + 24LL))(
          *((_QWORD *)g_pComposition + 39),
          a2);
  v18 = g_pComposition;
  v19 = *(_QWORD *)(v16 + 24);
  v20 = 0LL;
  v61 = v19;
  if ( g_pComposition )
    v20 = *((_QWORD *)g_pComposition + 110);
  if ( *((_QWORD *)this + 34) != v20 )
  {
    v21 = *(LARGE_INTEGER *)v8;
    v22 = this + 54;
    LowPart = this[58];
    PerformanceCount.LowPart = LowPart;
    if ( !v21.QuadPart
      || v21.QuadPart < (unsigned __int64)v6.QuadPart
      && (v17 = (v6.QuadPart - v21.QuadPart) % *((_QWORD *)this + 19),
          (unsigned int)((v6.QuadPart - v21.QuadPart) / *((_QWORD *)this + 19)) > 3)
      || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
    {
      *v22 = 0LL;
      v24 = 0LL;
      this[58] = 0;
      *((_QWORD *)this + 28) = 0LL;
    }
    else
    {
      v39 = *((_QWORD *)this + 19);
      v40 = this[40];
      v41 = v19 + (v39 >> 1);
      if ( v41 < v21.QuadPart )
      {
        v17 = (v21.QuadPart - v41) % v39;
        *(_QWORD *)&v57 = v21.QuadPart - v39 * ((unsigned int)((v21.QuadPart - v41) / v39) + 1);
        v43 = v40 - ((v21.QuadPart - v41) / v39 + 1);
      }
      else
      {
        v17 = (v41 - v21.QuadPart) % v39;
        v42 = (v41 - v21.QuadPart) / v39;
        *(_QWORD *)&v57 = v21.QuadPart + v39 * (unsigned int)v42;
        v43 = v42 + v40;
      }
      LODWORD(v59) = v43;
      if ( v43 >= this[52] )
      {
        v45 = v59;
        *((_QWORD *)&v57 + 1) = *((_QWORD *)this + 19);
        v44 = v57;
      }
      else
      {
        v44 = *((_OWORD *)this + 12);
        v45 = *((_QWORD *)this + 26);
      }
      LowPart = PerformanceCount.LowPart;
      v5 = v62;
      *(_OWORD *)v22 = v44;
      *((_QWORD *)this + 29) = v45;
      v24 = v19 - *v22;
      if ( *v22 >= v19 )
        v24 = *v22 - v19;
    }
    *((_QWORD *)this + 30) = v24;
    v25 = 0LL;
    if ( v18 )
      v25 = *((_QWORD *)v18 + 110);
    *((_QWORD *)this + 34) = v25;
    if ( this[58] == LowPart || (Microsoft_Windows_Dwm_CompositorEnableBits & 1) == 0 )
      goto LABEL_17;
LABEL_71:
    McTemplateU0nxnnn_EventWriteTransfer(v24, v17, (_DWORD)v18, (_DWORD)this, v24);
    v18 = g_pComposition;
    goto LABEL_17;
  }
  v34 = 0LL;
  if ( g_pComposition )
    v34 = *((_QWORD *)g_pComposition + 110);
  if ( (unsigned __int64)(v34 - *((_QWORD *)this + 35)) > 0x10 )
  {
    if ( (v35 = *(LARGE_INTEGER *)v8, v36 = this + 54, v37 = this[58], PerformanceCount.LowPart = v37, !v35.QuadPart)
      || v35.QuadPart < (unsigned __int64)v6.QuadPart
      && (v17 = (v6.QuadPart - v35.QuadPart) % *((_QWORD *)this + 19),
          (unsigned int)((v6.QuadPart - v35.QuadPart) / *((_QWORD *)this + 19)) > 3)
      || *((_QWORD *)this + 14) == 0xFFFFFFFFLL )
    {
      *v36 = 0LL;
      v24 = 0LL;
      this[58] = 0;
      *((_QWORD *)this + 28) = 0LL;
    }
    else
    {
      v46 = *((_QWORD *)this + 19);
      v47 = this[40];
      v48 = (v46 >> 1) + v61;
      if ( v48 < v35.QuadPart )
      {
        *(_QWORD *)&v58 = v35.QuadPart - v46 * ((unsigned int)((v35.QuadPart - v48) / v46) + 1);
        v50 = v47 - ((v35.QuadPart - v48) / v46 + 1);
      }
      else
      {
        v49 = (v48 - v35.QuadPart) / v46;
        *(_QWORD *)&v58 = v35.QuadPart + v46 * (unsigned int)v49;
        v50 = v49 + v47;
      }
      LODWORD(v59) = v50;
      if ( v50 >= this[52] )
      {
        v52 = v59;
        *((_QWORD *)&v58 + 1) = *((_QWORD *)this + 19);
        v51 = v58;
      }
      else
      {
        v51 = *((_OWORD *)this + 12);
        v52 = *((_QWORD *)this + 26);
      }
      v17 = v61;
      v37 = PerformanceCount.LowPart;
      v53 = v61;
      v5 = v62;
      *(_OWORD *)v36 = v51;
      *((_QWORD *)this + 29) = v52;
      v24 = v53 - *v36;
      if ( *v36 >= v17 )
        v24 = *v36 - v17;
    }
    *((_QWORD *)this + 30) = v24;
    v38 = 0LL;
    if ( v18 )
      v38 = *((_QWORD *)v18 + 110);
    *((_QWORD *)this + 34) = v38;
    if ( this[58] != v37 )
    {
      *((_QWORD *)this + 35) = v34;
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        goto LABEL_71;
    }
  }
LABEL_17:
  if ( this[10] )
  {
    if ( this[10] == 2 )
LABEL_25:
      v3 = 1;
  }
  else
  {
    if ( this[63] < 2 )
    {
      if ( !*((_QWORD *)this + 27) )
        goto LABEL_25;
      v26 = (*(__int64 (__fastcall **)(_QWORD, LARGE_INTEGER))(**((_QWORD **)v18 + 39) + 32LL))(
              *((_QWORD *)v18 + 39),
              v6);
      v27 = *((_QWORD *)this + 19);
      v28 = this[40];
      v29 = v26 + (v27 >> 1);
      if ( v29 < *(_QWORD *)v8 )
      {
        v54 = *(_QWORD *)v8 - v29;
        v31 = *(_QWORD *)v8 - v27 * ((unsigned int)(v54 / v27) + 1);
        v32 = v28 - (v54 / v27 + 1);
      }
      else
      {
        v30 = v29 - *(_QWORD *)v8;
        v31 = *(_QWORD *)v8 + v27 * (unsigned int)(v30 / v27);
        v32 = v30 / v27 + v28;
      }
      if ( v32 < this[52] )
      {
        v31 = *((_QWORD *)this + 24);
        v32 = *((_QWORD *)this + 26);
      }
      if ( this[58] != v32 )
        goto LABEL_25;
      v4 = v31 < v26 ? v26 - v31 : v31 - v26;
      if ( *((_QWORD *)this + 30) <= v4 )
        goto LABEL_25;
      if ( v5 )
      {
        v55 = *((_QWORD *)this + 28);
        if ( *((_QWORD *)this + 30) <= CComposition::GetFrameDuration(g_pComposition) + v55 )
          goto LABEL_25;
      }
    }
    if ( this[63] )
      v3 = (v6.QuadPart - *((_QWORD *)this + 32)) / (unsigned __int64)g_qpcFrequency.QuadPart >= 2;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0ntqqxxnnn_EventWriteTransfer(
      this[10],
      (_DWORD)this + 216,
      v3,
      (_DWORD)this,
      v3,
      this[10],
      this[63],
      *((_QWORD *)this + 30),
      v4,
      v56,
      (__int64)(this + 54));
  return v3;
}

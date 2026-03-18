/*
 * XREFs of ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180193914
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x180193604 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x180193594 (-GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 *     McTemplateU0qqqff_EventWriteTransfer @ 0x1801D3D5C (McTemplateU0qqqff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@QEAA_NXZ @ 0x18025D408 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkScanoutBuffer2@@@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::DecideBufferToDispatch(
        CComputeScribbleScheduler *this,
        struct CComputeScribbleFramebuffer **a2,
        struct CComputeScribbleFramebuffer **a3)
{
  __int64 v5; // rsi
  CComputeScribbleRenderer *v7; // rcx
  __int64 v8; // rsi
  int OverlayMonitorTarget; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rbx
  double v13; // xmm6_8
  double v14; // xmm7_8
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // r15d
  int v18; // eax
  unsigned __int64 v20; // rax
  double v21; // xmm0_8
  int v22; // r8d
  struct CComputeScribbleFramebuffer *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  struct CComputeScribbleFramebuffer *v27; // rdx
  int v28; // r9d
  int v29; // ecx
  float v30; // xmm0_4
  float v31; // xmm1_4
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-39h] BYREF
  __int64 v33; // [rsp+50h] [rbp-31h] BYREF
  struct IOverlayMonitorTarget *v34; // [rsp+58h] [rbp-29h] BYREF
  __int128 v35; // [rsp+60h] [rbp-21h] BYREF
  __int128 v36; // [rsp+70h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = *((_QWORD *)this + 17) - *((_QWORD *)this + 16);
  v7 = (CComputeScribbleRenderer *)*((_QWORD *)this + 25);
  v8 = v5 >> 3;
  v34 = 0LL;
  OverlayMonitorTarget = CComputeScribbleRenderer::GetOverlayMonitorTarget(v7, &v34);
  v10 = OverlayMonitorTarget;
  if ( OverlayMonitorTarget < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)OverlayMonitorTarget);
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    return v10;
  }
  v11 = (*(__int64 (__fastcall **)(struct IOverlayMonitorTarget *))(*(_QWORD *)v34 + 280LL))(v34);
  v33 = v11;
  v12 = v11;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v13 = 0.0;
    v14 = 0.0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkScanoutBuffer2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkScanoutBuffer2>::GetImpl'::`2'::impl)
      && *((_BYTE *)this + 216) )
    {
      PerformanceCount.QuadPart = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, LARGE_INTEGER *))v12)(
             v12,
             &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f,
             &PerformanceCount) < 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&PerformanceCount);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
        v10 = -2003292412;
        goto LABEL_14;
      }
      v15 = (*(__int64 (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)PerformanceCount.QuadPart + 88LL))(PerformanceCount);
      v16 = v15;
      if ( !v15 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 160LL))(v15) )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&PerformanceCount);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
        v10 = -2003304309;
        goto LABEL_14;
      }
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
      *a2 = (struct CComputeScribbleFramebuffer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 200LL))(v16);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&PerformanceCount);
    }
    else
    {
      v35 = 0LL;
      v36 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 144LL))(v12, &v35);
      v10 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x312,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
          (const char *)(unsigned int)v18);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
        goto LABEL_14;
      }
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v20 = (PerformanceCount.QuadPart - (__int64)v36) / (qword_1803DE610 / 0xF4240uLL);
      if ( (v20 & 0x8000000000000000uLL) != 0LL )
        v21 = (double)(int)(v20 & 1 | (v20 >> 1)) + (double)(int)(v20 & 1 | (v20 >> 1));
      else
        v21 = (double)(int)v20;
      v22 = 0;
      v17 = v35 - *((_DWORD *)this + 48);
      if ( (_DWORD)v8 )
      {
        while ( 1 )
        {
          v23 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 16) + 8LL * ((v22 + v17) % (unsigned int)v8));
          if ( *((_BYTE *)v23 + 256) )
          {
            if ( *((_BYTE *)this + 216) )
              break;
            v24 = *((_QWORD *)this + 19);
            v25 = 32LL * ((v22 + v17) % (unsigned int)v8);
            if ( !v22 )
            {
              v14 = *(double *)(v25 + v24 + 8);
              *(_QWORD *)&v13 = COERCE_UNSIGNED_INT64(*((double *)this + 6) - v21 / 1000000.0 - (v14
                                                                                               - (double)0
                                                                                               * *((double *)this + 6))) & _xmm;
            }
            if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                                 *((double *)this + 6)
                               - v21 / 1000000.0
                               - (*(double *)(v25 + v24 + 8)
                                - (double)v22 * *((double *)this + 6))) & _xmm) < 0.002499999944120646 )
              break;
          }
          if ( ++v22 >= (unsigned int)v8 )
            goto LABEL_27;
        }
        *a2 = v23;
      }
    }
LABEL_27:
    v26 = (v17 + 1) % (unsigned int)v8;
    if ( *a2 )
      v26 = (*((_DWORD *)*a2 + 65) + 1) % (unsigned int)v8;
    v27 = *(struct CComputeScribbleFramebuffer **)(*((_QWORD *)this + 16) + 8 * v26);
    if ( *((_BYTE *)v27 + 256) )
      *a3 = v27;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    {
      v28 = -1;
      if ( *a3 )
        v29 = *((_DWORD *)*a3 + 65);
      else
        v29 = -1;
      if ( *a2 )
        v28 = *((_DWORD *)*a2 + 65);
      v30 = v14;
      v31 = v13;
      McTemplateU0qqqff_EventWriteTransfer(
        v29,
        (_DWORD)v27,
        (v17 + 1) % (unsigned int)v8,
        v28,
        v29,
        SLOBYTE(v31),
        SLOBYTE(v30));
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    return 0LL;
  }
  else
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    return 2291662854LL;
  }
}

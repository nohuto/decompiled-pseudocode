/*
 * XREFs of ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x18012ACF0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18012A834 (-clear@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18012B648 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x18012BB94 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2,
        __int64 a3)
{
  bool v5; // r12
  __int64 v6; // rax
  unsigned int v7; // r14d
  struct ISwapChainRealization *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, char *, char *, char *); // rax
  void (__fastcall ***v15)(_QWORD, char *, char *, char *); // rcx
  int v17; // eax
  struct ISwapChainRealization *Realization; // rax
  bool v19; // sf
  bool v20; // of
  unsigned int v21; // ecx
  bool v22; // zf
  void (__fastcall **v23)(_QWORD, char *, char *, char *); // rax
  char *v24; // rdx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  BOOL v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  char *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  int *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  BOOL *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  int *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  int *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  int *v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  BOOL *v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 *v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]

  v5 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v20 = __OFSUB__(*((_DWORD *)this + 72), 3);
    v19 = *((_DWORD *)this + 72) - 3 < 0;
    v21 = *((_DWORD *)a2 + 90);
    v40 = 0LL;
    v22 = *(_DWORD *)a2 == 2;
    v31 = v19 == v20;
    v33 = 0;
    v35 = v22;
    v34 = *((_DWORD *)a2 + 6);
    v32 = *((_DWORD *)a2 + 65);
    v30 = *((_DWORD *)a2 + 67);
    v29 = 0;
    v28 = (v21 >> 3) & 1;
    v27 = (v21 >> 2) & 1;
    v39 = *((_QWORD *)a2 + 29);
    v26 = *((_DWORD *)a2 + 56);
    v37 = *((unsigned int *)a2 + 7);
    v36 = *((_QWORD *)a2 + 2);
    v42 = (char *)a2 + 4;
    v44 = &v36;
    v46 = &v37;
    v48 = &v38;
    v50 = &v25;
    v52 = &v26;
    v54 = &v39;
    v56 = &v27;
    v58 = &v28;
    v60 = &v29;
    v62 = &v30;
    v64 = &v31;
    v66 = &v32;
    v68 = &v33;
    v25 = (v21 >> 4) & 1;
    v38 = 0LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 8LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v70 = &v34;
    v71 = 4LL;
    v72 = &v35;
    v73 = 4LL;
    v74 = &v40;
    v75 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_SURFACEUPDATE,
      a3,
      0x12u,
      &v41);
  }
  v6 = *((_QWORD *)a2 + 2);
  v7 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 17) != v6 )
  {
    if ( *((_DWORD *)this + 36) != 3 || !v6 )
      v5 = 0;
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 112), v5);
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  if ( v9 )
  {
    if ( *((_QWORD *)this + 17) != v9 )
      goto LABEL_21;
    v10 = *((_QWORD *)this + 23);
    v11 = *((unsigned int *)a2 + 6);
    if ( v11 < (*((_QWORD *)this + 24) - v10) >> 3 )
      v8 = *(struct ISwapChainRealization **)(v10 + 8 * v11);
    if ( v8 )
    {
      v12 = *(_QWORD *)v8;
    }
    else
    {
LABEL_21:
      v17 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
              (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
              *((_QWORD *)a2 + 2));
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x121u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xDBu, 0LL);
        goto LABEL_16;
      }
      Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                      (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
                      *((_DWORD *)a2 + 6));
      v8 = Realization;
      if ( !Realization )
        goto LABEL_14;
      v12 = *(_QWORD *)Realization;
    }
    (*(void (__fastcall **)(struct ISwapChainRealization *))(v12 + 8))(v8);
LABEL_14:
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 72) = *((_DWORD *)a2 + 92);
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 93);
    *((_BYTE *)this + 300) = *(_DWORD *)a2 == 2;
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
      this,
      v8,
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 32),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 196));
    v13 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
    if ( v13 )
    {
      v14 = (void (__fastcall ***)(_QWORD, char *, char *, char *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      v15 = v14;
      if ( v14 )
      {
        v23 = *v14;
        if ( this )
          v24 = (char *)this + 104;
        else
          v24 = 0LL;
        (*v23)(v15, v24, (char *)a2 + 32, (char *)a2 + 196);
      }
    }
  }
LABEL_16:
  if ( *((_BYTE *)this + 295) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((__int64 **)this + 23);
    *((_BYTE *)this + 295) = 0;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}

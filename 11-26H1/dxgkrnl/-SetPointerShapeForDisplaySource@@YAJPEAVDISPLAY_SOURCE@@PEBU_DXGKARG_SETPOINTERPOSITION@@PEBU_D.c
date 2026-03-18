/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C
 * Callers:
 *     DxgkRedrawCursorForPostCompositon @ 0x1401F344C (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1402CE01C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402CEA60 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CED44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1402CF050 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1402CF190 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140323480 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x140336CE0 (-ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@.c)
 *     ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1403372F4 (-ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x140346C50 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x14037C758 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x14038F6C0 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1403B39BC (-ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403C073C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1403C6F28 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10)
{
  struct _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  __int64 v11; // rax
  __int64 v13; // r15
  int v16; // ebx
  __int64 v17; // rcx
  bool v18; // zf
  DXGFASTMUTEX *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r14
  bool v22; // r13
  char v23; // r12
  __int64 v24; // r13
  unsigned int v25; // edx
  MONITOR_MGR *v26; // r10
  DXGMONITOR *v27; // rbx
  __int64 v28; // rax
  int v29; // ebx
  bool v30; // cl
  struct DISPLAY_SOURCE *v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v35; // edx
  UINT v36; // r8d
  UINT v37; // ecx
  UINT *v38; // r14
  void *v39; // rcx
  __int64 v40; // rdx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r12
  __int32 v42; // eax
  const struct _DXGKARG_SETPOINTERSHAPE *v43; // rbx
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  void *v48; // rcx
  UINT v49; // eax
  int v50; // r11d
  int v51; // r8d
  int v52; // ecx
  __int128 v53; // xmm0
  int v54; // r9d
  int v55; // r10d
  int v56; // edx
  int v57; // r12d
  int v58; // ebx
  int v59; // r9d
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  int v63; // r10d
  INT v64; // edx
  INT v65; // r8d
  int v66; // r9d
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // r8
  char v70; // al
  __int64 v71; // rbx
  __int64 VidPnSourceId; // r13
  INT v73; // r9d
  struct SESSION_VIEW *v74; // rcx
  INT X; // r10d
  char v76; // r14
  int v77; // edx
  int v78; // r8d
  __int64 v79; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v80; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v81; // rbx
  void *pPixels; // rcx
  __int64 v84; // r14
  __int64 v85; // rax
  int v86; // r8d
  INT v87; // eax
  struct _DXGKARG_SETPOINTERSHAPE *v88; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v89; // rbx
  UINT v90; // ecx
  UINT v91; // r9d
  unsigned int v92; // eax
  int v93; // eax
  void *v94; // rcx
  const struct _DXGKARG_SETPOINTERSHAPE *v95; // rcx
  int v96; // eax
  int v97; // r8d
  __int64 v98; // rcx
  UINT Width; // edx
  UINT Height; // r8d
  UINT XHot; // ecx
  UINT YHot; // eax
  INT Y; // r8d
  int v104; // edx
  const wchar_t *v105; // r9
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v107; // ecx
  struct DXGMONITOR *v108; // rdx
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // [rsp+20h] [rbp-E0h]
  __int64 v112; // [rsp+20h] [rbp-E0h]
  __int64 v113; // [rsp+20h] [rbp-E0h]
  __int64 v114; // [rsp+28h] [rbp-D8h]
  __int64 v115; // [rsp+28h] [rbp-D8h]
  __int64 v116; // [rsp+28h] [rbp-D8h]
  __int64 v117; // [rsp+28h] [rbp-D8h]
  int v118[2]; // [rsp+30h] [rbp-D0h]
  __int64 Value; // [rsp+30h] [rbp-D0h]
  __int64 v120; // [rsp+30h] [rbp-D0h]
  int v121[2]; // [rsp+38h] [rbp-C8h]
  char v122; // [rsp+50h] [rbp-B0h]
  bool IsVirtualModeSupportDisabled; // [rsp+51h] [rbp-AFh]
  int v124; // [rsp+54h] [rbp-ACh]
  DXGMONITOR *v125[2]; // [rsp+58h] [rbp-A8h] BYREF
  UINT v126; // [rsp+68h] [rbp-98h]
  unsigned int v127; // [rsp+6Ch] [rbp-94h]
  __int64 v128; // [rsp+70h] [rbp-90h]
  DXGMONITOR *v129; // [rsp+78h] [rbp-88h]
  DXGFASTMUTEX *v130; // [rsp+80h] [rbp-80h] BYREF
  char v131; // [rsp+88h] [rbp-78h]
  int v132; // [rsp+90h] [rbp-70h]
  int v133; // [rsp+94h] [rbp-6Ch]
  int v134; // [rsp+98h] [rbp-68h]
  __int64 v135; // [rsp+A0h] [rbp-60h]
  struct SESSION_VIEW *v136; // [rsp+A8h] [rbp-58h]
  DXGMONITOR *v137; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v138[2]; // [rsp+B8h] [rbp-48h] BYREF
  void *v139; // [rsp+C8h] [rbp-38h]
  __int128 v140; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v141; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_SETPOINTERPOSITION v142; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v143[144]; // [rsp+100h] [rbp+0h] BYREF
  DXGMONITOR *retaddr; // [rsp+1E8h] [rbp+E8h]

  v10 = *a2;
  v141 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v142 = v10;
  v136 = a4;
  v135 = (__int64)a2;
  v13 = *(_QWORD *)(v11 + 16);
  v139 = a5;
  v140 = 0LL;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1090;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v13 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1091;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1091LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v143, (struct DXGADAPTER *const)v13, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v143, 0LL);
  if ( v16 < 0 )
    goto LABEL_100;
  v17 = *(_QWORD *)(v13 + 3160);
  v18 = v17 == -480;
  v19 = (DXGFASTMUTEX *)(v17 + 480);
  v131 = 0;
  v130 = v19;
  if ( v18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v19 = v130;
  }
  if ( DXGFASTMUTEX::IsOwner(v19) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v130);
  if ( a9 )
  {
    v98 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( (a3->Flags.Value == 2 || a3->Flags.Value == 4)
      && (Width = a3->Width, Width <= *(_DWORD *)(v98 + 2464))
      && (Height = a3->Height, Height <= *(_DWORD *)(v98 + 2468))
      && a3->Pitch == 4 * Width
      && a3->VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v98 + 3160) + 96LL)
      && a3->pPixels
      && (XHot = a3->XHot, XHot < Width)
      && (YHot = a3->YHot, YHot < Height) )
    {
      *((_DWORD *)this + 949) = XHot;
      *((_DWORD *)this + 950) = YHot;
      Y = a2->Y;
      if ( XHot != -1 || YHot != -1 )
      {
        v104 = XHot + a2->X;
        if ( v104 >= 0
          && v104 < *((_DWORD *)this + 248)
          && (int)(YHot + Y) >= 0
          && (signed int)(YHot + Y) < *((_DWORD *)this + 249) )
        {
          goto LABEL_11;
        }
      }
      WdLogSingleEntry3(2LL, *(int *)(v13 + 416), *(unsigned int *)(v13 + 412), *((unsigned int *)this + 4));
      v105 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%"
              "I64x%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1127;
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)(v13 + 416), *(unsigned int *)(v13 + 412), *((unsigned int *)this + 4));
      v105 = L"Invalid DXGKARG_SETPOINTERSHAPE passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I64"
              "x%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1114;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v105,
      *(int *)(v13 + 416),
      *(unsigned int *)(v13 + 412),
      *((unsigned int *)this + 4),
      0LL,
      0LL);
    goto LABEL_165;
  }
LABEL_11:
  if ( a8 )
  {
    if ( *(_DWORD *)(v13 + 2320) < 0x7000u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1137;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->GetDriverDdiInterfaceVersion() >= DXGKDDI_INTERFACE_VERSION_WDDM2_2_RS2_1",
        1137LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
    a3 = PristineCursor;
    if ( PristineCursor->pPixels )
    {
      v107 = (PristineCursor->Flags.Value & 1) + 1;
      v134 = PristineCursor->Width;
      v133 = PristineCursor->Height * v107;
      goto LABEL_13;
    }
LABEL_165:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
    v16 = -1073741811;
    goto LABEL_100;
  }
  v133 = a7;
  v134 = a6;
LABEL_13:
  if ( (*(_DWORD *)(v13 + 444) & 0x100) == 0 && (**(_DWORD **)(v13 + 3048) & 8) != 0 )
    goto LABEL_99;
  v20 = *((unsigned int *)this + 4);
  v142.VidPnSourceId = v20;
  v21 = *(_QWORD *)(v13 + 3160);
  if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(4024 * v20 + *(_QWORD *)(v21 + 128) + 760) )
  {
    v16 = -1073741823;
    WdLogSingleEntry4(2LL, -1073741823LL, *((unsigned int *)this + 4), a3->Flags.Value, a5);
    Value = a3->Flags.Value;
    v115 = *((unsigned int *)this + 4);
    WdLogGlobalForLineNumber = 1366;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x VidPnSourceId=0x%I64x Primary is not visible: 0x%I64x DXGADAPTER=0x%I64x",
      -1073741823LL,
      v115,
      Value,
      (__int64)a5,
      0LL);
    goto LABEL_102;
  }
  if ( (*(_DWORD *)(v13 + 444) & 0x20) != 0
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 3160)) )
  {
    goto LABEL_99;
  }
  v22 = 1;
  v122 = 1;
  v23 = 1;
  if ( *((_DWORD *)this + 268) == -1 )
    goto LABEL_177;
  v24 = *(_QWORD *)(v13 + 3160);
  if ( !v24 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10231;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      10231LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v22 = 1;
LABEL_177:
    WdLogSingleEntry4(
      2LL,
      *((unsigned int *)this + 4),
      *(int *)(v13 + 416),
      *(unsigned int *)(v13 + 412),
      -1073741811LL);
    v120 = *(unsigned int *)(v13 + 412);
    v116 = *(int *)(v13 + 416);
    v112 = *((unsigned int *)this + 4);
    WdLogGlobalForLineNumber = 1187;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      v112,
      v116,
      v120,
      -1073741811LL,
      0LL);
    goto LABEL_36;
  }
  IsVirtualModeSupportDisabled = 0;
  if ( *(_QWORD *)(v24 + 112) )
  {
    v125[0] = retaddr;
    v125[1] = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v125);
    MONITOR_MGR::_GetMonitorInstance(v26, v25, 1, (struct MONITOR_REF_ACCESSOR *)v125);
    v27 = v125[1];
    v137 = v125[1];
    if ( v125[1] )
      MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v125[1] + 40));
    v138[0] = retaddr;
    v28 = 2LL;
    do
    {
      v138[1] = v27;
      --v28;
    }
    while ( v28 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v138);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v125);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v137, v108);
    v27 = v137;
  }
  if ( v27 )
  {
    if ( *((_DWORD *)v27 + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5280;
    }
    IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v27);
    v29 = 0;
  }
  else
  {
    v29 = -1073741632;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v137);
  v30 = 0;
  if ( v29 != -1073741632 )
    v30 = IsVirtualModeSupportDisabled;
  if ( v30 )
  {
    v22 = 1;
  }
  else
  {
    v18 = *(_BYTE *)(v24 + 290) == 0;
    v22 = *(_BYTE *)(v24 + 289) == 0;
    v23 = v18;
  }
  v122 = v22;
LABEL_36:
  if ( !v22 || !v23 )
  {
    v31 = 0LL;
    goto LABEL_38;
  }
  v31 = 0LL;
  if ( *((_BYTE *)this + 704) )
  {
LABEL_38:
    if ( a10 )
      goto LABEL_105;
    v32 = *((_QWORD *)this + 1);
    v33 = *((unsigned int *)this + 4);
    if ( v22 )
    {
      if ( !*(_BYTE *)(v32 + 289) )
      {
        v84 = 4024 * v33;
        v85 = *(_QWORD *)(v32 + 128);
        if ( *(_DWORD *)(v84 + v85 + 1020) != 1 )
        {
          switch ( *(_DWORD *)(v84 + v85 + 1020) )
          {
            case 2:
              CurrentOrientation = D3DKMDT_VPPR_ROTATE90;
              goto LABEL_41;
            case 3:
              CurrentOrientation = D3DKMDT_VPPR_ROTATE180;
              goto LABEL_41;
            case 4:
              CurrentOrientation = D3DKMDT_VPPR_ROTATE270;
              goto LABEL_41;
          }
          WdLogSingleEntry2(2LL, *(int *)(v84 + v85 + 1020), *(_QWORD *)(v32 + 16));
          v117 = *(_QWORD *)(v32 + 16);
          v113 = *(int *)(v84 + *(_QWORD *)(v32 + 128) + 1020);
          WdLogGlobalForLineNumber = 8481;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
            v113,
            v117,
            0LL,
            0LL,
            0LL);
        }
      }
      CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    }
    else
    {
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)this + 1), v33, 0);
    }
LABEL_41:
    v35 = *(_DWORD *)(v13 + 2464);
    if ( a3->Width > v35
      || (v36 = *(_DWORD *)(v13 + 2468), v37 = a3->Height, v37 > v36)
      || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v37 > 4 * (unsigned __int64)(v36 * v35) )
    {
LABEL_99:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
      v16 = -1073741823;
LABEL_100:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
      return (unsigned int)v16;
    }
    if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*((ADAPTER_DISPLAY **)this + 1)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5538;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
        5538LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v38 = (UINT *)((char *)this + 824);
    v39 = (void *)*((_QWORD *)this + 106);
    v40 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( !v39 )
    {
      v109 = 4LL * (unsigned int)(*(_DWORD *)(v40 + 2464) * *(_DWORD *)(v40 + 2468));
      if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v40 + 2464) * *(_DWORD *)(v40 + 2468)), 4uLL) )
        v109 = -1LL;
      v110 = operator new[](v109, 0x4B677844u, 256LL);
      *((_QWORD *)this + 106) = v110;
      v39 = (void *)v110;
      if ( !v110 )
        goto LABEL_115;
    }
    memset(v39, 0, 4 * *(unsigned int *)(v13 + 2464) * (unsigned __int64)*(unsigned int *)(v13 + 2468));
    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
    if ( !ClippedCursor->pPixels )
      goto LABEL_115;
    v18 = *((_BYTE *)this + 704) == 0;
    v42 = CurrentOrientation - 2;
    v43 = a3;
    v125[0] = 0LL;
    if ( v18 )
    {
      if ( (v42 & 0xFFFFFFFD) != 0 )
      {
        v44 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
        v45 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      }
      else
      {
        v44 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
        v45 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
      }
      LODWORD(v125[0]) = v44;
      v46 = *((_DWORD *)v136 + 8) - *((_DWORD *)v136 + 6);
      v47 = *((_DWORD *)v136 + 9) - *((_DWORD *)v136 + 7);
    }
    else
    {
      v86 = *((_DWORD *)this + 177);
      v45 = *((_DWORD *)this + 178);
      if ( (v42 & 0xFFFFFFFD) != 0 )
      {
        v44 = *((_DWORD *)this + 177);
        LODWORD(v125[0]) = v44;
      }
      else
      {
        v44 = *((_DWORD *)this + 178);
        LODWORD(v125[0]) = v44;
        v45 = v86;
      }
      v46 = *((_DWORD *)v136 + 8) - *((_DWORD *)v136 + 6);
      v47 = *((_DWORD *)v136 + 9) - *((_DWORD *)v136 + 7);
    }
    v125[1] = (DXGMONITOR *)__PAIR64__(v47, v46);
    HIDWORD(v125[0]) = v45;
    if ( v44 == v46 && v45 == v47 )
    {
      if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v122 )
      {
        v95 = a3;
LABEL_131:
        RotateCursorShape(
          v95,
          (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
          CurrentOrientation,
          (const struct _DXGK_DRIVERCAPS *)(v13 + 2440));
LABEL_57:
        v50 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
        v51 = *((_DWORD *)v136 + 8) - *((_DWORD *)v136 + 6);
        v52 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
        v53 = *((_OWORD *)this + 43);
        v54 = *((_DWORD *)this + 178);
        v55 = *((_DWORD *)v136 + 9) - *((_DWORD *)v136 + 7);
        v18 = *((_BYTE *)this + 704) == 0;
        v56 = *(_QWORD *)((char *)this + 708);
        v129 = *(DXGMONITOR **)((char *)this + 708);
        *(_OWORD *)v125 = v53;
        v132 = v50;
        v124 = v52;
        if ( v18 )
        {
          v58 = HIDWORD(v125[0]);
          v57 = (int)v125[0];
          v129 = v125[1];
        }
        else
        {
          v52 = v54;
          v132 = v56;
          v57 = 0;
          v124 = v54;
          v58 = 0;
          v50 = v56;
        }
        if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
        {
          v96 = v52;
          v61 = v135;
          v59 = *(_DWORD *)(v135 + 4) * v96 / v51;
          v60 = v50;
        }
        else
        {
          v59 = *(_DWORD *)(v135 + 4) * v50 / v51;
          v60 = v52;
          v61 = v135;
        }
        v62 = *(_DWORD *)(v61 + 8) * v60;
        LODWORD(v128) = v59;
        v63 = v62 / v55;
        HIDWORD(v128) = v63;
        if ( v122 )
        {
          v142.X = v59 + v57;
          v87 = v63 + v58;
          goto LABEL_108;
        }
        switch ( CurrentOrientation )
        {
          case D3DKMDT_VPPR_IDENTITY:
            goto LABEL_63;
          case D3DKMDT_VPPR_ROTATE90:
            v64 = v63 + v57;
            v97 = v58 - *((_DWORD *)this + 208) - v59;
            break;
          case D3DKMDT_VPPR_ROTATE180:
            v64 = v50 + v57 - *((_DWORD *)this + 207) - v59;
            v97 = v58 - *((_DWORD *)this + 208) - v63;
            break;
          case D3DKMDT_VPPR_ROTATE270:
            v65 = v59 + v58;
            v64 = v50 + v57 - *((_DWORD *)this + 207) - v63;
LABEL_66:
            v66 = v124;
            goto LABEL_67;
          default:
LABEL_63:
            if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 686;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"Orientation == D3DKMDT_VPPR_IDENTITY",
                686LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v50 = v132;
            }
            v64 = v57 + v128;
            v65 = v58 + HIDWORD(v128);
            goto LABEL_66;
        }
        v66 = v124;
        v65 = v124 + v97;
LABEL_67:
        v67 = v64 + *((_DWORD *)this + 207);
        v142.Y = v65;
        v142.X = v64;
        if ( v67 >= v57 && v64 <= (int)v129 && v65 + *((_DWORD *)this + 208) >= v58 && v65 <= SHIDWORD(v129) )
        {
LABEL_71:
          FillClipParams(
            (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
            this,
            &v142,
            (struct CURSOR_CLIP_PARAMS *)&v140);
          v31 = 0LL;
          if ( HIDWORD(v141) )
          {
            v88 = DISPLAY_SOURCE::GetClippedCursor(this, 1);
            v89 = v88;
            if ( !v88->pPixels )
              goto LABEL_115;
            ClipCurrentCursor(
              (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
              v88,
              (struct CURSOR_CLIP_PARAMS *)&v140);
            v89->VidPnSourceId = *((_DWORD *)this + 4);
            v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 3160), v89);
            if ( v16 >= 0 )
            {
              v70 = 1;
              goto LABEL_74;
            }
          }
          else
          {
            *((_DWORD *)this + 210) = *((_DWORD *)this + 4);
            v16 = ADAPTER_DISPLAY::DdiSetPointerShape(
                    *(ADAPTER_DISPLAY **)(v13 + 3160),
                    (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824));
            if ( v16 >= 0 )
            {
              v70 = 0;
LABEL_74:
              *((_BYTE *)this + 767) = v70;
              goto LABEL_75;
            }
          }
          goto LABEL_102;
        }
        v142.X = v57 + v50 / 2;
        v87 = v58 + v66 / 2;
LABEL_108:
        v142.Y = v87;
        goto LABEL_71;
      }
      v48 = (void *)*((_QWORD *)this + 106);
      *v38 = a3->Flags.Value;
      *((_DWORD *)this + 207) = a3->Width;
      *((_DWORD *)this + 208) = a3->Height;
      *((_DWORD *)this + 209) = a3->Pitch;
      memmove(v48, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
      *((_DWORD *)this + 214) = a3->XHot;
      v49 = a3->YHot;
    }
    else
    {
      v90 = a3->Height * v45;
      v91 = (a3->Width * v44 + v46 - 1) / v46;
      v126 = v91;
      v92 = (v90 + v47 - 1) / v47;
      v127 = v92;
      if ( !v91 || !v92 || v91 > *(_DWORD *)(v13 + 2464) || v92 > *(_DWORD *)(v13 + 2468) )
        goto LABEL_146;
      if ( (a3->Flags.Value & 1) != 0 )
      {
        ConvertMonochromeToColor(a3, (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824));
        v43 = (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
      }
      ClippedCursor->Flags.Value = 0;
      if ( (v43->Flags.Value & 4) != 0 && ContainsXor(v43) )
        v93 = 4;
      else
        v93 = 2;
      ClippedCursor->Flags.Value = v93;
      if ( (v43->Flags.Value & 6) == 0 )
      {
LABEL_146:
        v16 = -1073741637;
        goto LABEL_102;
      }
      v16 = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)v125, v43, ClippedCursor);
      if ( v16 < 0 )
      {
LABEL_102:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
        goto LABEL_100;
      }
      if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v122 )
      {
        v95 = ClippedCursor;
        goto LABEL_131;
      }
      v94 = (void *)*((_QWORD *)this + 106);
      *v38 = ClippedCursor->Flags.Value;
      *((_DWORD *)this + 207) = ClippedCursor->Width;
      *((_DWORD *)this + 208) = ClippedCursor->Height;
      *((_DWORD *)this + 209) = ClippedCursor->Pitch;
      memmove(
        v94,
        ClippedCursor->pPixels,
        ClippedCursor->Pitch * ClippedCursor->Height * ((ClippedCursor->Flags.Value & 1) + 1));
      *((_DWORD *)this + 214) = ClippedCursor->XHot;
      v49 = ClippedCursor->YHot;
    }
    *((_DWORD *)this + 215) = v49;
    goto LABEL_57;
  }
LABEL_105:
  v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 3160), a3);
  if ( v16 < 0 )
    goto LABEL_102;
LABEL_75:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v121[0] = v142.Flags.Value;
    v118[0] = v142.Y;
    LODWORD(v114) = v142.X;
    LODWORD(v111) = v142.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(
      v68,
      &EventSetPointerPosition,
      v69,
      v139,
      v111,
      v114,
      *(_QWORD *)v118,
      *(_QWORD *)v121);
  }
  v16 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v13 + 3160), &v142);
  if ( v16 < 0 )
    goto LABEL_102;
  v71 = *(_QWORD *)(v13 + 3160);
  VidPnSourceId = v142.VidPnSourceId;
  v73 = v142.Y;
  v74 = (struct SESSION_VIEW *)*((_QWORD *)v136 + 6);
  X = v142.X;
  v128 = *(_QWORD *)&v142.X;
  if ( v74 != (struct SESSION_VIEW *)((char *)v136 + 48) )
    v31 = (struct SESSION_VIEW *)((char *)v74 - 56);
  v76 = *(_BYTE *)&v142.Flags.0 & 1;
  v77 = *(_DWORD *)(v135 + 8);
  v78 = *(_QWORD *)(v135 + 4);
  v129 = *(DXGMONITOR **)(v135 + 4);
  if ( v142.VidPnSourceId >= *(_DWORD *)(v71 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6148;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6148LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v77 = HIDWORD(v129);
    v78 = (int)v129;
    v73 = HIDWORD(v128);
    X = v128;
  }
  v79 = 4024 * VidPnSourceId;
  *(_BYTE *)(4024 * VidPnSourceId + *(_QWORD *)(v71 + 128) + 766) = v76;
  if ( v76 )
  {
    *(_DWORD *)(*(_QWORD *)(v71 + 128) + v79 + 768) = X;
    *(_DWORD *)(*(_QWORD *)(v71 + 128) + v79 + 772) = v73;
    *(_DWORD *)(*(_QWORD *)(v71 + 128) + v79 + 716) = v78;
    *(_DWORD *)(*(_QWORD *)(v71 + 128) + v79 + 720) = v77;
  }
  if ( !a8 && *(_DWORD *)(v13 + 2320) >= 0x7000u )
  {
    v80 = DISPLAY_SOURCE::GetPristineCursor(this, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v81 = v80;
    pPixels = (void *)v80->pPixels;
    if ( pPixels )
    {
      v80->Flags.Value = a3->Flags.Value;
      v80->Width = a3->Width;
      v80->Height = a3->Height;
      v80->Pitch = a3->Pitch;
      memmove(pPixels, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
      v81->XHot = a3->XHot;
      v81->YHot = a3->YHot;
      goto LABEL_89;
    }
LABEL_115:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
    v16 = -1073741801;
    goto LABEL_100;
  }
LABEL_89:
  if ( this == v31 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v130);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v143);
    OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
      (struct DXGADAPTER *)v13,
      v135,
      (__int64)a3,
      v134,
      v133,
      (__int64)_lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v130);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v143);
  return 0LL;
}

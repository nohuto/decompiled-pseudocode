/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401C19CC (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401C1B94 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1401C54F0 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x14039DDC0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x14004DA34 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1401A142C (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1402B4484 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x14032CB8C (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x14032F3E8 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x14032FC6C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x140392D40 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x14039ECF4 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1403A8E54 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x14040AB20 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  int v8; // r13d
  __int64 v11; // r12
  __int64 v12; // rbx
  ADAPTER_RENDER *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // esi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v21; // ecx
  __int64 v22; // rbx
  int v23; // eax
  unsigned int v24; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v25; // r14
  __int64 v26; // r8
  __int64 v27; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v28; // rbx
  unsigned int Rotation; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 VidPnSourceId; // rdx
  __int64 v33; // rdx
  unsigned int v34; // r15d
  __int64 v35; // r14
  unsigned int v36; // ebx
  unsigned int v37; // eax
  int v38; // r8d
  __int64 v39; // rcx
  struct _EX_RUNDOWN_REF *v40; // rdx
  int v41; // r9d
  struct _EX_RUNDOWN_REF *j; // rcx
  DXGDEVICE *Count; // r8
  __int64 v44; // rbx
  unsigned int *v45; // r14
  void **v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  ADAPTER_RENDER *v50; // r8
  __int64 v51; // rax
  _DWORD *v52; // rdx
  __int64 v53; // r15
  int v54; // eax
  int *v55; // rdx
  _DWORD *v56; // rcx
  __int64 v57; // rdx
  DXGADAPTER *v58; // rcx
  int v59; // ecx
  unsigned int v60; // ecx
  int v61; // eax
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // rcx
  char v69; // al
  char v70; // bl
  unsigned int v71; // r15d
  char v72; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v73; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  DISPLAY_SOURCE *v77; // rsi
  const struct DXGALLOCATION **v78; // r12
  char *v79; // r13
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  DISPLAY_SOURCE *v83; // rsi
  const wchar_t *v84; // r9
  void **v85; // rsi
  __int64 v86; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r9
  int *v88; // rbx
  unsigned int v89; // r9d
  __int128 *v90; // r10
  unsigned int v91; // ecx
  struct _EX_RUNDOWN_REF **v92; // rsi
  __int64 v93; // rbx
  int v94; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v96; // [rsp+70h] [rbp-90h] BYREF
  unsigned int i; // [rsp+78h] [rbp-88h]
  unsigned int v98; // [rsp+7Ch] [rbp-84h]
  __int64 v99; // [rsp+80h] [rbp-80h]
  int IsEnabledDeviceUsageNoInline; // [rsp+88h] [rbp-78h]
  int v101; // [rsp+8Ch] [rbp-74h]
  __int64 Elements; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v103; // [rsp+98h] [rbp-68h]
  void **v104; // [rsp+A0h] [rbp-60h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v105; // [rsp+A8h] [rbp-58h]
  int *v106; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v108[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v109; // [rsp+D8h] [rbp-28h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v110; // [rsp+E0h] [rbp-20h]
  _BYTE v111[16]; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v112; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v113[24]; // [rsp+100h] [rbp+0h] BYREF
  int v114; // [rsp+118h] [rbp+18h]
  _BYTE v115[16]; // [rsp+120h] [rbp+20h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v116; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v117[512]; // [rsp+160h] [rbp+60h]
  __int128 v118; // [rsp+360h] [rbp+260h] BYREF

  v103 = a5;
  LODWORD(v11) = 0;
  v12 = a2;
  v110 = a8;
  v98 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v105 = a3;
  v106 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    WdLogSingleEntry1(3LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 11340;
    return result;
  }
  v112 = 0LL;
  v114 = 0;
  Elements = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements((__int64 *)&v112, v12);
  if ( !Elements )
  {
    CurrentProcess = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, v12, -1073741801LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11352;
LABEL_10:
    if ( v112 != v113 )
    {
      if ( v112 )
        ExFreePoolWithTag(v112, 0);
    }
    return 3221225495LL;
  }
  P = 0LL;
  v109 = 0;
  v104 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                    (__int64 *)&P,
                    v12);
  if ( !v104 )
  {
    v18 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v12, -1073741801LL, v18);
    WdLogGlobalForLineNumber = 11364;
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    goto LABEL_10;
  }
  LOBYTE(v8) = 1;
  v94 = v8;
  if ( *((_DWORD *)this + 476) > 0x10u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11373;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetNumVidPnSources() <= D3DKMDT_MAX_VIDPN_SOURCES",
      11373LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = 0;
  if ( *((_DWORD *)this + 476) )
  {
    while ( v19 < 0x10 )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3160LL),
                          v19);
      if ( !DisplayModeInfo )
      {
        WdLogSingleEntry2(2LL, this, v19);
        WdLogGlobalForLineNumber = 11382;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Context 0x%I64x: CheckMultiplaneOverlaySupport3 failed to obtain display mode, VidPnSourceId 0x%I64x",
          (__int64)this,
          v19,
          0LL,
          0LL,
          0LL);
        LOBYTE(v8) = 0;
        v94 = v8;
        break;
      }
      v21 = *(_DWORD *)DisplayModeInfo;
      v22 = 2LL * v19;
      v23 = *((_DWORD *)DisplayModeInfo + 1);
      ++v19;
      *(_QWORD *)&v117[8 * v22] = 0LL;
      *(_DWORD *)&v117[8 * v22 + 8] = v21;
      *(_DWORD *)&v117[8 * v22 + 12] = v23;
      *(_OWORD *)&v117[8 * v22 + 256] = *(_OWORD *)&v117[8 * v22];
      if ( v19 >= *((_DWORD *)this + 476) )
        break;
    }
  }
  v101 = -1;
  if ( a4 )
  {
    v24 = 0;
    v25 = v103;
    LOBYTE(v8) = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
               ? v8
               : 0;
    v94 = v8;
    v27 = 0LL;
    while ( 1 )
    {
      if ( (int)v11 < 0 )
        goto LABEL_46;
      v28 = *v25;
      if ( (*v25)->PostComposition.SrcRect.left >= (*v25)->PostComposition.SrcRect.right
        || v28->PostComposition.SrcRect.top >= v28->PostComposition.SrcRect.bottom
        || v28->PostComposition.DstRect.left >= v28->PostComposition.DstRect.right
        || v28->PostComposition.DstRect.top >= v28->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v28->PostComposition.Rotation;
      if ( Rotation )
      {
        v30 = Rotation - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 - 1 < 2 )
            {
              v94 = 0;
              v27 = 0LL;
            }
            else
            {
              WdLogSingleEntry2(3LL, v28->PostComposition.Rotation, v26);
              v26 = -1073741811LL;
              WdLogGlobalForLineNumber = 11426;
              LODWORD(v11) = -1073741811;
            }
          }
        }
      }
      if ( v28->PostComposition.Flags.Value )
        goto LABEL_44;
      VidPnSourceId = v28->VidPnSourceId;
      if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 476) )
      {
        WdLogSingleEntry2(3LL, VidPnSourceId, 0LL);
        WdLogGlobalForLineNumber = 11440;
        goto LABEL_44;
      }
      v33 = 2 * VidPnSourceId;
      if ( *(_DWORD *)&v117[8 * v33] > v28->PostComposition.DstRect.left
        || *(_DWORD *)&v117[8 * v33 + 8] < v28->PostComposition.DstRect.right
        || *(_DWORD *)&v117[8 * v33 + 4] > v28->PostComposition.DstRect.top
        || *(_DWORD *)&v117[8 * v33 + 12] < v28->PostComposition.DstRect.bottom )
      {
        WdLogSingleEntry2(3LL, this, v26);
        WdLogGlobalForLineNumber = 11448;
LABEL_44:
        v94 = 0;
        goto LABEL_45;
      }
      ++v24;
      ++v25;
      *(RECT *)&v117[8 * v33 + 256] = v28->PostComposition.SrcRect;
      if ( v24 >= v98 )
        goto LABEL_46;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11407;
    LODWORD(v11) = -1073741811;
  }
  else
  {
LABEL_45:
    v27 = 0LL;
  }
LABEL_46:
  v34 = 0;
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  for ( i = 0; v34 < a2; i = v34 )
  {
    if ( (int)v11 < 0 )
      break;
    v35 = *((_QWORD *)this + 5);
    v99 = v34;
    *(_QWORD *)&v118 = v105[v34];
    v36 = *(_DWORD *)(v118 + 4);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 248));
    v37 = (v36 >> 6) & 0xFFFFFF;
    if ( v37 < *(_DWORD *)(v35 + 296)
      && (v38 = *(_DWORD *)(*(_QWORD *)(v35 + 280) + 16LL * v37 + 8),
          ((v36 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v35 + 280) + 16LL * v37 + 8) & 0x60))
      && (v38 & 0x2000) == 0
      && (v38 & 0x1F) != 0 )
    {
      v39 = *(_QWORD *)(v35 + 280);
      if ( (*(_BYTE *)(v39 + 16LL * v37 + 8) & 0x1F) == 4 )
      {
        v40 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v37);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v40 = 0LL;
      }
    }
    else
    {
      v40 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v96, v40);
    _InterlockedDecrement((volatile signed __int32 *)(v35 + 264));
    ExReleasePushLockSharedEx(v35 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v96 )
      goto LABEL_168;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v115, (struct DXGFASTMUTEX *const)&v96[10], 0);
    v41 = IsEnabledDeviceUsageNoInline;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v115);
      v41 = IsEnabledDeviceUsageNoInline;
    }
    for ( j = (struct _EX_RUNDOWN_REF *)v96[3].Count; ; j = (struct _EX_RUNDOWN_REF *)j[8].Count )
    {
      if ( !j )
      {
        v44 = v99;
LABEL_67:
        v45 = (unsigned int *)v118;
        goto LABEL_68;
      }
      Count = (DXGDEVICE *)j[1].Count;
      if ( Count != this )
        break;
      if ( (*(_DWORD *)(j[6].Count + 4) & 0x200B) != 0 )
      {
        v44 = v99;
        v27 = j[6].Count;
        *(_QWORD *)(Elements + 8 * v99) = j;
        if ( v41 )
          DxgkReferenceDxgAllocation(j);
        goto LABEL_67;
      }
    }
    v45 = (unsigned int *)v118;
    WdLogSingleEntry4(3LL, *(unsigned int *)(v118 + 4), Count, this, -1073741811LL);
    v44 = v99;
    WdLogGlobalForLineNumber = 11485;
LABEL_68:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v115);
    if ( !v27 )
    {
LABEL_168:
      WdLogSingleEntry2(3LL, *(unsigned int *)(v118 + 4), -1073741811LL);
      WdLogGlobalForLineNumber = 11512;
      goto LABEL_167;
    }
    v46 = v104;
    v104[v44] = *(void **)(v27 + 16);
    v47 = v45[4];
    if ( (unsigned int)v47 >= *((_DWORD *)this + 476) )
    {
      WdLogSingleEntry2(3LL, v47, 0LL);
      WdLogGlobalForLineNumber = 11522;
LABEL_167:
      LODWORD(v27) = 0;
      v70 = 0;
      LOBYTE(v94) = 0;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96);
      goto LABEL_136;
    }
    if ( (_DWORD)v47 != ((*(_DWORD *)(v27 + 4) >> 6) & 0xF)
      && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      WdLogSingleEntry3(3LL, v48, (v49 >> 6) & 0xF, 0LL);
      WdLogGlobalForLineNumber = 11533;
      goto LABEL_167;
    }
    v50 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v51 = *((_QWORD *)v50 + 2);
    if ( *v45 >= *(_DWORD *)(v51 + 2984) )
    {
      WdLogSingleEntry3(3LL, *v45, *(unsigned int *)(v51 + 2984), 0LL);
      WdLogGlobalForLineNumber = 11544;
      goto LABEL_167;
    }
    if ( a6 && !*((_DWORD *)this + 477) )
    {
      LODWORD(v11) = -1073741790;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11555;
LABEL_159:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96);
      LODWORD(v27) = 0;
      break;
    }
    v52 = (_DWORD *)*((_QWORD *)v45 + 3);
    if ( v52[1] >= v52[3]
      || v52[2] >= v52[4]
      || v52[5] >= v52[7]
      || v52[6] >= v52[8]
      || v52[9] >= v52[11]
      || v52[10] >= v52[12] )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11566;
      LODWORD(v11) = -1073741811;
      goto LABEL_159;
    }
    v53 = i;
    memset(&v116, 0, sizeof(v116));
    v116.hAllocation = v46[i];
    v54 = ADAPTER_RENDER::DdiDescribeAllocation(v50, &v116);
    v11 = v54;
    if ( v54 < 0 )
    {
      v85 = v104;
      WdLogSingleEntry4(2LL, v54, this, v104[v53], v27);
      v86 = (__int64)v85[v53];
      WdLogGlobalForLineNumber = 11580;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        v11,
        (__int64)this,
        v86,
        v27,
        0LL);
      goto LABEL_159;
    }
    v55 = (int *)*((_QWORD *)v45 + 3);
    v27 = 0LL;
    if ( v55[1] < 0 || (int)v116.Width < v55[3] || v55[2] < 0 || (int)v116.Height < v55[4] )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, this, v53);
      v84 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
      WdLogGlobalForLineNumber = 11592;
LABEL_161:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v84, -1073741811LL, (__int64)this, v53, 0LL, 0LL);
      LODWORD(v11) = -1073741811;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96);
      break;
    }
    if ( *(_DWORD *)&v117[16 * v45[4] + 256] <= v55[9]
      && *(_DWORD *)&v117[16 * v45[4] + 264] >= v55[11]
      && *(_DWORD *)&v117[16 * v45[4] + 260] <= v55[10]
      && *(_DWORD *)&v117[16 * v45[4] + 268] >= v55[12] )
    {
      LODWORD(v44) = v94;
    }
    else
    {
      WdLogSingleEntry3(3LL, 0LL, this, v53);
      LOBYTE(v44) = 0;
      WdLogGlobalForLineNumber = 11608;
      v94 = v44;
    }
    v56 = (_DWORD *)*((_QWORD *)v45 + 3);
    if ( v56[5] > v56[9] || v56[7] < v56[11] || v56[6] > v56[10] || v56[8] < v56[12] )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, this, v53);
      v84 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
      WdLogGlobalForLineNumber = 11615;
      goto LABEL_161;
    }
    v57 = (int)v56[13];
    if ( (unsigned int)v57 >= 2 )
    {
      if ( (_DWORD)v57 == 2 || (unsigned int)(v57 - 3) < 2 )
      {
        LODWORD(v44) = (unsigned __int8)v44;
        if ( (**(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3048LL) & 0x20) != 0 )
          LODWORD(v44) = 0;
        v94 = v44;
      }
      else
      {
        WdLogSingleEntry2(3LL, v57, -1073741811LL);
        WdLogGlobalForLineNumber = 11637;
        LODWORD(v11) = -1073741811;
      }
    }
    if ( *(_DWORD *)(*((_QWORD *)v45 + 3) + 76LL) != 1 && *(_DWORD *)(*((_QWORD *)v45 + 3) + 76LL) != 2 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11648;
      LODWORD(v11) = -1073741811;
    }
    v58 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
    if ( !*((_QWORD *)v58 + 124) && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(v58) )
    {
      v59 = *(_DWORD *)(*((_QWORD *)v45 + 3) + 72LL);
      if ( v59 > 12 )
      {
        v62 = v59 - 13;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( v63 )
          {
            v64 = v63 - 1;
            if ( v64 )
            {
              v65 = v64 - 1;
              if ( v65 )
              {
                v66 = v65 - 1;
                if ( v66 )
                {
                  if ( (unsigned int)(v66 - 1) > 1 )
                    goto LABEL_122;
                }
              }
            }
          }
        }
      }
      else
      {
        v60 = v59 + 1;
        if ( v60 > 0xD )
          goto LABEL_122;
        v61 = 14429;
        if ( !_bittest(&v61, v60) )
          goto LABEL_122;
      }
      LOBYTE(v44) = 0;
      v94 = v44;
    }
LABEL_122:
    v67 = *(_DWORD *)(*((_QWORD *)v45 + 3) + 80LL);
    if ( v67 )
    {
      if ( v67 != 80 )
      {
        v68 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        if ( (*(_DWORD *)(v68 + 444) & 0x200) == 0 )
        {
          LODWORD(v44) = (unsigned __int8)v44;
          if ( *(int *)(v68 + 2776) < 8960 )
            LODWORD(v44) = 0;
          v94 = v44;
        }
      }
    }
    if ( !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
    {
      if ( v101 == -1 )
      {
        v101 = v45[4];
      }
      else
      {
        v69 = v44;
        if ( v101 != v45[4] )
          v69 = 0;
        LOBYTE(v27) = v69;
        v94 = v27;
        v27 = 0LL;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96);
    v34 = v53 + 1;
  }
  v70 = v94;
LABEL_136:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v111,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 237) + 3160LL) + 624LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
  if ( (int)v11 >= 0 && v70 )
  {
    v71 = 0;
    i = 0;
    v72 = 0;
    v118 = 0LL;
    if ( v98 )
    {
      v73 = v103;
      v27 = v98;
      do
      {
        v74 = *v73;
        v75 = (*v73)->VidPnSourceId;
        v76 = *(_QWORD *)(*((_QWORD *)this + 237) + 3160LL);
        v77 = (DISPLAY_SOURCE *)(*(_QWORD *)(v76 + 128) + 4024 * v75);
        if ( !*((_BYTE *)&v118 + v75) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v76 + 128) + 4024 * v75));
          v71 = v74->VidPnSourceId;
          *((_BYTE *)&v118 + v74->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v77,
          &v74->PostComposition.SrcRect,
          &v74->PostComposition.DstRect);
        ++v73;
        --v27;
      }
      while ( v27 );
      v72 = 0;
    }
    if ( a2 )
    {
      v78 = (const struct DXGALLOCATION **)Elements;
      v79 = (char *)v105 - Elements;
      v99 = a2;
      do
      {
        v80 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)&v79[(_QWORD)v78];
        if ( !v72 && !a6 && (v80->pPlaneAttributes->Flags & 4) != 0 )
        {
          v72 = 1;
          i = v80->LayerIndex;
        }
        v81 = v80->VidPnSourceId;
        v82 = *(_QWORD *)(*((_QWORD *)this + 237) + 3160LL);
        v83 = (DISPLAY_SOURCE *)(*(_QWORD *)(v82 + 128) + 4024 * v81);
        if ( !*((_BYTE *)&v118 + v81) )
        {
          if ( !v72 )
            DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v82 + 128) + 4024 * v81));
          v71 = v80->VidPnSourceId;
          *((_BYTE *)&v118 + v71) = 1;
        }
        if ( v72 || !DXGDEVICE::UseCachedIndependentFlipParameters(this, v83, v80) )
        {
          pPlaneAttributes = v80->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v83,
            v80->LayerIndex,
            *v78,
            pPlaneAttributes->Flags,
            &pPlaneAttributes->SrcRect,
            &pPlaneAttributes->DstRect,
            &pPlaneAttributes->ClipRect,
            pPlaneAttributes->Rotation,
            pPlaneAttributes->Blend,
            pPlaneAttributes->ColorSpace,
            pPlaneAttributes->SDRWhiteLevel);
        }
        else
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v83, v80->LayerIndex);
        }
        ++v78;
        --v99;
      }
      while ( v99 );
      LODWORD(v27) = 0;
    }
    v88 = v106;
    LODWORD(v11) = CheckMultiPlaneOverlayInternal3(
                     v71,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3160LL),
                     v106,
                     v110);
    if ( v72 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(
        (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 237) + 3160LL) + 128LL) + 4024LL * v71),
        i);
    }
    else if ( *v88 == (_DWORD)v27 )
    {
      v89 = v27;
      v90 = &v118;
      do
      {
        if ( *(_BYTE *)v90 != (_BYTE)v27 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 237)
                                                                                            + 3160LL)
                                                                                + 128LL)
                                                                    + 4024LL * v89));
        ++v89;
        v90 = (__int128 *)((char *)v90 + 1);
      }
      while ( v89 < 0x10 );
    }
  }
  if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
  {
    v91 = a2;
    if ( !a2 )
      goto LABEL_186;
    v92 = (struct _EX_RUNDOWN_REF **)Elements;
    v93 = a2;
    do
    {
      if ( *v92 )
        ExReleaseRundownProtection(*v92 + 11);
      ++v92;
      --v93;
    }
    while ( v93 );
  }
  v91 = a2;
LABEL_186:
  if ( (int)v11 < 0 || !(_BYTE)v94 )
    LogCheckMutiplaneOverlaySupport(
      (unsigned int)v11,
      (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(unsigned int)*v106,
      v91,
      v105,
      v104,
      v98,
      v103,
      *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111);
  if ( P != v108 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v109 = 0;
  if ( v112 != v113 && v112 )
    ExFreePoolWithTag(v112, 0);
  return (unsigned int)v11;
}

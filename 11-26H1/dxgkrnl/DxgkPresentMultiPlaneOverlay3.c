/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x14000C074 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140030B80 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x140041D08 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x140045444 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402CB1B0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1402ED798 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x140386534 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *Src)
{
  __int64 v2; // rcx
  int v3; // r12d
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // r13
  unsigned int v14; // ebx
  _QWORD *Pool2; // rcx
  unsigned int i; // r15d
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  const struct DXGDEVICE *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // esi
  __int64 v27; // r9
  int v28; // r8d
  __int64 v29; // rcx
  PVOID v30; // rcx
  struct DXGPROCESS *v31; // rax
  unsigned int v32; // r15d
  struct tagRECT **v33; // r14
  void **v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  DXGADAPTER *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  bool v46; // zf
  __int64 v47; // rax
  const wchar_t *v48; // r9
  unsigned int v49; // edx
  struct _KTHREAD **v50; // r8
  int v51; // r8d
  bool v52; // al
  __int64 v53; // rcx
  struct _KTHREAD *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // ebx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 CurrentProcess; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  struct tagRECT ***v74; // [rsp+28h] [rbp-2F0h]
  struct tagRECT ***v75; // [rsp+28h] [rbp-2F0h]
  int v76; // [rsp+60h] [rbp-2B8h] BYREF
  int v77; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-2A8h]
  _DWORD *v79; // [rsp+78h] [rbp-2A0h]
  int *v80; // [rsp+80h] [rbp-298h]
  __int128 v81; // [rsp+90h] [rbp-288h] BYREF
  struct _KTHREAD **v82; // [rsp+A0h] [rbp-278h]
  PVOID P; // [rsp+A8h] [rbp-270h]
  _BYTE v84[32]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned int v85; // [rsp+D0h] [rbp-248h]
  enum _D3DDDI_HDR_METADATA_TYPE v86; // [rsp+D8h] [rbp-240h] BYREF
  unsigned int v87; // [rsp+DCh] [rbp-23Ch] BYREF
  _BYTE v88[16]; // [rsp+E0h] [rbp-238h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v89[2]; // [rsp+F0h] [rbp-228h] BYREF
  struct tagRECT **v90[2]; // [rsp+100h] [rbp-218h] BYREF
  unsigned int *v91[2]; // [rsp+110h] [rbp-208h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v92[2]; // [rsp+120h] [rbp-1F8h] BYREF
  unsigned int v93; // [rsp+130h] [rbp-1E8h]
  _BYTE v94[80]; // [rsp+140h] [rbp-1D8h] BYREF
  _QWORD v95[2]; // [rsp+190h] [rbp-188h] BYREF
  char v96; // [rsp+1A0h] [rbp-178h]
  unsigned int ULongFromUser; // [rsp+1A8h] [rbp-170h]
  _QWORD v98[6]; // [rsp+1B0h] [rbp-168h] BYREF
  char v99; // [rsp+1E0h] [rbp-138h]
  _DWORD v100[20]; // [rsp+1F0h] [rbp-128h] BYREF
  char v101[8]; // [rsp+240h] [rbp-D8h] BYREF
  _BYTE v102[16]; // [rsp+248h] [rbp-D0h] BYREF
  DXGADAPTER *v103; // [rsp+258h] [rbp-C0h]
  char v104; // [rsp+260h] [rbp-B8h]
  __int64 v105; // [rsp+268h] [rbp-B0h]
  _BYTE v106[16]; // [rsp+288h] [rbp-90h] BYREF
  DXGADAPTER *v107; // [rsp+298h] [rbp-80h]
  char v108; // [rsp+2A0h] [rbp-78h]
  __int64 v109; // [rsp+2A8h] [rbp-70h]
  __int64 v110; // [rsp+2C8h] [rbp-50h]
  char v111; // [rsp+2D0h] [rbp-48h]

  v76 = -1073741811;
  memset(v94, 0, sizeof(v94));
  v3 = 0;
  v78 = 0LL;
  v77 = 2164;
  v79 = v94;
  v80 = &v76;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v77, 2164);
  memset(v100, 0, sizeof(v100));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v82 = Current;
  if ( !Src )
  {
    v76 = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, v76, CurrentProcess);
    WdLogGlobalForLineNumber = 2764;
    v71 = PsGetCurrentProcess(v70);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v76,
      v71,
      0LL,
      0LL,
      0LL);
    v42 = v76;
    goto LABEL_72;
  }
  RtlCopyFromUser(v100, Src, 0x50uLL);
  ULongFromUser = RtlReadULongFromUser(&Src->PresentPlaneCount);
  *(_OWORD *)v89 = 0LL;
  *(_OWORD *)v90 = 0LL;
  *(_OWORD *)v91 = 0LL;
  *(_OWORD *)v92 = 0LL;
  v93 = ULongFromUser;
  v76 = CapturePresentMultiPlaneOverlayArgs3(
          Src,
          (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v94,
          v89,
          (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v89[1],
          (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v90,
          &v90[1],
          v91,
          &v91[1],
          (unsigned __int8 **)v92,
          &v92[1]);
  if ( v76 < 0 )
  {
    v72 = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, v76, v72);
    WdLogGlobalForLineNumber = 2856;
    v75 = (struct tagRECT ***)PsGetCurrentProcess(v73);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x",
      v76,
      (__int64)v75,
      0LL,
      0LL,
      0LL);
    goto LABEL_70;
  }
  v8 = *(_DWORD *)&v94[28];
  if ( !*(_DWORD *)&v94[28] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2860;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.PresentPlaneCount > 0", 2860LL, 0LL, 0LL, 0LL, 0LL);
    v8 = *(_DWORD *)&v94[28];
  }
  if ( v8 > 0xA )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2861;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.PresentPlaneCount <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      2861LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(_DWORD *)&v94[4];
  if ( !*(_DWORD *)&v94[4] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2862;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.ContextCount > 0", 2862LL, 0LL, 0LL, 0LL, 0LL);
    v9 = *(_DWORD *)&v94[4];
  }
  if ( v9 > 0x40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2863;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.ContextCount <= D3DDDI_MAX_BROADCAST_CONTEXT",
      2863LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)&v94[16] >= 0x10u )
  {
    v76 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v94[16], -1073741811LL);
    WdLogGlobalForLineNumber = 2871;
    v47 = *(unsigned int *)&v94[16];
    v48 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
LABEL_92:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v48, v47, v76, 0LL, 0LL, 0LL);
    goto LABEL_70;
  }
  if ( *(_DWORD *)&v94[52]
    || *(_QWORD *)&v94[64]
    || (v87 = 0,
        v86 = D3DDDI_HDR_METADATA_TYPE_NONE,
        *(_QWORD *)&v81 = 0LL,
        (unsigned int)AllocateAndPopulateHDRMetadataFromDisplay(
                        (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v94,
                        (unsigned __int8 **)&v81,
                        &v86,
                        &v87)) )
  {
    v10 = *(_DWORD *)&v94[56];
  }
  else
  {
    *(_QWORD *)&v94[64] = v81;
    *(_DWORD *)&v94[52] = v86;
    v10 = v87;
    *(_DWORD *)&v94[56] = v87;
    *(_DWORD *)&v94[24] |= 0x80u;
  }
  if ( *(_DWORD *)&v94[52] )
  {
    if ( *(_DWORD *)&v94[52] == 1 )
    {
      if ( !v10 || v10 == 28 )
      {
        if ( *(_QWORD *)&v94[64] )
        {
          if ( v10 )
            goto LABEL_20;
        }
        else if ( !v10 )
        {
          goto LABEL_20;
        }
        v76 = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 2921;
      }
      else
      {
        v76 = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 2911;
      }
      v47 = *(unsigned int *)&v94[56];
      v48 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10, returning 0x%I64x";
    }
    else if ( *(_DWORD *)&v94[52] == 2 )
    {
      if ( !v10 || v10 == 72 )
      {
        if ( *(_QWORD *)&v94[64] )
        {
          if ( v10 )
            goto LABEL_20;
        }
        else if ( !v10 )
        {
          goto LABEL_20;
        }
        v76 = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 2943;
      }
      else
      {
        v76 = -1073741811;
        WdLogSingleEntry2(2LL, v10, -1073741811LL);
        WdLogGlobalForLineNumber = 2933;
      }
      v47 = *(unsigned int *)&v94[56];
      v48 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10PLUS, returning 0x%I64x";
    }
    else
    {
      v76 = -1073741811;
      WdLogSingleEntry2(2LL, *(int *)&v94[52], -1073741811LL);
      WdLogGlobalForLineNumber = 2952;
      v47 = *(int *)&v94[52];
      v48 = L"Invalid HDR metadata type 0x%I64x specified, returning 0x%I64x";
    }
    goto LABEL_92;
  }
  if ( v10 || *(_QWORD *)&v94[64] )
  {
    v76 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2899;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-NULL HDR metadata specified with D3DDDI_HDR_METADATA_TYPE_NONE, returning 0x%I64x",
      v76,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_70:
    v42 = v76;
LABEL_71:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v89);
LABEL_72:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v46 = (qword_1401664C0 & 2) == 0;
    goto LABEL_73;
  }
LABEL_20:
  *(_QWORD *)&v81 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v88,
    **(_DWORD **)&v94[8],
    Current,
    (struct DXGCONTEXT **)&v81,
    0,
    1);
  v12 = (__int64 *)v81;
  if ( !(_QWORD)v81 )
  {
    v76 = -1073741811;
    v66 = **(_DWORD **)&v94[8];
    v67 = PsGetCurrentProcess(v11);
    WdLogSingleEntry3(3LL, v76, v67, v66);
    WdLogGlobalForLineNumber = 2965;
    v42 = v76;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    goto LABEL_71;
  }
  v13 = *(_QWORD *)(v81 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 3016LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2971;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      (unsigned int)**(_DWORD **)&v94[8],
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_117:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v89);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    if ( (qword_1401664C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v57,
          v59,
          0,
          v79[4],
          v79[5],
          1,
          v79[6],
          v79[7],
          v79[12],
          *v80);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v81 + 392) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2977;
    goto LABEL_117;
  }
  *(_QWORD *)&v81 = *(_QWORD *)(v81 + 16);
  DWORD2(v81) = 0;
  if ( v13 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v81);
    v3 = DWORD2(v81);
    v13 = v81;
  }
  v14 = *(_DWORD *)&v94[4];
  Pool2 = 0LL;
  P = 0LL;
  v85 = 0;
  if ( *(_DWORD *)&v94[4] > 4u )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned int *)&v94[4] < 8 )
      goto LABEL_29;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * *(unsigned int *)&v94[4], 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v84;
    P = v84;
    if ( *(_DWORD *)&v94[4] )
    {
      memset(v84, 0, 8LL * *(unsigned int *)&v94[4]);
      Pool2 = P;
    }
  }
  v85 = v14;
LABEL_29:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2987;
LABEL_122:
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v85 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v81);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v89);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    if ( (qword_1401664C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v60,
          v62,
          0,
          v79[4],
          v79[5],
          1,
          v79[6],
          v79[7],
          v79[12],
          *v80);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v61, (__int64)&EventProfilerExit);
    }
    return 3221225495LL;
  }
  *Pool2 = v12;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v95, Current);
  for ( i = 1; i < *(_DWORD *)&v94[4]; ++i )
  {
    v49 = (*(_DWORD *)(*(_QWORD *)&v94[8] + 4LL * i) >> 6) & 0xFFFFFF;
    v50 = v82;
    if ( v49 >= *((_DWORD *)v82 + 74) )
    {
      v52 = 0;
    }
    else
    {
      v51 = *((_DWORD *)v82[35] + 4 * v49 + 2);
      v52 = ((*(_DWORD *)(*(_QWORD *)&v94[8] + 4LL * i) >> 25) & 0x60) == (v51 & 0x60)
         && (v51 & 0x2000) == 0
         && (v51 & 0x1F) != 0;
      v50 = v82;
    }
    if ( !v52 )
      goto LABEL_156;
    v53 = 2LL * v49;
    v54 = v50[35];
    if ( (*((_BYTE *)v54 + 8 * v53 + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_156:
      v55 = 0LL;
      goto LABEL_113;
    }
    v55 = *((_QWORD *)v54 + v53);
LABEL_113:
    *((_QWORD *)P + i) = v55;
    v56 = *((_QWORD *)P + i);
    if ( !v56 || (*(_DWORD *)(v56 + 392) & 8) != 0 || *(_QWORD *)(v56 + 16) != v12[2] )
    {
      WdLogSingleEntry4(2LL, v12, *(unsigned int *)(*(_QWORD *)&v94[8] + 4LL * i), i, -1073741811LL);
      WdLogGlobalForLineNumber = 3023;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v12,
        *(unsigned int *)(*(_QWORD *)&v94[8] + 4LL * i),
        i,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v95);
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v85 = 0;
      goto LABEL_116;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v95);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v98,
    P,
    v85,
    v17,
    1);
  if ( v99 )
  {
    if ( v98[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3043;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v98);
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v85 = 0;
LABEL_116:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v81);
      goto LABEL_117;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3038;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v98);
    goto LABEL_122;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v12[2] + 16) + 16LL);
  v95[1] = v18;
  _InterlockedAdd64((volatile signed __int64 *)(v18 + 24), 1uLL);
  v95[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v18 + 136, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v18 + 152), 1u);
  v96 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v101, v12[2], 1, v19, 0);
  if ( v111 )
  {
    if ( v108 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v106, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v40 = v107;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v107 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v107 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (__int64)"g");
        KeWaitForSingleObject((char *)v107 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v107, 0LL);
      v40 = v107;
    }
    v109 = 0LL;
    v108 = 1;
    if ( *((_DWORD *)v40 + 50) != 1 )
    {
LABEL_67:
      COREACCESS::Release((COREACCESS *)v106);
      goto LABEL_68;
    }
  }
  if ( v104 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v102, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v103 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)"g");
      KeWaitForSingleObject((char *)v103 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v103, 0LL);
  }
  v105 = 0LL;
  v104 = 1;
  v21 = *(unsigned int *)(v110 + 608);
  if ( (_DWORD)v21 == 1 )
  {
    v22 = 0;
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v102);
    if ( v111 )
      goto LABEL_67;
LABEL_68:
    v22 = -1073741130;
  }
  v76 = v22;
  if ( v22 < 0 )
  {
    v68 = PsGetCurrentProcess(v21);
    WdLogSingleEntry2(3LL, v76, v68);
    WdLogGlobalForLineNumber = 3062;
    goto LABEL_127;
  }
  v23 = (const struct DXGDEVICE *)v12[2];
  v24 = *((_QWORD *)v23 + 237);
  if ( !v24 )
  {
    v76 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3070;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
      v76,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_127;
  }
  if ( ((_DWORD)v82[51] & 4) != 0
    || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v24 + 3160), v23, *(unsigned int *)&v94[16]) )
  {
    v76 = DXGCONTEXT::PresentMultiPlaneOverlay3(
            (DXGCONTEXT *)v12,
            (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v94,
            (struct COREDEVICEACCESS *)v101,
            (struct DXGCONTEXT **)P);
    if ( v76 == -1071775482 )
      DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v12[2], (struct COREDEVICEACCESS *)v101);
    v25 = MEMORY[0xFFFFF78000000320];
    v26 = v76;
    v27 = v25 * KeQueryTimeIncrement();
    v28 = (v100[6] >> 9) & 2 | (*((_DWORD *)v82 + 102) >> 2) & 1;
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12[2] + 1896) + 3160LL) + 128LL) + 4024LL * v100[4];
    if ( v29 )
    {
      *(_QWORD *)&v81 = v27;
      *((_QWORD *)&v81 + 1) = __PAIR64__(v28, v26);
      DISPLAY_SOURCE::RecordPresentDiagHistory(v29, &v81);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 152));
    ExReleasePushLockSharedEx(v18 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v98);
    v30 = P;
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v85 = 0;
    if ( v13 && v3 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 136));
      KeLeaveCriticalRegion();
    }
    v31 = DXGPROCESS::GetCurrent((__int64)v30);
    DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v31 + 8) + 104LL));
    v32 = v76;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v89[0]);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v89[1]);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v90[0]);
    v33 = v90[1];
    if ( v90[1] && v93 )
    {
      v34 = (void **)v90[1];
      v35 = v93;
      do
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v34++);
        --v35;
      }
      while ( v35 );
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v91[0]);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v91[1]);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v92[0]);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v92[1]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    if ( (qword_1401664C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v36,
          v38,
          0,
          v79[4],
          v79[5],
          1,
          v79[6],
          v79[7],
          v79[12],
          *v80);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
    }
    return v32;
  }
  else
  {
    v76 = -1073741790;
    v64 = PsGetCurrentProcess(v63);
    WdLogSingleEntry2(2LL, v76, v64);
    WdLogGlobalForLineNumber = 3085;
    v74 = (struct tagRECT ***)PsGetCurrentProcess(v65);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
      v76,
      (__int64)v74,
      0LL,
      0LL,
      0LL);
LABEL_127:
    v42 = v76;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v98);
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v85 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v81);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v88);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v89);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v46 = (qword_1401664C0 & 2) == 0;
LABEL_73:
    if ( !v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v43,
          v45,
          0,
          v79[4],
          v79[5],
          1,
          v79[6],
          v79[7],
          v79[12],
          *v80);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit);
    }
    return v42;
  }
}

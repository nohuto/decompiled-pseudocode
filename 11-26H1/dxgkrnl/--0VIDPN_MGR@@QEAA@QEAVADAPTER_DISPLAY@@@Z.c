/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x14018E508 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14006B3D8 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x14007B964 (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400956F0 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400957C4 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DA4C (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DE0C (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025DF30 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x14025E1A4 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x14026F918 (-MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DM.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x140390E8C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x140391650 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x14040BCEC (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  VIDPN_MGR *v2; // rsi
  __int64 v3; // r14
  __int64 *v4; // r15
  __int64 *v5; // rdi
  DMMVIDEOPRESENTSOURCESET *v7; // rax
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rax
  int Configuration; // ebx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct DXGADAPTER *ContainingAdapter; // rax
  NTSTATUS v15; // r12d
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r8
  __int64 v19; // rcx
  const struct DMMVIDEOPRESENTTARGET *v20; // r8
  int v21; // eax
  struct DXGADAPTER *v22; // rax
  struct DXGADAPTER *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r15
  struct DXGADAPTER *v27; // rax
  int v28; // eax
  __int64 v29; // r15
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r15
  unsigned int v32; // r12d
  __int64 v33; // rsi
  __int64 v34; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct DMMVIDEOPRESENTTARGET *v38; // r13
  __int64 v39; // rax
  const struct DMMVIDEOPRESENTTARGET *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r15
  unsigned int v46; // r12d
  __int64 v47; // rsi
  __int64 v48; // rdi
  struct DMMVIDEOPRESENTTARGET *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct DMMVIDEOPRESENTTARGET *v52; // r13
  struct DXGADAPTER *v53; // rax
  HANDLE v54; // rcx
  __int64 v55; // rax
  struct DXGADAPTER *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  struct DXGADAPTER *v63; // rax
  struct DXGADAPTER *v64; // rax
  __int64 v65; // rdi
  int (__high *v66)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  void *v67; // r8
  __int64 v68; // rax
  struct _UNICODE_STRING InputBuffer; // [rsp+48h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v72[2]; // [rsp+60h] [rbp-41h] BYREF
  void **v73; // [rsp+68h] [rbp-39h] BYREF
  __int128 v74; // [rsp+70h] [rbp-31h]
  void **v75; // [rsp+80h] [rbp-21h]
  __int64 v76; // [rsp+88h] [rbp-19h]
  unsigned __int64 v77; // [rsp+90h] [rbp-11h]
  __int64 v78; // [rsp+98h] [rbp-9h]
  __int128 v79; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v80; // [rsp+B0h] [rbp+Fh]
  __int128 v81; // [rsp+C0h] [rbp+1Fh]

  v2 = this;
  *(_QWORD *)v72 = this;
  v3 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  v4 = (__int64 *)((char *)this + 112);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = &Lockable::`vftable';
  v5 = (__int64 *)((char *)this + 120);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 17;
  *((_DWORD *)this + 20) = 40;
  *((_DWORD *)this + 8) = 2;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 18) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_DWORD *)this + 46) = 2;
  *((_QWORD *)this + 24) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 25) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::`vftable';
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 60) = 2;
  *((_QWORD *)this + 31) = 30LL;
  *((_QWORD *)this + 32) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 76) = 2;
  *((_QWORD *)this + 39) = 5LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  *((_QWORD *)this + 42) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_DWORD *)this + 94) = 2;
  *((_QWORD *)this + 48) = 40LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 137) = -1;
  *((_DWORD *)this + 138) = -1;
  *((_QWORD *)this + 70) = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 166;
  }
  *((_DWORD *)v2 + 26) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v2 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)v2 + 1) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, *((_QWORD *)v2 + 1));
    WdLogGlobalForLineNumber = 79;
  }
  if ( *((_DWORD *)v2 + 8) != 2 )
  {
    WdLogSingleEntry1(2LL);
    *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 6);
    WdLogGlobalForLineNumber = 178;
    return v2;
  }
  v7 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v7 )
    v8 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v7, v2);
  else
    v8 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v4, (__int64)v8);
  if ( !*v4 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 192;
LABEL_15:
    *((_DWORD *)v2 + 24) = -1073741801;
    return v2;
  }
  v9 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, 256LL);
  if ( v9 )
    v10 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v9, v2);
  else
    v10 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v5, (__int64)v10);
  if ( !*v5 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 205;
    goto LABEL_15;
  }
  Configuration = VIDPN_MGR::_ReadConfiguration(v2);
  if ( Configuration < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 219;
LABEL_23:
    *((_DWORD *)v2 + 24) = Configuration;
    return v2;
  }
  Configuration = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v2);
  if ( Configuration < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 234;
    goto LABEL_23;
  }
  Configuration = VIDPN_MGR::_InitializeVidPnMiniportInterfaces((void **)v2);
  if ( Configuration < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 249;
    goto LABEL_23;
  }
  _InterlockedAdd((volatile signed __int32 *)(*v4 + 72), 1u);
  v12 = *v4;
  v13 = -(__int64)(*v4 != -112);
  InputBuffer.Buffer = (wchar_t *)*((_QWORD *)v2 + 49);
  *(_QWORD *)&InputBuffer.Length = v12 & v13;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v2);
  v15 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)ContainingAdapter + 27), 0x23204Fu, &InputBuffer, 0x10u, 0LL, 0);
  if ( v15 < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 286;
LABEL_30:
    *((_DWORD *)v2 + 24) = v15;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(v12 + 40) )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 298;
    *((_DWORD *)v2 + 24) = -1071774936;
    goto LABEL_32;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(*v5 + 72));
  v12 = *v5;
  v16 = -(__int64)(*v5 != -112);
  InputBuffer.Buffer = (wchar_t *)*((_QWORD *)v2 + 50);
  *(_QWORD *)&InputBuffer.Length = v12 & v16;
  v17 = VIDPN_MGR::GetContainingAdapter(v2);
  v15 = DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)v17 + 27), 0x232053u, &InputBuffer, 0x10u, 0LL, 0);
  if ( v15 < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 332;
    goto LABEL_30;
  }
  if ( !*(_QWORD *)(v12 + 40) )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 344;
    *((_DWORD *)v2 + 24) = -1071774935;
    goto LABEL_32;
  }
  NextTarget = 0LL;
  v19 = *(_QWORD *)(v12 + 24);
  if ( v19 != v12 + 24 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v19 - 8);
  if ( NextTarget )
  {
    while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, v20);
      if ( !NextTarget )
        goto LABEL_44;
    }
    v21 = *((_DWORD *)v20 + 6);
  }
  else
  {
LABEL_44:
    v21 = -1;
  }
  *((_DWORD *)v2 + 138) = v21;
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
  if ( *(_QWORD *)(*v5 + 40) < *(_QWORD *)(*v4 + 40) )
  {
    v22 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*v5 + 40), *(_QWORD *)(*v4 + 40), v22);
    WdLogGlobalForLineNumber = 387;
    *((_DWORD *)v2 + 24) = -1071774938;
    return v2;
  }
  Handle = 0LL;
  v23 = VIDPN_MGR::GetContainingAdapter(v2);
  v24 = DpiOpenPnpRegistryKey(*((_QWORD *)v23 + 27), 1u, 0x20019u, &Handle);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v27, v26);
    WdLogGlobalForLineNumber = 412;
    *((_DWORD *)v2 + 24) = v26;
    return v2;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*v5 + 72));
  v12 = *v5;
  LODWORD(v81) = *(_DWORD *)L"st";
  WORD2(v81) = aTargetpriority[18];
  InputBuffer.Buffer = (wchar_t *)&v79;
  v73 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v79 = *(_OWORD *)L"TargetPriorityList";
  v75 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  *(_QWORD *)&InputBuffer.Length = 2490404LL;
  v80 = *(_OWORD *)L"iorityList";
  v76 = 0LL;
  v74 = 0LL;
  v77 = 0LL;
  v78 = 256LL;
  v28 = VIDPN_MGR::_ReadTargetPriorityList(v25, Handle, &InputBuffer, &v73);
  v29 = v28;
  if ( v28 < 0 )
  {
    if ( v28 != -1073741275 )
    {
      v53 = VIDPN_MGR::GetContainingAdapter(v2);
      WdLogSingleEntry2(2LL, v53, v29);
      WdLogGlobalForLineNumber = 484;
      goto LABEL_77;
    }
  }
  else
  {
    v30 = v77;
    if ( !v77 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 435;
    }
    v31 = v30 >> 2;
    v32 = 0;
    if ( v31 )
    {
      v33 = v76;
      v34 = 0LL;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v12,
                       *(_DWORD *)(v33 + 4 * v34));
        v38 = TargetById;
        if ( TargetById )
        {
          if ( *((_DWORD *)TargetById + 31) == -1 )
          {
            *((_DWORD *)TargetById + 31) = v32;
            v39 = WdLogNewEntry5_WdTrace(v37, v36);
            *(_QWORD *)(v39 + 24) = v34;
            *(_QWORD *)(v39 + 32) = *((unsigned int *)v38 + 6);
            WdLogGlobalForLineNumber = 465;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 455;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, *(unsigned int *)(v33 + 4 * v34), v34);
          WdLogGlobalForLineNumber = 446;
        }
        v34 = ++v32;
      }
      while ( v32 < v31 );
      v2 = *(VIDPN_MGR **)v72;
    }
    v40 = 0LL;
    v41 = *(_QWORD *)(v12 + 24);
    if ( v41 != v12 + 24 )
      v40 = (const struct DMMVIDEOPRESENTTARGET *)(v41 - 8);
    for ( ; v40; v40 = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, v40) )
    {
      if ( *((_DWORD *)v40 + 31) == -1 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 476;
      }
    }
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
  InputBuffer.Buffer = (wchar_t *)&v79;
  v79 = *(_OWORD *)L"TargetForcePriorityList";
  v73 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  *(_QWORD *)&InputBuffer.Length = 3145774LL;
  v75 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v81 = *(_OWORD *)L"ityList";
  v76 = 0LL;
  v77 = 0LL;
  v74 = 0LL;
  v78 = 256LL;
  v80 = *(_OWORD *)L"rcePriorityList";
  v43 = VIDPN_MGR::_ReadTargetPriorityList(v42, Handle, &InputBuffer, &v73);
  v29 = v43;
  if ( v43 < 0 )
  {
    if ( v43 == -1073741275 )
      goto LABEL_83;
    v63 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v63, v29);
    WdLogGlobalForLineNumber = 546;
LABEL_77:
    v54 = Handle;
    *((_DWORD *)v2 + 24) = v29;
    ZwClose(v54);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
LABEL_31:
    if ( !v12 )
      return v2;
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    return v2;
  }
  v44 = v77;
  if ( !v77 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
  }
  v45 = v44 >> 2;
  v46 = 0;
  if ( v45 )
  {
    v47 = v76;
    v48 = 0LL;
    do
    {
      v49 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, *(_DWORD *)(v47 + 4 * v48));
      v52 = v49;
      if ( v49 )
      {
        if ( *((_DWORD *)v49 + 32) == -1 )
        {
          *((_DWORD *)v49 + 32) = v46;
          v55 = WdLogNewEntry5_WdTrace(v51, v50);
          *(_QWORD *)(v55 + 24) = v48;
          *(_QWORD *)(v55 + 32) = *((unsigned int *)v52 + 6);
          WdLogGlobalForLineNumber = 537;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 527;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(unsigned int *)(v47 + 4 * v48), v48);
        WdLogGlobalForLineNumber = 518;
      }
      v48 = ++v46;
    }
    while ( v46 < v45 );
    v2 = *(VIDPN_MGR **)v72;
  }
LABEL_83:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v73);
  ZwClose(Handle);
  v72[0] = -1;
  v56 = VIDPN_MGR::GetContainingAdapter(v2);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v56 + 27), L"DefaultSimulatedTarget", (char *)v72, 4u, 1u) < 0
    || (v59 = v72[0], v72[0] == -1) )
  {
    v65 = WdLogNewEntry5_WdTrace(v58, v57);
    *(_QWORD *)(v65 + 24) = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogGlobalForLineNumber = 592;
  }
  else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, v72[0]) )
  {
    v62 = WdLogNewEntry5_WdTrace(v61, v60);
    *(_QWORD *)(v62 + 24) = v59;
    *(_QWORD *)(v62 + 32) = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogGlobalForLineNumber = 576;
    *((_DWORD *)v2 + 137) = v59;
  }
  else
  {
    v64 = VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry2(2LL, v59, v64);
    WdLogGlobalForLineNumber = 585;
  }
  if ( v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
  Configuration = VIDPN_MGR::_InitializeDmmClientInterfaces(v2);
  if ( Configuration < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 606;
    goto LABEL_23;
  }
  if ( !*((_QWORD *)v2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  Configuration = MonitorRegisterMonitorEventCallback(
                    *((struct ADAPTER_DISPLAY **)v2 + 1),
                    v66,
                    v67,
                    (struct HDXGMONITOREVENT__ **)v2 + 66);
  if ( Configuration < 0 )
  {
    VIDPN_MGR::GetContainingAdapter(v2);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 624;
    goto LABEL_23;
  }
  if ( !*((_QWORD *)v2 + 66) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 632;
  }
  v68 = operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v68 )
    v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v68, 0x8000u, 1, 256LL, 0x12Cu);
  *((_QWORD *)v2 + 70) = v3;
  *((_DWORD *)v2 + 26) = 2;
  return v2;
}

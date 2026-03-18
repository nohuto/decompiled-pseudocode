/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x14029E57C
 * Callers:
 *     OutputDuplPresent @ 0x14029EA64 (OutputDuplPresent.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck @ 0x14005C0C8 (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  int IsRemoteSessionUsingXddmMonitors; // r12d
  unsigned int *p_VidPnSourceId; // rdi
  struct DXGADAPTER **v10; // rbx
  struct DXGADAPTER **v11; // rax
  int OutputDuplManager; // ebx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // esi
  ADAPTER_DISPLAY *v22; // rsi
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+20h] [rbp-E0h]
  DXGADAPTER *v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  OUTPUTDUPL_MGR *v35; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  char v38; // [rsp+88h] [rbp-78h]
  _BYTE v39[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  char v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _BYTE v45[64]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v46; // [rsp+118h] [rbp+18h]
  char v47; // [rsp+120h] [rbp+20h]

  v33 = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  p_VidPnSourceId = &a3->VidPnSourceId;
  if ( IsRemoteSessionUsingXddmMonitors )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  else
  {
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v31);
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
    OutputDuplManager = FindOutputDuplManager(this, *p_VidPnSourceId, v11, &v34, v10, &v32, &v35);
    if ( OutputDuplManager < 0 )
    {
      if ( v31 )
        DXGADAPTER::ReleaseReference(v31);
      v31 = 0LL;
      goto LABEL_22;
    }
    RemoteOutputDuplMgr = v35;
  }
  if ( !RemoteOutputDuplMgr )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2855;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Failed to get output dupl manager",
      2855LL,
      0LL,
      0LL,
      0LL,
      0LL);
    OutputDuplManager = -1073741275;
    goto LABEL_49;
  }
  if ( *p_VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
  {
    WdLogSingleEntry1(2LL);
    v30 = *p_VidPnSourceId;
    WdLogGlobalForLineNumber = 2862;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source 0x%I64x is not valid for output duplication manager",
      v30,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    v31 = 0LL;
LABEL_28:
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return 3221225485LL;
  }
  v14 = *((_QWORD *)a2 + 2);
  v38 = 0;
  v37 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  v15 = *((_QWORD *)a2 + 2);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  v42 = v16;
  v43 = 0;
  v44 = 0LL;
  if ( v16 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
    v41 = -1LL;
  }
  v17 = *(struct DXGADAPTER **)(v15 + 1896);
  if ( !v17 )
    v17 = *(struct DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL);
  COREACCESS::COREACCESS((COREACCESS *)v45, v17);
  v46 = v18;
  v19 = *(_QWORD *)(v18 + 1896);
  if ( v19 == *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) || (v47 = 1, !v19) )
    v47 = 0;
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
  if ( v21 >= 0 )
  {
    if ( IsRemoteSessionUsingXddmMonitors || (a3->Flags.Value & 8) != 0 )
      goto LABEL_19;
    v22 = (ADAPTER_DISPLAY *)*((_QWORD *)v31 + 395);
    if ( v22 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( Current && (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
      {
        Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck();
LABEL_19:
        OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                              RemoteOutputDuplMgr,
                              a2,
                              a3->Flags,
                              a3->hSource,
                              a3->BroadcastContextCount,
                              &a3->PresentRegions,
                              0LL,
                              *p_VidPnSourceId,
                              a4,
                              (struct COREDEVICEACCESS *)v39);
        COREACCESS::~COREACCESS((COREACCESS *)v45, v24);
        COREACCESS::~COREACCESS((COREACCESS *)v40, v25);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
        if ( v31 )
          DXGADAPTER::ReleaseReference(v31);
        v31 = 0LL;
LABEL_22:
        if ( v33 )
          DXGADAPTER::ReleaseReference(v33);
        return (unsigned int)OutputDuplManager;
      }
      Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck();
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v22, *((const struct DXGDEVICE **)a2 + 2), *p_VidPnSourceId) )
        goto LABEL_19;
      WdLogSingleEntry2(3LL, a2, *p_VidPnSourceId);
      WdLogGlobalForLineNumber = 2893;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      OutputDuplManager = -1071775744;
LABEL_49:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v31, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v33, 0LL);
      return (unsigned int)OutputDuplManager;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2880;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Output duplication is not supported on render only device 0x%I64x",
      v31 != 0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v45, v28);
    COREACCESS::~COREACCESS((COREACCESS *)v40, v29);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    v31 = 0LL;
    goto LABEL_28;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v45, v20);
  COREACCESS::~COREACCESS((COREACCESS *)v40, v27);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  if ( v31 )
    DXGADAPTER::ReleaseReference(v31);
  v31 = 0LL;
  if ( v33 )
    DXGADAPTER::ReleaseReference(v33);
  return (unsigned int)v21;
}

/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x14029CB18
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x14034CC50 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck @ 0x14005C0C8 (Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x14029DA3C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x14029E110 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140405140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct _KTHREAD **a2)
{
  int v2; // eax
  __int64 v5; // rdx
  unsigned int *v6; // rdx
  struct DXGHWQUEUE *v7; // rdx
  volatile signed __int64 *v8; // rax
  struct DXGDEVICE **v9; // r15
  unsigned __int64 v10; // rbx
  struct DXGDEVICE ***Pool2; // rax
  unsigned int i; // r14d
  __int64 v13; // r9
  struct DXGADAPTER **v14; // rbx
  struct DXGADAPTER **v15; // rax
  int OutputDuplManager; // ebx
  struct DXGHWQUEUE *RemoteOutputDuplMgr; // r14
  struct DXGDEVICE *v18; // rax
  struct DXGDEVICE *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  ADAPTER_DISPLAY *v24; // rbx
  struct _LOOKASIDE_LIST_EX *Global; // rax
  const struct DXGK_PRESENT_PARAMS *v26; // rax
  const struct DXGK_PRESENT_PARAMS *v27; // rbx
  unsigned int v28; // edi
  struct _LOOKASIDE_LIST_EX *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rcx
  struct DXGHWQUEUE *v36; // rbx
  struct DXGADAPTER **v37; // rax
  int v38; // eax
  unsigned int v39; // ebx
  __int64 CurrentProcess; // rax
  __int64 v41; // r9
  unsigned int v42; // eax
  int v43; // r9d
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  char *v47; // rax
  _QWORD *v48; // rcx
  struct DXGDEVICE ***v49; // rcx
  struct DXGDEVICE ***v50; // rcx
  struct DXGDEVICE ***v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE ***v55; // [rsp+50h] [rbp-B0h]
  _BYTE v56[32]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v59[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v60; // [rsp+A8h] [rbp-58h]
  DXGADAPTER *v61; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v63; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v65; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v66; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGHWQUEUE *v67; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v68[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-8h] BYREF
  int v70; // [rsp+100h] [rbp+0h]
  char v71[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v72; // [rsp+110h] [rbp+10h]
  char v73; // [rsp+118h] [rbp+18h]
  _QWORD v74[6]; // [rsp+120h] [rbp+20h] BYREF
  char v75; // [rsp+150h] [rbp+50h]
  _BYTE v76[24]; // [rsp+158h] [rbp+58h] BYREF
  char v77[8]; // [rsp+170h] [rbp+70h] BYREF
  char v78[8]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  char v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  char v83[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]
  char v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  struct DXGDEVICE *v88; // [rsp+1F8h] [rbp+F8h]
  char v89; // [rsp+200h] [rbp+100h]

  v2 = *((_DWORD *)a1 + 14);
  v63 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v34 = *((_DWORD *)a1 + 15);
    v67 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68, v34, a2, &v67, 0, 1);
    v36 = v67;
    if ( v67 )
    {
      v37 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v63);
      v38 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v36 + 2), *((_DWORD *)a1 + 1), v37, &v64);
      if ( v38 >= 0 )
      {
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
        goto LABEL_2;
      }
      OutputDuplManager = v38;
    }
    else
    {
      v39 = *((_DWORD *)a1 + 15);
      CurrentProcess = PsGetCurrentProcess(v35);
      v41 = v39;
      OutputDuplManager = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v41);
      WdLogGlobalForLineNumber = 3188;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
    goto LABEL_171;
  }
LABEL_2:
  v5 = *((unsigned int *)a1 + 2);
  P = 0LL;
  v60 = 0;
  if ( !PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements(&P, v5) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3205;
LABEL_78:
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    v60 = 0;
    P = 0LL;
    if ( v63 )
      DXGADAPTER::ReleaseReference(v63);
    return -1073741801LL;
  }
  v6 = (unsigned int *)*((_QWORD *)a1 + 2);
  v67 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68, *v6, a2, &v67, 0, 1);
  v7 = v67;
  if ( !v67 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3215;
LABEL_150:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    OutputDuplManager = -1073741811;
    goto LABEL_170;
  }
  *(_QWORD *)P = v67;
  if ( !v63 )
  {
    v8 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 1896LL);
    v63 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v64 = -1LL;
    }
  }
  v9 = (struct DXGDEVICE **)*((_QWORD *)v7 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69, v9[2]);
  v10 = *((unsigned int *)a1 + 2);
  v55 = 0LL;
  v57 = 0;
  if ( (unsigned int)v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 8 )
    {
LABEL_89:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3234;
      if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
        ExFreePoolWithTag(v55, 0);
      v57 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
      goto LABEL_78;
    }
    Pool2 = (struct DXGDEVICE ***)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    v55 = Pool2;
  }
  else
  {
    Pool2 = (struct DXGDEVICE ***)v56;
    v55 = (struct DXGDEVICE ***)v56;
    if ( (_DWORD)v10 )
    {
      memset(v56, 0, 8LL * (unsigned int)v10);
      Pool2 = (struct DXGDEVICE ***)v56;
    }
  }
  v57 = v10;
  if ( !Pool2 )
    goto LABEL_89;
  *Pool2 = v9;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, a2);
  for ( i = 1; ; ++i )
  {
    if ( i >= *((_DWORD *)a1 + 2) )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v74,
        v55,
        v57,
        v13,
        1);
      if ( v75 )
      {
        if ( !v74[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3295;
LABEL_163:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
          if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
            ExFreePoolWithTag(v55, 0);
          v57 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
          if ( P != v59 && P )
            ExFreePoolWithTag(P, 0);
          OutputDuplManager = -1073741801;
          goto LABEL_170;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3300;
LABEL_146:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
        if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v57 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
        goto LABEL_150;
      }
      v65 = 0LL;
      v61 = 0LL;
      v67 = 0LL;
      if ( !v63 || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
      {
        RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
      }
      else
      {
        v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v61);
        v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v65);
        OutputDuplManager = FindOutputDuplManager(v63, *((_DWORD *)a1 + 1), v15, &v66, v14, &v62, &v67);
        if ( OutputDuplManager < 0 )
          goto LABEL_61;
        RemoteOutputDuplMgr = v67;
      }
      if ( !RemoteOutputDuplMgr )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3324;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to get output dupl manager",
          3324LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v61, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
        if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v57 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
        if ( P != v59 && P )
          ExFreePoolWithTag(P, 0);
        OutputDuplManager = -1073741275;
        goto LABEL_170;
      }
      if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
      {
        WdLogSingleEntry1(2LL);
        v54 = *((unsigned int *)a1 + 1);
        WdLogGlobalForLineNumber = 3331;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VidPn source 0x%I64x is not valid for output duplication manager",
          v54,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v61 )
          DXGADAPTER::ReleaseReference(v61);
        v61 = 0LL;
        if ( v65 )
          DXGADAPTER::ReleaseReference(v65);
        v65 = 0LL;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
        if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v57 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
        if ( P != v59 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v60 = 0;
        if ( v63 )
          DXGADAPTER::ReleaseReference(v63);
        return -1073741811LL;
      }
      v18 = v9[2];
      v73 = 0;
      v72 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
      v19 = v9[2];
      v20 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
      v80 = v20;
      v81 = 0;
      v82 = 0LL;
      if ( v20 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
        v79 = -1LL;
      }
      v21 = *((_QWORD *)v19 + 237);
      if ( !v21 )
        v21 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
      v85 = v21;
      v86 = 0;
      v87 = 0LL;
      if ( v21 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
        v84 = -1LL;
      }
      v88 = v19;
      v22 = *((_QWORD *)v19 + 237);
      if ( v22 == *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) || (v89 = 1, !v22) )
        v89 = 0;
      OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, 0LL);
      if ( OutputDuplManager >= 0 )
      {
        if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        {
LABEL_34:
          Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
          v26 = (const struct DXGK_PRESENT_PARAMS *)ExAllocateFromLookasideListEx(Global + 12);
          v27 = v26;
          if ( v26 )
          {
            memset(v26, 0, 0x5F8uLL);
            *((_QWORD *)v27 + 188) = P;
            v28 = OUTPUTDUPL_MGR::ProcessPresent(
                    RemoteOutputDuplMgr,
                    (struct DXGCONTEXT *)v9,
                    *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                    *(_DWORD *)a1,
                    *((_DWORD *)a1 + 2) - 1,
                    (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                    v27,
                    *((_DWORD *)a1 + 1),
                    (struct DXGCONTEXT **)v55,
                    (struct COREDEVICEACCESS *)v77);
            v29 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx(v29 + 12, v27);
            COREACCESS::~COREACCESS((COREACCESS *)v83, v30);
            COREACCESS::~COREACCESS((COREACCESS *)v78, v31);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
            if ( v61 )
              DXGADAPTER::ReleaseReference(v61);
            v61 = 0LL;
            if ( v65 )
              DXGADAPTER::ReleaseReference(v65);
            v65 = 0LL;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
            if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
              ExFreePoolWithTag(v55, 0);
            v57 = 0;
            if ( v69 && v70 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v69 + 136));
              KeLeaveCriticalRegion();
            }
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
            if ( P != v59 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v60 = 0;
            if ( v63 )
              DXGADAPTER::ReleaseReference(v63);
            return v28;
          }
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 3372;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v61, 0LL);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
          goto LABEL_163;
        }
        v24 = (ADAPTER_DISPLAY *)*((_QWORD *)v61 + 395);
        if ( v24 )
        {
          if ( a2 && (*((unsigned int (**)(void))a2[11] + 29))() )
          {
            Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck();
          }
          else
          {
            Feature_DirectDisplayApi_DisableDDAVidpnOwnerCheck__private_IsEnabledPreCheck();
            if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(v24, v9[2], *((_DWORD *)a1 + 1)) )
            {
              WdLogSingleEntry2(3LL, v9, *((unsigned int *)a1 + 1));
              WdLogGlobalForLineNumber = 3362;
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
              DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v61, 0LL);
              DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
              if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
                ExFreePoolWithTag(v55, 0);
              v57 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
              DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
              if ( P != v59 && P )
                ExFreePoolWithTag(P, 0);
              OutputDuplManager = -1071775744;
              goto LABEL_170;
            }
          }
          goto LABEL_34;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3349;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Output duplication is not supported on render only device 0x%I64x",
          v61 != 0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v61, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v65, 0LL);
        goto LABEL_146;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v83, v23);
      COREACCESS::~COREACCESS((COREACCESS *)v78, v33);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v71);
LABEL_61:
      if ( v61 )
        DXGADAPTER::ReleaseReference(v61);
      v61 = 0LL;
      if ( v65 )
        DXGADAPTER::ReleaseReference(v65);
      v65 = 0LL;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v74);
      if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
        ExFreePoolWithTag(v55, 0);
      v57 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
      if ( P != v59 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v60 = 0;
      if ( v63 )
        DXGADAPTER::ReleaseReference(v63);
      return (unsigned int)OutputDuplManager;
    }
    v42 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 6) & 0xFFFFFF;
    if ( v42 >= *((_DWORD *)a2 + 74) )
      goto LABEL_107;
    v43 = *((_DWORD *)a2[35] + 4 * v42 + 2);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * i) >> 25) & 0x60) != (*((_BYTE *)a2[35] + 16 * v42 + 8) & 0x60)
      || (v43 & 0x2000) != 0
      || (v43 & 0x1F) == 0 )
    {
      goto LABEL_107;
    }
    v44 = a2[35];
    if ( (*((_BYTE *)v44 + 16 * v42 + 8) & 0x1F) != 0xF )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_107:
      v45 = 0LL;
      goto LABEL_108;
    }
    v45 = *((_QWORD *)v44 + 2 * v42);
LABEL_108:
    if ( i >= v60 )
      v46 = P;
    else
      v46 = (char *)P + 8 * i;
    *v46 = v45;
    v47 = (char *)P;
    v48 = (char *)P + 8 * i;
    if ( i >= v60 )
      v48 = P;
    OutputDuplManager = -1073741811;
    if ( !*v48 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i);
      v53 = *((_QWORD *)a1 + 2);
      WdLogGlobalForLineNumber = 3265;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkOutputDuplPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
        *(unsigned int *)(v53 + 4LL * i),
        i,
        0LL,
        0LL,
        0LL);
      goto LABEL_129;
    }
    if ( i < v60 )
      v47 = (char *)P + 8 * i;
    if ( i >= v57 )
      v49 = v55;
    else
      v49 = &v55[i];
    *v49 = *(struct DXGDEVICE ***)(*(_QWORD *)v47 + 16LL);
    v50 = v55;
    v51 = &v55[i];
    if ( i >= v57 )
      v51 = v55;
    if ( *v51 )
    {
      if ( i < v57 )
        v50 = &v55[i];
      if ( (*v50)[2] == v9[2] )
        continue;
    }
    break;
  }
  WdLogSingleEntry4(2LL, v9, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * i), i, -1073741811LL);
  v52 = *((_QWORD *)a1 + 2);
  WdLogGlobalForLineNumber = 3278;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v9,
    *(unsigned int *)(v52 + 4LL * i),
    i,
    -1073741811LL,
    0LL);
LABEL_129:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
  if ( v55 != (struct DXGDEVICE ***)v56 && v55 )
    ExFreePoolWithTag(v55, 0);
  v57 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v69);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
  if ( P != v59 && P )
    ExFreePoolWithTag(P, 0);
LABEL_170:
  P = 0LL;
  v60 = 0;
LABEL_171:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v63, 0LL);
  return (unsigned int)OutputDuplManager;
}

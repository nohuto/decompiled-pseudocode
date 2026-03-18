/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4
 * Callers:
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401BCE50 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400135C8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x140013F98 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x14003DEDC (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400421C0 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x14004D844 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1400633FC (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1402BD63C (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1402BD77C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     _DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1402BD89C (_DxgkPresent_--_3_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1402BD8D0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x140323530 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1403B7514 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rsi
  struct _LOOKASIDE_LIST_EX *Global; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // rdi
  int v11; // r14d
  D3DKMT_HANDLE v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // edx
  struct _EX_RUNDOWN_REF *v27; // rdx
  DXGPRESENT *v28; // rax
  DXGPRESENT *v29; // rax
  __int64 v30; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // rdx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  COREDEVICEACCESS *v35; // r12
  int v36; // eax
  struct DXGPRESENTMUTEX *v37; // r8
  const char *v38; // rdx
  __int64 v39; // r12
  unsigned __int8 v40; // r14
  __int64 v41; // r13
  ADAPTER_DISPLAY *v42; // r13
  __int64 v43; // r12
  int updated; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct _LOOKASIDE_LIST_EX *v47; // rax
  __int64 v48; // rax
  int CurrentOrientation; // eax
  UINT Value; // eax
  unsigned int v51; // ecx
  __int64 v52; // rax
  const RECT *DdiSubRectList; // r14
  __int64 v54; // r15
  UINT v55; // r15d
  int v56; // r13d
  int v57; // esi
  __int64 v58; // r12
  LONG v59; // r8d
  LONG v60; // edx
  UINT i; // r15d
  __int64 v62; // rdx
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  UINT v65; // ebx
  struct VIDMM_DMA_BUFFER *v66; // rsi
  unsigned int v67; // r10d
  __int64 v68; // r8
  unsigned int v69; // r9d
  __int64 v70; // rcx
  struct COREDEVICEACCESS *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  struct DXGCONTEXT **v76; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v77; // [rsp+28h] [rbp-F8h]
  int v78; // [rsp+30h] [rbp-F0h]
  struct DXGK_PRESENT_PARAMS *v79; // [rsp+30h] [rbp-F0h]
  __int64 v80; // [rsp+30h] [rbp-F0h]
  struct DXGK_PRESENT_PARAMS *v81; // [rsp+30h] [rbp-F0h]
  int v82; // [rsp+38h] [rbp-E8h]
  __int64 v83; // [rsp+38h] [rbp-E8h]
  __int64 v84; // [rsp+38h] [rbp-E8h]
  int v85; // [rsp+40h] [rbp-E0h]
  __int64 v86; // [rsp+40h] [rbp-E0h]
  __int64 v87; // [rsp+40h] [rbp-E0h]
  unsigned int v88; // [rsp+A0h] [rbp-80h]
  unsigned int v89; // [rsp+A0h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v90; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v91; // [rsp+B0h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v92; // [rsp+B8h] [rbp-68h] BYREF
  struct VIDMM_DMA_BUFFER *v93; // [rsp+C0h] [rbp-60h] BYREF
  ADAPTER_DISPLAY *v94; // [rsp+C8h] [rbp-58h]
  struct VIDSCH_SUBMIT_DATA_BASE *v95[2]; // [rsp+D0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v96; // [rsp+E0h] [rbp-40h] BYREF
  union _LARGE_INTEGER v97; // [rsp+E8h] [rbp-38h] BYREF
  struct DXGHWQUEUE *v98; // [rsp+F0h] [rbp-30h] BYREF
  DXGCONTEXT *v99; // [rsp+F8h] [rbp-28h]
  COREDEVICEACCESS *v100; // [rsp+100h] [rbp-20h]
  DXGADAPTERSTOPRESETLOCKSHARED *v101; // [rsp+108h] [rbp-18h]
  _BYTE v102[16]; // [rsp+110h] [rbp-10h] BYREF
  _BYTE v103[24]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v104; // [rsp+138h] [rbp+18h]
  struct _DXGKARG_PRESENT v105; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v107[64]; // [rsp+1F0h] [rbp+D0h] BYREF
  _BYTE v108[64]; // [rsp+230h] [rbp+110h] BYREF
  _BYTE v109[64]; // [rsp+270h] [rbp+150h] BYREF
  _BYTE v110[64]; // [rsp+2B0h] [rbp+190h] BYREF

  v101 = a5;
  v7 = this;
  v97.QuadPart = (LONGLONG)a6;
  v100 = a4;
  v91 = a3;
  v99 = this;
  Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
  v9 = (unsigned int *)ExAllocateFromLookasideListEx(Global + 12);
  v10 = v9;
  if ( v9 )
  {
    memset(v9, 0, 0x5F8uLL);
    v93 = (struct VIDMM_DMA_BUFFER *)v10;
    v98 = 0LL;
    memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
    *((_QWORD *)v10 + 188) = &v98;
    if ( a2->hHwQueues )
      v12 = *a2->hHwQueues;
    else
      v12 = 0;
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
      (DXGHWQUEUEBYHANDLE *)v102,
      v12,
      *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 40LL),
      &v98,
      1,
      1);
    v13 = *((_QWORD *)v7 + 2);
    v14 = *(_QWORD *)(v13 + 1896);
    v104 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
    v15 = *(ADAPTER_DISPLAY **)(v14 + 3160);
    v94 = v15;
    if ( !v15 || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v15) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7047;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayCore != NULL) && pDisplayCore->IsCoreResourceSharedOwner()",
        7047LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7048;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        7048LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *((_QWORD *)v10 + 9);
    if ( !v16
      || !v10[16]
      || (v17 = v10[22], (((unsigned __int8)v17 ^ (unsigned __int8)(v17 >> 1)) & 1) == 0)
      || (v17 & 0x63C) != 0 )
    {
      v11 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v7, v16, v10[16], v10[22]);
      v87 = v10[22];
      v84 = v10[16];
      v81 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7063;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x 0x%I64x failed with invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v81,
        v84,
        v87);
      goto LABEL_150;
    }
    memset(&v105, 0, sizeof(v105));
    v18 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    v88 = v10[6];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 248));
    v19 = (v88 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v18 + 296) )
    {
      v20 = *(_QWORD *)(v18 + 280);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( ((v88 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) && (v21 & 0x2000) == 0 && (v21 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v20 + 16 * (((unsigned __int64)v88 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16 * (((unsigned __int64)v88 >> 6) & 0xFFFFFF));
          goto LABEL_23;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v22 = 0LL;
LABEL_23:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92, v22);
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 264));
    ExReleasePushLockSharedEx(v18 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v92 )
    {
      v11 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, v7, *((_QWORD *)v10 + 9), v10[16], v10[6]);
      v86 = v10[6];
      v83 = v10[16];
      v79 = (struct DXGK_PRESENT_PARAMS *)*((_QWORD *)v10 + 9);
      WdLogGlobalForLineNumber = 7076;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x 0x%I64x fails Present invalid parameters 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)v7,
        (__int64)v79,
        v83,
        v86);
LABEL_25:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
LABEL_150:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v102);
      DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(&v93, v72, v73, v74, v76, (_DWORD)v77, v78, v82, v85);
      return (unsigned int)v11;
    }
    if ( (v10[22] & 1) == 0 )
    {
LABEL_38:
      if ( *((_QWORD *)v7 + 19) )
        goto LABEL_41;
      v28 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL);
      if ( v28 )
      {
        v29 = DXGPRESENT::DXGPRESENT(v28, 1u);
        *((_QWORD *)v7 + 19) = v29;
        if ( v29 )
        {
LABEL_41:
          CVidSchSubmitData::CVidSchSubmitData(
            (CVidSchSubmitData *)v95,
            *(struct ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL),
            1);
          v31 = v95[0];
          if ( !v95[0] )
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 7112;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate VidSchSubmitData",
              7112LL,
              0LL,
              0LL,
              0LL,
              0LL);
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v95);
            v11 = -1073741801;
            goto LABEL_25;
          }
          v33 = *(_DWORD *)v95[0] | 0x10000;
          *(_DWORD *)v95[0] = v33;
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v33 |= 1u;
            *(_DWORD *)v31 = v33;
          }
          *(_DWORD *)v31 = v33 | 0x100;
          LOBYTE(v30) = 1;
          v34 = *((_QWORD *)v7 + 2);
          v90 = 0LL;
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 760LL) + 8LL)
                                                                                               + 472LL))(
                  *((_QWORD *)v7 + 29),
                  0LL,
                  v30,
                  &v90);
          if ( v11 < 0 )
          {
LABEL_64:
            CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v95);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v102);
            v47 = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
            ExFreeToLookasideListEx(v47 + 12, v10);
            return (unsigned int)v11;
          }
          if ( !v90 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7130;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 7130LL, 0LL, 0LL, 0LL, 0LL);
          }
          DXGPRESENTMUTEX::DXGPRESENTMUTEX(
            (DXGPRESENTMUTEX *)v103,
            *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
          if ( !_bittest((const signed __int32 *)v10 + 22, 0xEu) )
          {
            v35 = v100;
            COREDEVICEACCESS::Release(v100);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v101);
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v103);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v101);
            v36 = COREDEVICEACCESS::AcquireShared(v35, 0LL);
            v11 = v36;
            if ( v36 < 0 )
            {
              WdLogSingleEntry2(4LL, v36, v7);
              WdLogGlobalForLineNumber = 7148;
              COREDEVICEACCESS::AcquireSharedUncheck(v35, v38);
              VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
                v90);
LABEL_78:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
              CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v95);
              goto LABEL_25;
            }
            v39 = v104;
            v40 = 0;
            if ( v104 )
            {
              v41 = *((_QWORD *)v7 + 19);
              if ( *(_DWORD *)(v41 + 8) != (*(unsigned int (**)(void))(v104 + 8))() )
              {
                *(_DWORD *)(v41 + 8) = (*(__int64 (**)(void))(v39 + 8))();
                DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL, 4294967293LL, 0LL);
                v40 = 1;
              }
            }
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v37, v40);
          }
          if ( (v10[22] & 1) == 0 || v10[5] == v10[6] )
          {
            v42 = v94;
          }
          else
          {
            v42 = v94;
            if ( (*(_DWORD *)(v92[6].Count + 4) & 2) != 0 )
            {
              v43 = v91;
              updated = DxgkCddUpdatePresentRects(v94, v91, (const struct tagRECT **)v10 + 9, v10 + 16);
              v11 = updated;
              if ( updated < 0 )
              {
                WdLogSingleEntry3(4LL, updated, *((_QWORD *)v7 + 2), (unsigned int)v43);
                v45 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7186;
                v46 = *(_QWORD *)(v45 + 16);
LABEL_62:
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(v46 + 760), v90);
                v90 = 0LL;
LABEL_63:
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
                goto LABEL_64;
              }
              if ( !v10[16] )
              {
                WdLogSingleEntry4(4LL, 0LL, *((_QWORD *)v7 + 2), v10[6], v43);
                v48 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7201;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v48 + 16) + 760LL), v90);
                v90 = 0LL;
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v103);
                CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v95);
                v11 = 0;
                goto LABEL_25;
              }
              goto LABEL_69;
            }
          }
          LODWORD(v43) = v91;
LABEL_69:
          v11 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), v10[16]);
          if ( v11 < 0 )
          {
            v46 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
            goto LABEL_62;
          }
          v105.DstRect = (RECT)*((_OWORD *)v10 + 2);
          v105.SubRectCnt = v10[16];
          if ( (v10[22] & 0x4000) != 0 )
          {
            Value = v105.Flags.Value;
          }
          else
          {
            CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(v42, (unsigned int)v43, 1LL);
            Value = (CurrentOrientation != 1 ? 0x80 : 0) | v105.Flags.Value & 0xFFFFFF7F;
            v105.Flags.Value = Value;
          }
          v51 = v10[22];
          if ( (v51 & 1) != 0 )
          {
            v105.Flags.Value = Value | 1;
            v105.SrcRect = (RECT)*((_OWORD *)v10 + 3);
            if ( v10[5] == v10[6] )
            {
              if ( (v10[22] & 0x4000) == 0 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v42, v43) )
              {
                v11 = -1071774910;
                WdLogSingleEntry4(4LL, -1071774910LL, *((_QWORD *)v7 + 2), v10[6], (unsigned int)v43);
                v52 = *((_QWORD *)v7 + 2);
                WdLogGlobalForLineNumber = 7259;
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(v52 + 16) + 760LL), v90);
                v90 = 0LL;
                goto LABEL_78;
              }
              DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
              v105.pDstSubRects = DdiSubRectList;
              if ( v105.DstRect.right - v105.DstRect.left != v105.SrcRect.right - v105.SrcRect.left )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7278;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.right - PresentDdiArg.DstRect.left == PresentDdiArg.SrcRect.right - Pre"
                            "sentDdiArg.SrcRect.left",
                  7278LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.DstRect.bottom - v105.DstRect.top != v105.SrcRect.bottom - v105.SrcRect.top )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7281;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.bottom - PresentDdiArg.DstRect.top == PresentDdiArg.SrcRect.bottom - Pr"
                            "esentDdiArg.SrcRect.top",
                  7281LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.SrcRect.left >= v105.SrcRect.right )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7283;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.left < PresentDdiArg.SrcRect.right",
                  7283LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.SrcRect.left < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7284;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.left >= 0",
                  7284LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v54 = 4024LL * (unsigned int)v43;
              if ( v105.SrcRect.right > *(_DWORD *)(v54 + *((_QWORD *)v42 + 16) + 636)
                                      - *(_DWORD *)(v54 + *((_QWORD *)v42 + 16) + 628) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7285;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.right <= pDisplayCore->GetContentRect(VidPnSourceId)->right - pDisplayC"
                            "ore->GetContentRect(VidPnSourceId)->left",
                  7285LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.DstRect.top >= v105.DstRect.bottom )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7287;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.top < PresentDdiArg.DstRect.bottom",
                  7287LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.DstRect.top < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7288;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.DstRect.top >= 0",
                  7288LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( v105.SrcRect.bottom > *(_DWORD *)(v54 + *((_QWORD *)v42 + 16) + 640)
                                       - *(_DWORD *)(v54 + *((_QWORD *)v42 + 16) + 632) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7289;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"PresentDdiArg.SrcRect.bottom <= pDisplayCore->GetContentRect(VidPnSourceId)->bottom - pDispla"
                            "yCore->GetContentRect(VidPnSourceId)->top",
                  7289LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v55 = 0;
              v56 = v105.DstRect.left - v105.SrcRect.left;
              if ( v105.SubRectCnt )
              {
                v57 = v105.DstRect.top - v105.SrcRect.top;
                do
                {
                  v58 = v55;
                  v59 = v56 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v55);
                  DdiSubRectList[v58].left = v59;
                  v60 = v56 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v55 + 8);
                  DdiSubRectList[v58].right = v60;
                  DdiSubRectList[v58].top = v57 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v55 + 4);
                  DdiSubRectList[v58].bottom = v57 + *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * v55 + 12);
                  if ( v59 >= v60 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7301;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].left < pDstSubRects[i].right",
                      7301LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v55].left < v105.DstRect.left )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7302;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].left >= PresentDdiArg.DstRect.left",
                      7302LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v55].right > v105.DstRect.right )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7303;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].right <= PresentDdiArg.DstRect.right",
                      7303LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v55].top >= DdiSubRectList[v55].bottom )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7304;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].top < pDstSubRects[i].bottom",
                      7304LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v55].top < v105.DstRect.top )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7305;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].top >= PresentDdiArg.DstRect.top",
                      7305LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( DdiSubRectList[v55].bottom > v105.DstRect.bottom )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 7306;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pDstSubRects[i].bottom <= PresentDdiArg.DstRect.bottom",
                      7306LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  ++v55;
                }
                while ( v55 < v105.SubRectCnt );
                v7 = v99;
              }
            }
            else
            {
              v105.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
            }
            for ( i = 0; i < v105.SubRectCnt; ++i )
            {
              if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7317;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPresent->pSrcSubRects[i].left < pPresent->pSrcSubRects[i].right",
                  7317LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) >= *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPresent->pSrcSubRects[i].top < pPresent->pSrcSubRects[i].bottom",
                  7318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (v10[22] & 0x4000) == 0 )
              {
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i) < v105.SrcRect.left )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7323;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].left >= PresentDdiArg.SrcRect.left",
                    7323LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 8) > v105.SrcRect.right )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7324;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].right <= PresentDdiArg.SrcRect.right",
                    7324LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 4) < v105.SrcRect.top )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7325;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].top >= PresentDdiArg.SrcRect.top",
                    7325LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *(_DWORD *)(*((_QWORD *)v10 + 9) + 16LL * i + 12) > v105.SrcRect.bottom )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 7326;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPresent->pSrcSubRects[i].bottom <= PresentDdiArg.SrcRect.bottom",
                    7326LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
            }
          }
          else
          {
            if ( (v51 & 2) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 7333;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pPresent->Flags.ColorFill",
                7333LL,
                0LL,
                0LL,
                0LL,
                0LL);
              Value = v105.Flags.Value;
            }
            v105.Flags.Value = Value | 2;
            v105.Color = v10[7];
            v105.pDstSubRects = (const RECT *)*((_QWORD *)v10 + 9);
          }
          if ( !bTracingEnabled )
            goto LABEL_145;
          VIDMM_EXPORT::VidMmETWAllocationHandle(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
            v10[6]);
          VIDMM_EXPORT::VidMmETWAllocationHandle(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 760LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 768LL),
            v10[5]);
          pDstSubRects = v105.pDstSubRects;
          SubRectCnt = v105.SubRectCnt;
          v93 = v90;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
              HIDWORD(*(_QWORD *)&v105.DstRect.right),
              HIDWORD(*(_QWORD *)&v105.SrcRect.left),
              HIDWORD(*(_QWORD *)&v105.SrcRect.right),
              0LL,
              v93);
          v65 = 0;
          if ( !SubRectCnt )
          {
LABEL_145:
            v71 = v100;
            v11 = DXGCONTEXT::SubmitPresent(
                    v7,
                    (const struct _D3DKMT_PRESENT *)v10,
                    *((struct DXGHWQUEUE ***)v10 + 188),
                    v10[23],
                    (struct DXGCONTEXT **)v97.QuadPart,
                    0LL,
                    v10[5],
                    v10[6],
                    &v105,
                    0LL,
                    v90,
                    v95[0],
                    D3DDDIFMT_A8B8G8R8,
                    v100);
            if ( v11 >= 0 && v10[90] == 1 )
            {
              v97.QuadPart = -100000LL;
              v11 = SubmitPresentHistoryToken(
                      (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v10 + 90),
                      v71,
                      v101,
                      0LL,
                      0,
                      &v97,
                      (struct DXGK_PRESENT_PARAMS *)v10,
                      0LL,
                      v7,
                      0LL,
                      0LL);
            }
            goto LABEL_63;
          }
          v66 = v93;
          while ( 1 )
          {
            v67 = 0;
            v68 = SubRectCnt - v65;
            if ( (unsigned int)v68 > 0x10 )
              break;
            v69 = SubRectCnt - v65;
            if ( (_DWORD)v68 )
              goto LABEL_139;
LABEL_141:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(v77) = v69;
              LODWORD(v76) = SubRectCnt - v65 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                (__int64)v110,
                v62,
                v68,
                v66,
                v76,
                v77,
                v110,
                v109,
                v108,
                v107);
            }
            v65 += 16;
            if ( v65 >= SubRectCnt )
            {
              v7 = v99;
              goto LABEL_145;
            }
          }
          v69 = 16;
LABEL_139:
          v62 = 0LL;
          do
          {
            v70 = v67 + v65;
            ++v67;
            v70 *= 2LL;
            v62 += 4LL;
            *(_DWORD *)&v109[v62 + 60] = *(&pDstSubRects->left + 2 * v70);
            *(_DWORD *)&v108[v62 + 60] = *(&pDstSubRects->right + 2 * v70);
            *(_DWORD *)&v107[v62 + 60] = *(&pDstSubRects->top + 2 * v70);
            *(_DWORD *)&v107[v62 - 4] = *(&pDstSubRects->bottom + 2 * v70);
          }
          while ( v67 < v69 );
          goto LABEL_141;
        }
      }
      else
      {
        *((_QWORD *)v7 + 19) = 0LL;
      }
      v11 = -1073741801;
      WdLogSingleEntry4(
        6LL,
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
        *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
        v7);
      v32 = *((_QWORD *)v7 + 2);
      WdLogGlobalForLineNumber = 7103;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL),
        *(_QWORD *)(v32 + 40),
        (__int64)v7,
        0LL);
      goto LABEL_25;
    }
    v23 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    v89 = v10[5];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 248));
    v24 = (v89 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *(_DWORD *)(v23 + 296) )
    {
      v25 = *(_QWORD *)(v23 + 280);
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((v89 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v25 + 16 * (((unsigned __int64)v89 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
        {
          v27 = *(struct _EX_RUNDOWN_REF **)(v25 + 16 * (((unsigned __int64)v89 >> 6) & 0xFFFFFF));
LABEL_35:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v96, v27);
          _InterlockedDecrement((volatile signed __int32 *)(v23 + 264));
          ExReleasePushLockSharedEx(v23 + 248, 0LL);
          KeLeaveCriticalRegion();
          if ( !v96 )
          {
            v11 = -1073741811;
            WdLogSingleEntry3(2LL, -1073741811LL, v7, v10[5]);
            v80 = v10[5];
            WdLogGlobalForLineNumber = 7089;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x 0x%I64x fails Present invalid source allocation 0x%I64x",
              -1073741811LL,
              (__int64)v7,
              v80,
              0LL,
              0LL);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96);
            goto LABEL_25;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96);
          goto LABEL_38;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v27 = 0LL;
    goto LABEL_35;
  }
  v11 = -1073741801;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 7015;
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
  return (unsigned int)v11;
}

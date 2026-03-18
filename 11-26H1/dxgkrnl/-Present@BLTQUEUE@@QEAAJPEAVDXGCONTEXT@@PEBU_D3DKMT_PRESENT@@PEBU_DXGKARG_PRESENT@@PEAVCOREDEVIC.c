/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1403C5AC8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009464 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ??$_PlainWrite@U_D3DKMT_KMDOD_ESCAPE@@@?$UserModePointer@U_D3DKMT_KMDOD_ESCAPE@@@@AEAAXPEAU_D3DKMT_KMDOD_ESCAPE@@AEBU1@@Z @ 0x14009A518 (--$_PlainWrite@U_D3DKMT_KMDOD_ESCAPE@@@-$UserModePointer@U_D3DKMT_KMDOD_ESCAPE@@@@AEAAXPEAU_D3DK.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x14022B450 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402FF158 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x140386EEC (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403B7F94 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403C5374 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1403D3C10 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140446E68 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  struct _D3DKMT_PRESENT *v6; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r15
  int v12; // ecx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  const wchar_t *v17; // r9
  int v18; // edx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY **v20; // r13
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct DXGADAPTER *Adapter; // rax
  int v27; // eax
  const struct _DXGKARG_PRESENT *v28; // r9
  struct DXGDEVICE *v29; // rdx
  __int64 v30; // rcx
  bool v31; // zf
  struct tagRECT *p_SrcRect; // rax
  struct tagRECT *v33; // rbx
  __int64 v34; // rax
  const wchar_t *v35; // r9
  struct _LIST_ENTRY *v36; // rcx
  __int64 v37; // rcx
  struct DXGPROCESS *v38; // rax
  __int64 SubRectCnt; // rcx
  const struct _DXGKARG_PRESENT *v40; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v42; // rcx
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-198h]
  void *v44; // [rsp+70h] [rbp-148h] BYREF
  int v45; // [rsp+78h] [rbp-140h] BYREF
  __int64 v46; // [rsp+80h] [rbp-138h]
  char v47; // [rsp+88h] [rbp-130h]
  void *Src; // [rsp+90h] [rbp-128h]
  struct DXGPROCESS *v49; // [rsp+98h] [rbp-120h] BYREF
  int v50; // [rsp+A0h] [rbp-118h]
  _QWORD v51[3]; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v52[80]; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i v53[5]; // [rsp+110h] [rbp-A8h] BYREF
  _BYTE v54[88]; // [rsp+160h] [rbp-58h] BYREF
  BLTQUEUE *v55; // [rsp+1C0h] [rbp+8h] BYREF
  struct DXGCONTEXT *v56; // [rsp+1C8h] [rbp+10h]
  struct _D3DKMT_PRESENT *v57; // [rsp+1D0h] [rbp+18h]
  const struct _DXGKARG_PRESENT *v58; // [rsp+1D8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v55 = this;
  v6 = a3;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 12000);
  if ( (*((_DWORD *)this + 268) & 1) == 0 )
    goto LABEL_44;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v6->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 444LL);
  v13 = (char *)a2 + 434;
  Src = (char *)a2 + 434;
  if ( (v12 & 0x10) != 0 )
  {
LABEL_15:
    if ( !*v13 )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( !*v13 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) == 0 )
    {
      LODWORD(Current) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 1106;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x unsupported adapter is used for display only Present 0x%I64x.",
        -1073741811LL,
        (__int64)this,
        0LL,
        0LL,
        0LL);
LABEL_22:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
      return (unsigned int)Current;
    }
    Src = v13;
    goto LABEL_15;
  }
LABEL_16:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 3221225659LL;
  }
LABEL_26:
  if ( *((int *)this + 269) < 0 )
  {
LABEL_44:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x80u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
      v6 = v57;
    }
    else
    {
      *((_BYTE *)this + 663) = 1;
    }
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      WdLogSingleEntry2(2LL, -1073741130LL, this);
      WdLogGlobalForLineNumber = 1145;
      v17 = L"0x%I64x for FlipRestart from BLTQUEUE::Present 0x%I64x.";
      v18 = 0x40000;
LABEL_43:
      DxgkLogInternalTriageEvent(0LL, v18, -1, (__int64)v17, -1073741130LL, (__int64)this, 0LL, 0LL, 0LL);
      goto LABEL_44;
    }
  }
  LODWORD(v49) = 0;
  v19 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v20 = BLTQUEUE::RemoveQueueHead(this, v19);
    v51[0] = v20;
    if ( v20 )
      break;
    if ( (v6->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(4LL, -1071775486LL, this);
      WdLogGlobalForLineNumber = 1163;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
      return 3223191810LL;
    }
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x40u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
      v6 = v57;
    }
    else
    {
      *((_BYTE *)this + 662) = 1;
    }
    v21 = BLTQUEUE::IssueCommand(this);
    LODWORD(v44) = v21;
    if ( v21 < 0 )
    {
      v23 = v21;
      WdLogSingleEntry2(2LL, v21, this);
      WdLogGlobalForLineNumber = 1186;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x for WaitEntry from BLTQUEUE::Present 0x%I64x.",
        v23,
        (__int64)this,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
      return (unsigned int)v44;
    }
    LODWORD(v49) = (_DWORD)v49 + 1;
    v19 = (struct _LIST_ENTRY *)((char *)this + 232);
  }
  while ( (unsigned int)v49 < 3 );
  if ( !v20 )
  {
    WdLogSingleEntry2(1LL, -1073741130LL, this);
    WdLogGlobalForLineNumber = 1196;
    v17 = L"0x%I64x No BLT entry available for BLTQUEUE::Present 0x%I64x.";
    v18 = 262146;
    goto LABEL_43;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v27 = BLTENTRY::SetupPresentParameters((BLTENTRY *)v20, this, a2, v6, a4, a5, BYTE1(*((_DWORD *)Adapter + 111)) & 1);
  Current = (struct DXGPROCESS *)v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(2LL, v27, this);
    WdLogGlobalForLineNumber = 1210;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Error 0x%I64x to set up Present parameters 0x%I64x.",
      (__int64)Current,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_90;
  }
  if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 111) & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
    if ( (v57->Flags.Value & 8) != 0 )
      LODWORD(Current) = 0;
    else
      LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, a2, v57, v28, Timeout, (struct BLTENTRY *)v20);
    KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
    goto LABEL_90;
  }
  if ( !*(_BYTE *)Src )
  {
    Src = (void *)*((_QWORD *)a2 + 7);
    v44 = 0LL;
    v51[2] = (char *)Src + 60;
    memset(v53, 0, sizeof(v53));
    RtlCopyFromUser(v53, Src, 0x50uLL);
    *(__m128i *)v52 = v53[0];
    *(__m128i *)&v52[16] = v53[1];
    *(__m128i *)&v52[32] = v53[2];
    *(__m128i *)&v52[48] = v53[3];
    *(__m128i *)&v52[64] = v53[4];
    if ( _mm_cvtsi128_si32(v53[0]) != -791674878
      || v53[0].m128i_i32[2] != *(D3DKMT_HANDLE *)((char *)&v6->hDestination
                                                 + (-(__int64)((v6->Flags.Value & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      WdLogSingleEntry3(2LL, Current, a2, this);
      WdLogGlobalForLineNumber = 1414;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid Present request 0x%I64x from 0x%I64x for 0x%I64x.",
        (__int64)Current,
        (__int64)a2,
        (__int64)this,
        0LL,
        0LL);
      LODWORD(Current) = -1073741811;
      v50 = -1073741811;
      goto LABEL_90;
    }
    if ( (v6->Flags.Value & 4) != 0 )
    {
      memset(&v52[8], 0, 0x48uLL);
      *(_DWORD *)&v52[16] = 4;
      v40 = v58;
    }
    else
    {
      v40 = v58;
      *(struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF *)&v52[16] = v58->Flags.0;
      *(_DWORD *)&v52[20] = v58->Color;
      *(RECT *)&v52[40] = v58->DstRect;
      *(RECT *)&v52[24] = v58->SrcRect;
      SubRectCnt = v58->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)*((unsigned int *)a2 + 12) - 80) >> 4) )
      {
        v49 = (struct DXGPROCESS *)(16 * SubRectCnt);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, void **, _QWORD, struct DXGPROCESS **, int, int))VirtualMemoryInterface)(
               -1LL,
               &v44,
               0LL,
               &v49,
               4096,
               4) < 0 )
          goto LABEL_90;
      }
      else
      {
        v44 = (char *)Src + 60;
      }
      *(_DWORD *)&v52[56] = v40->SubRectCnt;
      *(_QWORD *)&v52[8] = v44;
    }
    *(_DWORD *)v52 = -791674877;
    UserModePointer<_D3DKMT_KMDOD_ESCAPE>::_PlainWrite<_D3DKMT_KMDOD_ESCAPE>(SubRectCnt, Src, v52);
    if ( v44 )
      RtlCopyToUser(v44, (void *)v40->pDstSubRects, 16LL * v40->SubRectCnt);
    goto LABEL_90;
  }
  v29 = (struct DXGDEVICE *)*((_QWORD *)a2 + 2);
  Src = *(void **)(*((_QWORD *)v29 + 2) + 16LL);
  LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v29, v6->hSource, a5);
  if ( (int)Current >= 0 )
  {
    v31 = (*(_DWORD *)&v6->Flags.0 & 0x80u) == 0;
    p_SrcRect = &v6->SrcRect;
    v33 = (struct tagRECT *)((char *)this + 2960);
    if ( !v31 )
      v33 = p_SrcRect;
    Current = DXGPROCESS::GetCurrent(v30);
    v49 = Current;
    DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v44, v57->hSource);
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)Src + 4712),
                         Current,
                         a2,
                         0LL,
                         *((_DWORD *)v44 + 5),
                         *((_DWORD *)this + 727),
                         v33,
                         v33,
                         1u,
                         v33,
                         0,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 369);
      LODWORD(v55) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)Src + 4712),
                           v49,
                           1u,
                           (const unsigned int *)this + 734,
                           0,
                           1u,
                           (const unsigned int *)&v55,
                           (const unsigned __int64 *)this + 369,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      if ( (int)Current >= 0 )
      {
        v36 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 2);
        v20[70] = (struct _LIST_ENTRY *)*((_QWORD *)this + 369);
        v20[71] = v36;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (BLTQUEUE *)((char *)this + 832), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
        v38 = DXGPROCESS::GetCurrent(v37);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v54, v38);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v20 + 22) = 4;
          *((_DWORD *)v20 + 18) = *((_DWORD *)this + 64);
          *((_DWORD *)v20 + 23) = *((_DWORD *)this + 729);
          v20[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 366);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
        goto LABEL_78;
      }
      WdLogSingleEntry0(2LL);
      v34 = 1294LL;
      v35 = L"VmBusSendSignalSyncObject failed";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v34 = 1274LL;
      v35 = L"Blt failed";
    }
    WdLogGlobalForLineNumber = v34;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, v34, 0LL, 0LL, 0LL, 0LL);
LABEL_78:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
    goto LABEL_90;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1248;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"PrepareStagingBuffer failed", 1248LL, 0LL, 0LL, 0LL, 0LL);
LABEL_90:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((BLTENTRY *)v20, 1u);
    BLTQUEUE::InsertQueueHead((__int64)this, (__int64 *)this + 29, (__int64)v20);
    goto LABEL_22;
  }
  BLTQUEUE::InsertQueueTail((__int64)this, (__int64)this + 216, (__int64)v20);
  *((LARGE_INTEGER *)this + 121) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit);
  return 0LL;
}

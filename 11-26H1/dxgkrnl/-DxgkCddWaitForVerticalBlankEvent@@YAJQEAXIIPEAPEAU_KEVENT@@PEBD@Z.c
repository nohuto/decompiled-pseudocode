/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14029F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14004C058 (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        struct _KEVENT **a4,
        char *a5)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  __int64 v10; // rcx
  char v11; // r14
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rdi
  __int64 v17; // rsi
  bool v18; // zf
  char v20; // al
  __int64 v21; // rcx
  signed __int32 v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int (__fastcall *v32)(_QWORD, __int64, __int64, _QWORD, int, signed __int32); // rax
  __int64 v33; // rcx
  const wchar_t *v34; // r9
  int WaitMode; // [rsp+20h] [rbp-E0h]
  signed __int32 Alertable; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  char v39; // [rsp+60h] [rbp-A0h]
  void *Src; // [rsp+68h] [rbp-98h]
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v42[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v46; // [rsp+D8h] [rbp-28h]
  char v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  PVOID Object[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+310h] [rbp+210h] BYREF

  Src = a4;
  v6 = a3;
  v7 = a2;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 3015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 3015);
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8820;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8820LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *((_QWORD *)this + 395);
  if ( !v8 )
  {
    v16 = -1073741637LL;
    WdLogSingleEntry2(4LL, this, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
    v17 = v7;
LABEL_25:
    WdLogSingleEntry3(2LL, this, v17, v16);
    WdLogGlobalForLineNumber = 2559;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddWaitForVertical"
                "BlankEvent (ntStatus = 0x%I64x).",
      (__int64)this,
      v17,
      v16,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v15 = v39 == 0;
LABEL_26:
    if ( !v15 )
    {
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_28;
    }
    return 3221226537LL;
  }
  if ( (unsigned int)v7 >= *(_DWORD *)(v8 + 96) )
  {
    v16 = -1073741811LL;
    v17 = v7;
    WdLogSingleEntry2(2LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 8833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  if ( this )
    _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  if ( v47 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v45, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v9 = v46;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v46 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v46 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
      KeWaitForSingleObject((char *)v46 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v46, 0LL);
    v9 = v46;
  }
  v48 = 0LL;
  v47 = 1;
  if ( *((_DWORD *)v9 + 50) != 1 )
    goto LABEL_71;
  if ( v44 != v46 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v43, a5);
    if ( *((_DWORD *)v44 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v43);
LABEL_71:
      COREACCESS::Release((COREACCESS *)v45);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
      return 3221226166LL;
    }
  }
  v42[1] = 1;
  if ( !*((_QWORD *)this + 395) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2578;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      2578LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = 0;
  v12 = 0;
  if ( !*((_QWORD *)this + 395) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10648;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
  }
  v13 = *((_QWORD *)this + 395);
  if ( !v13 )
    goto LABEL_23;
  if ( (unsigned int)v7 >= *(_DWORD *)(v13 + 96) )
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
  if ( !*(_BYTE *)(*(_QWORD *)(v13 + 128) + 4024 * v7 + 760) )
  {
LABEL_23:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v15 = v39 == 0;
    goto LABEL_26;
  }
  if ( *((_QWORD *)this + 396) )
  {
    v20 = -(*((_DWORD *)this + 754) & 0x10);
    v21 = (*((_DWORD *)this + 754) & 0x10) != 0 ? (unsigned int)v7 : 0;
    if ( (unsigned int)v21 < 0x10 )
    {
      v22 = _InterlockedIncrement((volatile signed __int32 *)this + v21 + 798);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        Alertable = v22;
        WaitMode = v20 != 0 ? v7 : 0;
        McTemplateK0pqq_EtwWriteTransfer(v21, (__int64)&VSyncWaiterChange);
      }
    }
    v11 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 736LL)
                                                                       + 8LL)
                                                           + 568LL))(
           *(_QWORD *)(*((_QWORD *)this + 396) + 744LL),
           (unsigned int)v7) )
    {
      goto LABEL_40;
    }
    v30 = *((_QWORD *)this + 396);
    v31 = *(_QWORD *)(*(_QWORD *)(v30 + 736) + 8LL);
    v32 = *(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, signed __int32))(v31 + 576);
    LOBYTE(v31) = 1;
    if ( v32(*(_QWORD *)(v30 + 744), 1LL, v31, (unsigned int)v7, WaitMode, Alertable) >= 0 )
    {
      v12 = 1;
      goto LABEL_40;
    }
    DXGADAPTER::DecrementVSyncWaiter(this, v7);
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2623;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCddWaitForVerticalBlankEvent failed to enable VSync",
      2623LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_28:
      if ( !v18 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return 3221226537LL;
    }
    return 3221226537LL;
  }
  v29 = *(_QWORD *)(*((_QWORD *)this + 395) + 464LL);
  if ( v29 )
    BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v29 + 8) + 3040 * v7));
LABEL_40:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v42);
  Timeout.QuadPart = -800000LL;
  v23 = *((_QWORD *)this + 395);
  v24 = *(_QWORD *)(v23 + 16);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v24 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7588;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceSharedOwner()", 7588LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(Object, 0, sizeof(Object));
  if ( !(_DWORD)v6 )
    goto LABEL_44;
  if ( Src )
  {
    if ( (unsigned int)v6 < 0x3F )
    {
      memmove(Object, Src, 8 * v6);
LABEL_44:
      Object[v6] = *(PVOID *)(*(_QWORD *)(v23 + 128) + 4024 * v7 + 904);
      if ( (unsigned int)(v6 + 1) > 0x40 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7618;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Count <= _countof(Objects)", 7618LL, 0LL, 0LL, 0LL, 0LL);
      }
      v26 = KeWaitForMultipleObjects(v6 + 1, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      goto LABEL_47;
    }
    v26 = -1073741811;
    WdLogSingleEntry1(2LL);
    v34 = L"Invalid number of wait objects in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7605;
  }
  else
  {
    v26 = -1073741811;
    WdLogSingleEntry1(2LL);
    v34 = L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x";
    WdLogGlobalForLineNumber = 7598;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v34, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_47:
  if ( v11 )
  {
    if ( !*((_QWORD *)this + 396) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2659;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsRenderAdapter()",
        2659LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v27 = (*((_DWORD *)this + 754) & 0x10) != 0 ? (unsigned int)v7 : 0;
    if ( (unsigned int)v27 < 0x10 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)this + v27 + 798) < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v27 + 798), 0LL);
        WdLogGlobalForLineNumber = 2783;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0pqq_EtwWriteTransfer(v25, (__int64)&VSyncWaiterChange);
    }
  }
  if ( v12 )
  {
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL) < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2686;
    }
    else if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(
                     *(_QWORD *)(*((_QWORD *)this + 396) + 736LL),
                     *(_QWORD *)(*((_QWORD *)this + 396) + 744LL),
                     1LL,
                     0,
                     v7) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2681;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
  return v26;
}

/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x140406624
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1401B5BF0 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1401A370C (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _KEVENT **a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rsi
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v10; // rdi
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  struct DXGADAPTER *v15; // r12
  unsigned __int64 v16; // rdx
  struct DXGADAPTER *v17; // rsi
  int PairingAdapters; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  struct DXGADAPTER *v21; // r15
  ADAPTER_DISPLAY **v22; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // esi
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  char v33; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v34; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v36; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v37[2]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v38; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  struct _KEVENT **v40; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v42[144]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a3;
  v40 = a4;
  v35 = a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2192);
  v7 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7027;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    v12 = v33 == 0;
LABEL_41:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 102) & 4) == 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 7035;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return 3221225506LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v37, v6, (struct _KTHREAD **)Current, &v34, 1);
  v15 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 7045;
LABEL_16:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v16);
    goto LABEL_7;
  }
  v17 = 0LL;
  if ( (_DWORD)v5 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v5, v10, &v36);
    v7 = v36;
    if ( !v36 )
    {
      WdLogSingleEntry2(3LL, v15, v5);
      WdLogGlobalForLineNumber = 7060;
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
      goto LABEL_16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v36 + 8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
    v17 = v7;
  }
  v34 = v7;
  v38 = 0LL;
  v36 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v15, v4, &v38, &v39, &v36, &v41, 0);
  v19 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v15, v4, PairingAdapters);
    WdLogGlobalForLineNumber = 7086;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)v15,
      v4,
      v19,
      0LL,
      0LL);
    if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    if ( v37[0] )
      DXGADAPTER::ReleaseReference(v37[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return (unsigned int)v19;
  }
  v21 = v38;
  v22 = (ADAPTER_DISPLAY **)v36;
  if ( !v38 || !v36 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7092;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7092LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v35 >= *((_DWORD *)v22[395] + 24) )
  {
    v23 = v35;
    WdLogSingleEntry2(2LL, v35, -1073741811LL);
    WdLogGlobalForLineNumber = 7098;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
LABEL_40:
    v12 = v33 == 0;
    goto LABEL_41;
  }
  if ( v17 && (v21 != *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) || v22 != *((ADAPTER_DISPLAY ***)v7 + 237)) )
  {
    WdLogSingleEntry2(3LL, v15, v5);
    WdLogGlobalForLineNumber = 7109;
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    goto LABEL_40;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v21, (struct DXGADAPTER *const)v22);
  DXGADAPTER::ReleaseReference(v21);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v22);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
  if ( v26 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    if ( v7 && _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v7 + 2), v7);
    if ( v37[0] )
      DXGADAPTER::ReleaseReference(v37[0]);
    goto LABEL_62;
  }
  if ( !*((_QWORD *)v21 + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7127;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7127LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v22[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7128;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7128LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !(_DWORD)v5 || *((_DWORD *)v7 + 152) == 1 )
  {
    ADAPTER_DISPLAY::GetVBlankEvent(v22[395], v35, v40);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v42);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v29);
LABEL_62:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit);
    return (unsigned int)v26;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v37, v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
  return 3221226166LL;
}

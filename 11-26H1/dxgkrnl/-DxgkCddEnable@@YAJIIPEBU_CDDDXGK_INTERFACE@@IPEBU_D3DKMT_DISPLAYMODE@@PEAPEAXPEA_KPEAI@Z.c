/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1403FB6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x140038C9C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140063664 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400701E8 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1401A3590 (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403FBC3C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 CurrentProcess; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  bool v22; // zf
  volatile signed __int32 *v23; // rdi
  unsigned int v24; // eax
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdi
  _QWORD *v31; // rsi
  ADAPTER_DISPLAY *v32; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v34; // rcx
  unsigned int CddShadowPitch; // eax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char v41; // [rsp+60h] [rbp-A0h]
  unsigned int v42[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v43; // [rsp+70h] [rbp-90h]
  struct _CDDDXGK_INTERFACE *v44; // [rsp+78h] [rbp-88h]
  char v45[8]; // [rsp+80h] [rbp-80h] BYREF
  char v46[64]; // [rsp+88h] [rbp-78h] BYREF
  char v47[88]; // [rsp+C8h] [rbp-38h] BYREF

  *(_QWORD *)v42 = a6;
  v43 = a8;
  v44 = a3;
  v10 = (unsigned int)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 451;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(OLD_MODE_CHANGE & Win32kCommand) == 0",
      451LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    }
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  v16 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v15);
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 460;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v20,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v22 = v41 == 0;
    goto LABEL_22;
  }
  v23 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v24 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v24 < *(_DWORD *)(v16 + 296)
    && (v25 = *(_DWORD *)(*(_QWORD *)(v16 + 280) + 16LL * v24 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v16 + 280) + 16LL * v24 + 8) & 0x60))
    && (v25 & 0x2000) == 0
    && (v25 & 0x1F) != 0 )
  {
    v26 = *(_QWORD *)(v16 + 280);
    if ( (*(_BYTE *)(v26 + 16LL * v24 + 8) & 0x1F) == 3 )
    {
      v27 = *(_QWORD *)(v26 + 16LL * v24);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v27 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v27 = 0LL;
  }
  _InterlockedDecrement(v23 + 4);
  ExReleasePushLockSharedEx(v23, 0LL);
  KeLeaveCriticalRegion();
  if ( !v27 )
  {
    v18 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, v16);
    WdLogGlobalForLineNumber = 469;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v10,
      v16,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v22 = v41 == 0;
    goto LABEL_22;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v27, 1, v28, 0);
  v29 = COREDEVICEACCESS::AcquireExclusive((__int64)v45, 2LL);
  v18 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry3(4LL, v29, v27, v16);
    WdLogGlobalForLineNumber = 480;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v22 = v41 == 0;
LABEL_22:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return v18;
  }
  v30 = *(_QWORD *)(v27 + 1896);
  if ( !v30 || !*(_QWORD *)(v30 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 487;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      487LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)(v27 + 1896) != *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) )
  {
    v31 = *(_QWORD **)v42;
    if ( !**(_QWORD **)v42 && (*(_BYTE *)(v27 + 1917) & 1) == 0 )
    {
      if ( !a7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 505;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(ppDoDShadowSession != NULL) && (pDoDShadowSize != NULL)",
          505LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v30 + 3160), a4) )
      {
        v32 = *(ADAPTER_DISPLAY **)(v30 + 3160);
        v42[0] = 0;
        DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v32, a4, v42);
        v34 = v42[0];
        if ( *a7 > v42[0] )
        {
          if ( DoDCddShadowSection )
            ObfDereferenceObject(DoDCddShadowSection);
        }
        else
        {
          *v31 = DoDCddShadowSection;
          *a7 = v34;
        }
      }
    }
  }
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v30 + 3160), a4);
  *v43 = CddShadowPitch;
  ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v30 + 3160), a4, 1u);
  ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v30 + 3160), a4, v44);
  COREACCESS::~COREACCESS((COREACCESS *)v47, v36);
  COREACCESS::~COREACCESS((COREACCESS *)v46, v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit);
  return 0LL;
}

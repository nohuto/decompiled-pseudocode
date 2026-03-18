/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1401C4730
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1401C1B94 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(_DWORD *Src)
{
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v3; // r14
  bool v4; // bl
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  struct DXGDEVICE *v7; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  ADAPTER_RENDER **v13; // r14
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 CurrentProcess; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-148h]
  int v26; // [rsp+50h] [rbp-128h] BYREF
  __int64 v27; // [rsp+58h] [rbp-120h]
  char v28; // [rsp+60h] [rbp-118h]
  int v29; // [rsp+68h] [rbp-110h] BYREF
  char v30[8]; // [rsp+70h] [rbp-108h] BYREF
  void *Srca[2]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v32; // [rsp+88h] [rbp-F0h]
  struct DXGDEVICE *v33[3]; // [rsp+90h] [rbp-E8h] BYREF
  _DWORD *v34; // [rsp+A8h] [rbp-D0h]
  _BYTE v35[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v34 = Src;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2093);
  Current = DXGPROCESS::GetCurrent();
  v3 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7900;
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
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v4 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)Srca = 0LL;
  v32 = 0LL;
  RtlCopyFromUser(Srca, Src, 0x18uLL);
  if ( (unsigned int)(HIDWORD(Srca[0]) - 1) > 6 )
  {
    v20 = HIDWORD(Srca[0]);
    CurrentProcess = PsGetCurrentProcess(HIDWORD(Srca[0]));
    WdLogSingleEntry3(2LL, v20, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 7937;
    v22 = HIDWORD(Srca[0]);
    v25 = PsGetCurrentProcess(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v22,
      -1073741811LL,
      v25,
      0LL,
      0LL);
    goto LABEL_34;
  }
  v5 = 120 * HIDWORD(Srca[0]);
  if ( 120 * (unsigned __int64)HIDWORD(Srca[0]) > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7945;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225621LL;
  }
  else
  {
    v6 = 120LL * HIDWORD(Srca[0]);
    if ( !is_mul_ok(HIDWORD(Srca[0]), 0x78uLL) )
      v6 = -1LL;
    v7 = (struct DXGDEVICE *)operator new[](v6, 0x4B677844u, 256LL);
    v9 = v7;
    v33[2] = v7;
    if ( v7 )
    {
      RtlCopyFromUser(v7, Srca[1], v5);
      Srca[1] = v9;
      v33[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v30, (unsigned int)Srca[0], v3, v33);
      v13 = (ADAPTER_RENDER **)v33[0];
      if ( !v33[0] )
      {
        WdLogSingleEntry2(2LL, LODWORD(Srca[0]), -1073741811LL);
        WdLogGlobalForLineNumber = 7987;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
          LODWORD(Srca[0]),
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v30);
        goto LABEL_34;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v33[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v13, 2, v14, 0);
      v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v29 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                    v13,
                    HIDWORD(Srca[0]),
                    (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)Srca[1],
                    v4,
                    &v29) >= 0 )
          RtlWriteULongToUser(v34 + 4, v29);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(3LL, v13, v15);
        WdLogGlobalForLineNumber = 8004;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
        return v16;
      }
    }
    else
    {
      v10 = PsGetCurrentProcess(v8);
      WdLogSingleEntry2(3LL, -1073741801LL, v10);
      WdLogGlobalForLineNumber = 7958;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
  }
}

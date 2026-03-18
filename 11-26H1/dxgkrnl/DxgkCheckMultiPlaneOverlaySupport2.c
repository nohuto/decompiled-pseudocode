/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1401C4E00
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
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1401C19CC (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(void *Src)
{
  struct DXGPROCESS *Current; // rax
  bool v3; // bl
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  ADAPTER_RENDER **v12; // r14
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 CurrentProcess; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-158h]
  int v25; // [rsp+50h] [rbp-138h] BYREF
  __int64 v26; // [rsp+58h] [rbp-130h]
  char v27; // [rsp+60h] [rbp-128h]
  int v28; // [rsp+68h] [rbp-120h] BYREF
  struct DXGPROCESS *v29; // [rsp+70h] [rbp-118h] BYREF
  struct DXGDEVICE *v30[2]; // [rsp+78h] [rbp-110h] BYREF
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v31; // [rsp+88h] [rbp-100h] BYREF
  void *v32; // [rsp+90h] [rbp-F8h]
  unsigned int v33[4]; // [rsp+98h] [rbp-F0h] BYREF
  void *Srca[2]; // [rsp+A8h] [rbp-E0h]
  _BYTE v35[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2093);
  Current = DXGPROCESS::GetCurrent();
  v29 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9876;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v3 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v33 = 0LL;
  *(_OWORD *)Srca = 0LL;
  RtlCopyFromUser(v33, Src, 0x20uLL);
  if ( v33[2] - 1 > 6 )
  {
    v19 = v33[2];
    CurrentProcess = PsGetCurrentProcess(v33[2]);
    WdLogSingleEntry3(2LL, v19, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 9913;
    v21 = v33[2];
    v24 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport2 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v21,
      -1073741811LL,
      v24,
      0LL,
      0LL);
    goto LABEL_34;
  }
  v4 = (unsigned __int64)v33[2] << 7;
  if ( v4 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 9921;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return 3221225621LL;
  }
  else
  {
    v5 = (unsigned __int64)v33[2] << 7;
    if ( !is_mul_ok(v33[2], 0x80uLL) )
      v5 = -1LL;
    v6 = (void *)operator new[](v5, 0x4B677844u, 256LL);
    v8 = v6;
    v32 = v6;
    if ( v6 )
    {
      RtlCopyFromUser(v6, Srca[0], (unsigned int)v4);
      Srca[0] = v8;
      v30[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v33[1], (struct _KTHREAD **)v29, v30);
      v12 = (ADAPTER_RENDER **)v30[0];
      if ( !v30[0] )
      {
        WdLogSingleEntry2(2LL, v33[1], -1073741811LL);
        WdLogGlobalForLineNumber = 9963;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
          v33[1],
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
        goto LABEL_34;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v30[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v12, 2, v13, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
      v15 = v14;
      if ( v14 >= 0 )
      {
        v28 = 0;
        v31.0 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                    v12,
                    v33[2],
                    (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)Srca[0],
                    v3,
                    &v28,
                    &v31) >= 0 )
        {
          RtlWriteULongToUser((_DWORD *)Src + 6, v28);
          RtlWriteULongToUser((_DWORD *)Src + 7, v31.Value);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(3LL, v12, v14);
        WdLogGlobalForLineNumber = 9980;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
        if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
        return v15;
      }
    }
    else
    {
      v9 = PsGetCurrentProcess(v7);
      WdLogSingleEntry2(3LL, -1073741801LL, v9);
      WdLogGlobalForLineNumber = 9934;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
  }
}

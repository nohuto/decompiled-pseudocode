/*
 * XREFs of DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1401C54F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckSinglePlaneForMultiPlaneOverlaySupport(void *Src)
{
  struct _KTHREAD **Current; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  DXGDEVICE *v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // r9
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rcx
  int *v25; // [rsp+30h] [rbp-1E8h]
  int *v26; // [rsp+30h] [rbp-1E8h]
  int *v27; // [rsp+30h] [rbp-1E8h]
  int v28; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-1C0h]
  char v30; // [rsp+60h] [rbp-1B8h]
  int v31; // [rsp+68h] [rbp-1B0h] BYREF
  void *v32; // [rsp+70h] [rbp-1A8h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-1A0h] BYREF
  unsigned int v34[4]; // [rsp+80h] [rbp-198h] BYREF
  void *Srca[2]; // [rsp+90h] [rbp-188h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v36[2]; // [rsp+A0h] [rbp-178h]
  struct DXGDEVICE *v37[2]; // [rsp+B0h] [rbp-168h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v38; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-150h] BYREF
  void *v40[2]; // [rsp+D8h] [rbp-140h]
  _QWORD v41[12]; // [rsp+F0h] [rbp-128h] BYREF
  _BYTE v42[160]; // [rsp+150h] [rbp-C8h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2093);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10914;
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
    goto LABEL_17;
  }
  *(_OWORD *)v34 = 0LL;
  *(_OWORD *)Srca = 0LL;
  *(_OWORD *)v36 = 0LL;
  RtlCopyFromUser(v34, Src, 0x30uLL);
  if ( v34[2] != 1 )
  {
    v5 = v34[2];
    CurrentProcess = PsGetCurrentProcess(v4);
    v3 = -1073741811;
    WdLogSingleEntry3(2LL, v5, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 10940;
    v7 = v34[2];
    v25 = (int *)PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v7,
      -1073741811LL,
      (__int64)v25,
      0LL,
      0LL);
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    }
    return v3;
  }
  if ( LODWORD(Srca[1]) )
  {
    v9 = (unsigned int)Srca[1];
    v10 = PsGetCurrentProcess(v4);
    v3 = -1073741811;
    WdLogSingleEntry3(2LL, v9, -1073741811LL, v10);
    WdLogGlobalForLineNumber = 10952;
    v11 = LODWORD(Srca[1]);
    v26 = (int *)PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport post composition count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v11,
      -1073741811LL,
      (__int64)v26,
      0LL,
      0LL);
    goto LABEL_17;
  }
  v32 = 0LL;
  v39 = 0LL;
  *(_OWORD *)v40 = 0LL;
  memset(v41, 0, 0x58uLL);
  RtlCopyFromUser(&v32, Srca[0], 8uLL);
  RtlCopyFromUser(&v39, v32, 0x20uLL);
  RtlCopyFromUser(v41, v40[1], 0x58uLL);
  HIDWORD(v41[7]) = 0;
  v41[8] = 0LL;
  Srca[0] = &v32;
  v32 = &v39;
  v40[1] = v41;
  v36[0] = 0LL;
  if ( (v41[0] & 4) == 0 )
  {
    v14 = v41[0];
    v15 = PsGetCurrentProcess(v13);
    v3 = -1073741811;
    WdLogSingleEntry3(2LL, v14, -1073741811LL, v15);
    WdLogGlobalForLineNumber = 11000;
    v16 = LODWORD(v41[0]);
    v27 = (int *)PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane flag value (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v16,
      -1073741811LL,
      (__int64)v27,
      0LL,
      0LL);
    goto LABEL_17;
  }
  v37[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, v34[1], Current, v37);
  v18 = v37[0];
  if ( !v37[0] )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, v34[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11010;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v34[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_16:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v37[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v18, 2, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42, 0LL);
  v3 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(3LL, v18, v22);
    WdLogGlobalForLineNumber = 11025;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    goto LABEL_16;
  }
  v31 = 0;
  v38.0 = 0;
  v23 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(
          v18,
          v34[2],
          (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)Srca[0],
          (unsigned int)Srca[1],
          v36[0],
          0,
          &v31,
          &v38);
  if ( v23 >= 0 )
  {
    RtlWriteULongToUser((_DWORD *)Src + 10, v31);
    RtlWriteULongToUser((_DWORD *)Src + 11, v38.Value);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return (unsigned int)v23;
}

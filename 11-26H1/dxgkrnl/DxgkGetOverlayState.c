/*
 * XREFs of DxgkGetOverlayState @ 0x1401F1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140037E00 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140058830 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x14007FBCC (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x14007FC00 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x14007FC1C (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x14007FC64 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1401F021C (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetOverlayState(char *Src)
{
  struct DXGPROCESS *Current; // rsi
  int OverlayState; // ebx
  struct ADAPTER_RENDER **v4; // rdi
  D3DKMT_HANDLE hOverlay; // r9d
  D3DKMT_HANDLE v6; // edx
  unsigned int v8; // r8d
  struct DXGOVERLAY *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-E0h]
  char v19; // [rsp+60h] [rbp-D8h]
  _BYTE v20[8]; // [rsp+68h] [rbp-D0h] BYREF
  DXGDEVICE *v21; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v22[16]; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v24[24]; // [rsp+98h] [rbp-A0h] BYREF
  _D3DKMT_GETOVERLAYSTATE Srca; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v26[80]; // [rsp+C0h] [rbp-78h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2057);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1018;
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
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return (unsigned int)OverlayState;
  }
  *(_QWORD *)&Srca.hDevice = 0LL;
  *(_DWORD *)&Srca.OverlayEnabled = 0;
  RtlCopyFromUser(&Srca, Src, 0xCuLL);
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v20, Srca.hDevice, (struct _KTHREAD **)Current, &v21);
  v4 = (struct ADAPTER_RENDER **)v21;
  if ( !v21 )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry2(2LL, Srca.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 1043;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Srca.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_25:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
    goto LABEL_26;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v22, v21);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v24, (struct _KTHREAD **)Current);
  hOverlay = Srca.hOverlay;
  v6 = (Srca.hOverlay >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)Current + 74)
    && (v8 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8), Srca.hOverlay >> 30 == ((v8 >> 5) & 3))
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0 )
  {
    v10 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v10 + 16LL * v6 + 8) & 0x1F) == 6 )
    {
      v9 = *(struct DXGOVERLAY **)(v10 + 16LL * v6);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v9 = 0LL;
      hOverlay = Srca.hOverlay;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry2(3LL, hOverlay, -1073741811LL);
    WdLogGlobalForLineNumber = 1067;
LABEL_23:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
LABEL_24:
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v22);
    goto LABEL_25;
  }
  if ( v4 != *((struct ADAPTER_RENDER ***)v9 + 2) )
  {
    OverlayState = -1073741811;
    WdLogSingleEntry3(3LL, hOverlay, Srca.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 1077;
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v26, v9);
  v14 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v26);
  if ( v14 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1092;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 1092LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v23, v4[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    OverlayState = DXGOVERLAY::GetOverlayState(v9, &Srca);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    if ( OverlayState >= 0 )
      RtlCopyToUser(Src + 8, &Srca.OverlayEnabled, 1uLL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v26, v16);
    goto LABEL_24;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v26, v13);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v14;
}

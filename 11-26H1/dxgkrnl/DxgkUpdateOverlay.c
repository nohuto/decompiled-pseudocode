/*
 * XREFs of DxgkUpdateOverlay @ 0x1401F23C0
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
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140058830 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x14007FBCC (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x14007FC00 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x14007FC1C (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x14007FC64 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1401F0994 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUpdateOverlay(void *Src)
{
  struct DXGPROCESS *Current; // rdi
  unsigned int updated; // ebx
  struct ADAPTER_RENDER **v4; // rsi
  D3DKMT_HANDLE hOverlay; // r9d
  D3DKMT_HANDLE v6; // edx
  int v8; // r8d
  struct DXGOVERLAY *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // [rsp+50h] [rbp-108h] BYREF
  __int64 v18; // [rsp+58h] [rbp-100h]
  char v19; // [rsp+60h] [rbp-F8h]
  _BYTE v20[8]; // [rsp+68h] [rbp-F0h] BYREF
  DXGDEVICE *v21[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v22[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v23[32]; // [rsp+90h] [rbp-C8h] BYREF
  _D3DKMT_UPDATEOVERLAY v24; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v25[80]; // [rsp+F0h] [rbp-68h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2023);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 699;
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
    return updated;
  }
  memset(&v24, 0, sizeof(v24));
  RtlCopyFromUser(&v24, Src, 0x40uLL);
  v21[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v20, v24.hDevice, (struct _KTHREAD **)Current, v21);
  v4 = (struct ADAPTER_RENDER **)v21[0];
  if ( !v21[0] )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v24.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 724;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v24.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_25:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
    goto LABEL_26;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21, v21[0]);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, (struct _KTHREAD **)Current);
  hOverlay = v24.hOverlay;
  v6 = (v24.hOverlay >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)Current + 74)
    && (v8 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8),
        ((v24.hOverlay >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8) & 0x60))
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
      hOverlay = v24.hOverlay;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, hOverlay, -1073741811LL);
    WdLogGlobalForLineNumber = 748;
LABEL_23:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
LABEL_24:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
    goto LABEL_25;
  }
  if ( v4 != *((struct ADAPTER_RENDER ***)v9 + 2) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, hOverlay, v24.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 758;
    goto LABEL_23;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)v25, v9);
  v14 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)v25);
  if ( v14 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 773;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 773LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v22, v4[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    updated = DXGOVERLAY::UpdateOverlay(v9, &v24);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v25, v16);
    goto LABEL_24;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)v25, v13);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v14;
}

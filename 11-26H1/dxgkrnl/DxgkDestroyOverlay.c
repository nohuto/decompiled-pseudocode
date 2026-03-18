/*
 * XREFs of DxgkDestroyOverlay @ 0x1401F13A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140058830 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x14007FC64 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1401C1FDC (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyOverlay(void *Src)
{
  struct DXGPROCESS *Current; // rbx
  struct ADAPTER_RENDER **v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  int v10; // r8d
  struct DXGOVERLAY ***v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // edx
  int v18; // r8d
  unsigned int v19[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  char v22; // [rsp+68h] [rbp-A0h]
  _BYTE v23[8]; // [rsp+70h] [rbp-98h] BYREF
  DXGDEVICE *v24[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v26[24]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[64]; // [rsp+B0h] [rbp-58h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2025);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 909;
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
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v19 = 0LL;
  RtlCopyFromUser(v19, Src, 8uLL);
  v24[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v23, v19[0], (struct _KTHREAD **)Current, v24);
  v3 = (struct ADAPTER_RENDER **)v24[0];
  if ( !v24[0] )
  {
    WdLogSingleEntry2(2LL, v19[0], -1073741811LL);
    WdLogGlobalForLineNumber = 934;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v19[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_29:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
    goto LABEL_30;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24, v24[0]);
  COREACCESS::COREACCESS((COREACCESS *)v27, *((struct DXGADAPTER *const *)v3[2] + 2));
  COREACCESS::AcquireShared((COREACCESS *)v27, 0LL);
  if ( *(_DWORD *)(*((_QWORD *)v3[2] + 2) + 200LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26, Current);
    v7 = v19[1];
    v8 = (v19[1] >> 6) & 0xFFFFFF;
    if ( v8 < *((_DWORD *)Current + 74)
      && (v10 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v8 + 8),
          ((v19[1] >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v8 + 8) & 0x60))
      && (v10 & 0x2000) == 0
      && (v10 & 0x1F) != 0 )
    {
      v12 = *((_QWORD *)Current + 35);
      if ( (*(_BYTE *)(v12 + 16LL * v8 + 8) & 0x1F) == 6 )
      {
        v11 = *(struct DXGOVERLAY ****)(v12 + 16LL * v8);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v11 = 0LL;
        v7 = v19[1];
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      if ( v3 == v11[2] )
      {
        if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v3) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 984;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDevice->IsSupportOverlay()",
            984LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = v19[1];
        }
        v16 = (v15 >> 6) & 0xFFFFFF;
        if ( v16 < *((_DWORD *)Current + 74) )
        {
          v18 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v16 + 8);
          if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v16 + 8) & 0x60)
            && (v18 & 0x2000) == 0
            && (v18 & 0x1F) != 0 )
          {
            *(_DWORD *)(16LL * v16 + *((_QWORD *)Current + 35) + 8) |= 0x2000u;
          }
        }
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26);
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v25, v3[2]);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        DXGDEVICE::DestroyOverlay((DXGDEVICE *)v3, v11);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
        goto LABEL_10;
      }
      WdLogSingleEntry3(3LL, v7, v19[0], -1073741811LL);
      WdLogGlobalForLineNumber = 979;
    }
    else
    {
      WdLogSingleEntry2(3LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 969;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26);
    COREACCESS::~COREACCESS((COREACCESS *)v27, v13);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
    goto LABEL_29;
  }
LABEL_10:
  COREACCESS::~COREACCESS((COREACCESS *)v27, v4);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
  return 0LL;
}

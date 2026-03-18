/*
 * XREFs of DxgkCreateOverlay @ 0x1401F0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x140058830 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x14007FC64 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401C1E98 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateOverlay(void **Src)
{
  struct DXGPROCESS *Current; // r14
  int v3; // edi
  struct ADAPTER_RENDER **v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // rcx
  void *v10; // rax
  int v11; // [rsp+50h] [rbp-168h] BYREF
  __int64 v12; // [rsp+58h] [rbp-160h]
  char v13; // [rsp+60h] [rbp-158h]
  _BYTE v14[8]; // [rsp+68h] [rbp-150h] BYREF
  DXGDEVICE *v15; // [rsp+70h] [rbp-148h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v17[24]; // [rsp+88h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY Srca; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v19[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2022);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 549;
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
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
    if ( v13 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v3;
  }
  memset(&Srca, 0, sizeof(Srca));
  RtlCopyFromUser(&Srca, Src, 0x48uLL);
  v15 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v14, Srca.hDevice, (struct _KTHREAD **)Current, &v15);
  v4 = (struct ADAPTER_RENDER **)v15;
  if ( !v15 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, Srca.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 574;
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
LABEL_9:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v14);
    goto LABEL_10;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16, v15);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v4, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19, 0LL);
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 224LL))() )
    {
      if ( Srca.OverlayInfo.PrivateDriverDataSize && Srca.OverlayInfo.pPrivateDriverData )
      {
        v10 = (void *)operator new[](Srca.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, 256LL);
        Srca.OverlayInfo.pPrivateDriverData = v10;
        if ( !v10 )
        {
          v8 = -1073741801;
          WdLogSingleEntry3(3LL, v4, Srca.OverlayInfo.PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 611;
          goto LABEL_15;
        }
        RtlCopyFromUser(v10, Src[6], Srca.OverlayInfo.PrivateDriverDataSize);
      }
      else
      {
        Srca.OverlayInfo.PrivateDriverDataSize = 0;
        Srca.OverlayInfo.pPrivateDriverData = 0LL;
      }
      if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 638;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 638LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v17, v4[2]);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v3 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v4, &Srca);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Srca.OverlayInfo.pPrivateDriverData);
      Srca.OverlayInfo.pPrivateDriverData = 0LL;
      if ( v3 >= 0 )
        RtlCopyToUser(Src + 8, &Srca.hOverlay, 4uLL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    }
    else
    {
      v3 = -1073741790;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 594;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v19);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
    goto LABEL_9;
  }
LABEL_15:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v19);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}

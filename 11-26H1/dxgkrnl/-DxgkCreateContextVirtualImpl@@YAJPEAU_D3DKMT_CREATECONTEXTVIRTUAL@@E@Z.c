/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1403A6E48
 * Callers:
 *     DxgkCreateContextVirtualInternal @ 0x1401C1694 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402239D0 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateContextVirtual @ 0x1403A6E30 (DxgkCreateContextVirtual.c)
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
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x140054CC8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1403A61F0 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1403A76CC (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *Src, char a2)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v6; // r15
  __int64 v7; // rsi
  unsigned int HighestBitPos; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  ADAPTER_RENDER *v13; // r11
  unsigned int v14; // r12d
  void *v15; // rsi
  __int64 v16; // r9
  int v17; // r14d
  void *v18; // rax
  D3DKMT_HANDLE v19; // ecx
  ADAPTER_RENDER **v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  ADAPTER_RENDER **v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+50h] [rbp-158h] BYREF
  __int64 v27; // [rsp+58h] [rbp-150h]
  char v28; // [rsp+60h] [rbp-148h]
  struct DXGDEVICE *v29; // [rsp+68h] [rbp-140h] BYREF
  char *v30; // [rsp+70h] [rbp-138h]
  struct _D3DDDI_CREATECONTEXTFLAGS v31[4]; // [rsp+78h] [rbp-130h] BYREF
  void *Srca[2]; // [rsp+88h] [rbp-120h]
  __int64 v33; // [rsp+98h] [rbp-110h]
  struct DXGCONTEXT *v34; // [rsp+A0h] [rbp-108h] BYREF
  struct DXGDEVICE *v35; // [rsp+A8h] [rbp-100h] BYREF
  void *v36; // [rsp+B0h] [rbp-F8h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v37; // [rsp+B8h] [rbp-F0h]
  _BYTE v38[16]; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v39[160]; // [rsp+D0h] [rbp-D8h] BYREF

  v37 = Src;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 223;
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
    goto LABEL_47;
  }
  *(_OWORD *)&v31[0].0 = 0LL;
  *(_OWORD *)Srca = 0LL;
  v33 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(v31, Src, 0x28uLL);
  }
  else
  {
    *(_OWORD *)&v31[0].0 = *(_OWORD *)&Src->hDevice;
    *(_OWORD *)Srca = *(_OWORD *)&Src->pPrivateDriverData;
    v33 = *(_QWORD *)&Src->hContext;
  }
  if ( !g_OSTestSigningEnabled && ((*(_BYTE *)&v31[3].0 & 0x20) != 0 || (*(_BYTE *)&v31[3].0 & 0x40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess and TestContext can be used only with testsigning",
      253LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  v35 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v31[0].Value, Current, &v35);
  v6 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(2LL, v31[0].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 264;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v31[0].Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_53;
  }
  v30 = (char *)v35 + 16;
  v7 = *(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL);
  HighestBitPos = GetHighestBitPos(v31[2].Value);
  if ( HighestBitPos >= *(_DWORD *)(v7 + 296) )
  {
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 278;
LABEL_63:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
LABEL_47:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( v31[1].Value >= *(unsigned __int16 *)(352LL * HighestBitPos + *(_QWORD *)(v7 + 3032)) )
  {
    WdLogSingleEntry2(3LL, v31[1].Value, -1073741811LL);
    WdLogGlobalForLineNumber = 286;
    goto LABEL_53;
  }
  if ( GetBitCount(v9) > 1 )
  {
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 295;
    goto LABEL_63;
  }
  if ( (*(_BYTE *)&v31[3].0 & 8) == 0
    && ((*(_DWORD *)(v7 + 2508) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v13, v12, v11)) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 306;
    goto LABEL_53;
  }
  v14 = *(_DWORD *)(v7 + 2320);
  LODWORD(v34) = v14;
  if ( v14 >= 0x7008 && (v31[3].Value & 0xFFFFFF80) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 316;
LABEL_53:
    v24 = (ADAPTER_RENDER **)v29;
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v24[2], (struct DXGDEVICE *)v24);
    goto LABEL_47;
  }
  v15 = 0LL;
  v36 = 0LL;
  if ( Srca[0] )
  {
    if ( LODWORD(Srca[1]) )
      goto LABEL_22;
    goto LABEL_62;
  }
  if ( LODWORD(Srca[1]) )
  {
LABEL_62:
    WdLogSingleEntry3(3LL, Srca[0], LODWORD(Srca[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 330;
    goto LABEL_63;
  }
LABEL_22:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v6);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v6, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
  if ( v17 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
LABEL_40:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v17;
  }
  if ( !Srca[0] )
  {
LABEL_27:
    v34 = 0LL;
    v17 = DXGDEVICE::CreateContext(
            v6,
            &v34,
            v31[1].Value,
            v31[2].Value,
            v31[3],
            v15,
            (unsigned int)Srca[1],
            SHIDWORD(Srca[1]),
            1u);
    if ( v17 >= 0 )
    {
      v19 = *((_DWORD *)v34 + 6);
      if ( a2 )
      {
        RtlWriteULongToUser(&Src->hContext, v19);
        if ( LODWORD(Srca[1]) && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)v30 + 16LL)) && v14 >= 0x7008 )
          RtlCopyToUser(Srca[0], v15, LODWORD(Srca[1]));
      }
      else
      {
        Src->hContext = v19;
      }
    }
    if ( v15 != Srca[0] )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    v20 = (ADAPTER_RENDER **)v29;
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v20[2], (struct DXGDEVICE *)v20);
    goto LABEL_40;
  }
  if ( !a2 )
  {
    v15 = Srca[0];
    v36 = Srca[0];
    goto LABEL_27;
  }
  v18 = (void *)operator new[](LODWORD(Srca[1]), 0x4B677844u, 256LL);
  v15 = v18;
  v36 = v18;
  if ( v18 )
  {
    RtlCopyFromUser(v18, Srca[0], LODWORD(Srca[1]));
    goto LABEL_27;
  }
  WdLogSingleEntry3(3LL, v6, LODWORD(Srca[1]), -1073741801LL);
  WdLogGlobalForLineNumber = 355;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
  return 3221225495LL;
}

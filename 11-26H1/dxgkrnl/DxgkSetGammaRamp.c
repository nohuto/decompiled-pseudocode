/*
 * XREFs of DxgkSetGammaRamp @ 0x1401C60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x14005A098 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x14007597C (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1403AA994 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(void *Src)
{
  struct DXGPROCESS *Current; // r12
  unsigned int v3; // ebx
  DXGDEVICE *v5; // rsi
  __int64 v6; // r13
  signed int v7; // edi
  __int64 v8; // r9
  int v9; // eax
  DXGK_GAMMA_RAMP *v10; // rax
  void **v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  int v15; // eax
  char v16; // al
  unsigned int v17; // [rsp+50h] [rbp-118h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v18[4]; // [rsp+58h] [rbp-110h] BYREF
  void *Srca[2]; // [rsp+68h] [rbp-100h]
  DXGDEVICE *v20; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v22[16]; // [rsp+88h] [rbp-E0h] BYREF
  ReferenceCounted *v23; // [rsp+98h] [rbp-D0h]
  _BYTE v24[160]; // [rsp+A0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4365;
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
    return v3;
  }
  *(_OWORD *)v18 = 0LL;
  *(_OWORD *)Srca = 0LL;
  RtlCopyFromUser(v18, Src, 0x20uLL);
  v20 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v21, v18[0], (struct _KTHREAD **)Current, &v20);
  v5 = v20;
  if ( !v20 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)v18[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4390;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      (unsigned int)v18[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_34:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v21);
    return v3;
  }
  v6 = *((_QWORD *)v20 + 237);
  if ( !v6 )
  {
    v3 = -1073741637;
    WdLogSingleEntry2(3LL, (unsigned int)v18[0], -1073741637LL);
    WdLogGlobalForLineNumber = 4400;
    goto LABEL_34;
  }
  v7 = 0;
  v3 = -1073741811;
  if ( v18[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    v7 = (*(_DWORD *)(v6 + 2488) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Srca[1]) != 1536 )
      v7 = -1073741811;
  }
  else if ( v18[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Srca[1]) != 12324 )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    WdLogSingleEntry3(3LL, v18[2], (unsigned int)v18[0], v7);
    WdLogGlobalForLineNumber = 4439;
LABEL_17:
    v3 = v7;
    goto LABEL_34;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22, v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v5, 1, v8, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 3160) + 291LL) )
    v9 = COREDEVICEACCESS::AcquireExclusive((__int64)v24, 1LL);
  else
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    goto LABEL_17;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 3160) + 96LL) != *((_DWORD *)v5 + 476) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4464;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == pDevice->GetNumVidPnSources()",
      4464LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)v5 + 476) <= v18[1] )
  {
    WdLogSingleEntry3(3LL, v5, (unsigned int)v18[1], -1073741811LL);
    WdLogGlobalForLineNumber = 4471;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    goto LABEL_34;
  }
  v10 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, 256LL);
  if ( v10 )
    v11 = (void **)DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v10);
  else
    v11 = 0LL;
  v23 = (ReferenceCounted *)v11;
  if ( !v11 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4484;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    v3 = -1073741801;
    goto LABEL_34;
  }
  LODWORD(v12) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v11, v18[2], 0LL);
  if ( (int)v12 < 0 )
  {
    ReferenceCounted::Release((ReferenceCounted *)v11);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    v3 = v12;
    goto LABEL_34;
  }
  RtlCopyFromUser(v11[4], Srca[0], LODWORD(Srca[1]));
  DXGDEVICE::SetDeviceGammaRamp(v5, v18[1], (const struct DXGK_GAMMA_RAMP *)v11);
  v13 = 0LL;
  v17 = -1;
  while ( 1 )
  {
    v14 = v13++;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource((void *const)v6, v18[1], v14, &v17) < 0 || v17 == -1 )
      break;
    v15 = MonitorNotifyDXGIGammaRampChange((void *)v6, v17);
    v12 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4534;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
    }
  }
  v16 = *((_BYTE *)Current + 412);
  *((_BYTE *)Current + 412) = 1;
  if ( !v16 )
    DxgkLogCodePointPacket(0x5Eu, 3u, v12, 0, *(_QWORD *)(v6 + 412));
  ReferenceCounted::Release((ReferenceCounted *)v11);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v21);
  return (unsigned int)v12;
}

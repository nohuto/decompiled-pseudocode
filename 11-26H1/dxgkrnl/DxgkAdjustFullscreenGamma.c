/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1401B4C30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14004FA84 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140074054 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401C3A44 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1403AA994 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(void *Src)
{
  struct _KTHREAD **Current; // rdi
  ADAPTER_DISPLAY **v3; // rbx
  unsigned __int64 v4; // rdx
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdi
  const wchar_t *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  ADAPTER_DISPLAY *v12; // rcx
  DXGDEVICE *v13; // rsi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  int v26; // [rsp+50h] [rbp-128h] BYREF
  __int64 v27; // [rsp+58h] [rbp-120h]
  char v28; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v29; // [rsp+68h] [rbp-110h] BYREF
  DXGADAPTER *v30[2]; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v31[4]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+90h] [rbp-E8h]
  _BYTE v33[144]; // [rsp+A0h] [rbp-D8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11128;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 11128LL, 0LL, 0LL, 0LL, 0LL);
LABEL_59:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v31 = 0LL;
  v32 = 0LL;
  RtlCopyFromUser(v31, Src, 0x20uLL);
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, v31[0], Current, &v29, 1);
  v3 = (ADAPTER_DISPLAY **)v29;
  if ( !v29 )
  {
    WdLogSingleEntry2(2LL, Current, v31[0]);
    WdLogGlobalForLineNumber = 11152;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v31[0],
      0LL,
      0LL,
      0LL);
LABEL_58:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v4);
    goto LABEL_59;
  }
  if ( !*((_QWORD *)v29 + 395) )
  {
    WdLogSingleEntry2(3LL, v29, -1073741811LL);
    WdLogGlobalForLineNumber = 11161;
    goto LABEL_58;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v29, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v33, (unsigned int)(v5 + 1));
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11175;
    v8 = L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!";
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_13;
  }
  v12 = v3[395];
  if ( v31[1] >= *((_DWORD *)v12 + 24) )
  {
    WdLogSingleEntry2(3LL, v31[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11184;
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    goto LABEL_58;
  }
  v13 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v12, v31[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v3[395], v31[1]) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v3[395], v31[1]);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(v3[395], v31[1]) )
      goto LABEL_26;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v3[395], v31[1]);
  }
  v13 = VidPnSourceOwner;
LABEL_26:
  if ( !v13 )
  {
    WdLogSingleEntry2(3LL, v31[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11203;
    goto LABEL_19;
  }
  LODWORD(v7) = 0;
  v15 = *(float *)&v31[2];
  if ( *(float *)&v31[2] > 4.0
    || *(float *)&v31[2] < 0.2
    || (v16 = *(float *)&v31[3], *(float *)&v31[3] > 4.0)
    || *(float *)&v31[3] < 0.2
    || (v17 = *(float *)&v32, *(float *)&v32 > 4.0)
    || *(float *)&v32 < 0.2 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11231;
    LODWORD(v7) = -1073741811;
    v17 = *(float *)&v32;
    v16 = *(float *)&v31[3];
    v15 = *(float *)&v31[2];
  }
  v18 = *((float *)&v32 + 1);
  if ( *((float *)&v32 + 1) > 0.6
    || *((float *)&v32 + 1) < -0.6
    || (v19 = *((float *)&v32 + 2), *((float *)&v32 + 2) > 0.6)
    || *((float *)&v32 + 2) < -0.6
    || (v20 = *((float *)&v32 + 3), *((float *)&v32 + 3) > 0.6)
    || *((float *)&v32 + 3) < -0.6 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 11244;
    LODWORD(v7) = -1073741811;
    v20 = *((float *)&v32 + 3);
    v19 = *((float *)&v32 + 2);
    v18 = *((float *)&v32 + 1);
    v17 = *(float *)&v32;
    v16 = *(float *)&v31[3];
    v15 = *(float *)&v31[2];
  }
  v21 = 0LL;
  if ( (int)v7 >= 0 )
  {
    if ( v15 != 1.0 || v16 != 1.0 || v17 != 1.0 || v18 != 0.0 || v19 != 0.0 || v20 != 0.0 )
    {
      v21 = operator new(0x18uLL, 0x4B677844u, 256LL);
      if ( !v21 )
      {
        LODWORD(v7) = -1073741801;
        WdLogSingleEntry2(3LL, v13, -1073741801LL);
        WdLogGlobalForLineNumber = 11265;
        goto LABEL_13;
      }
      *(_DWORD *)v21 = v31[2];
      *(_DWORD *)(v21 + 4) = v31[3];
      *(_OWORD *)(v21 + 8) = v32;
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v13, v31[1], (struct DXGK_GAMMA_ADJUSTMENT *)v21);
    v22 = 0LL;
    LODWORD(v29) = -1;
    while ( 1 )
    {
      v23 = v22++;
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v3, v31[1], v23, (unsigned int *const)&v29) < 0
        || (_DWORD)v29 == -1 )
      {
        break;
      }
      v24 = MonitorNotifyDXGIGammaRampChange(v3, (unsigned int)v29);
      v7 = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11303;
        v8 = L"Failed to setfullscreen gamma ramp, (Status == 0x%I64x)!";
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return (unsigned int)v7;
}

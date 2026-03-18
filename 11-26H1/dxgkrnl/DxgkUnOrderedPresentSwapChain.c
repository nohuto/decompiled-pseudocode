/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x1402094A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     McTemplateK0pqqpqq_EtwWriteTransfer @ 0x1400824E8 (McTemplateK0pqqpqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x140207C24 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(void *Src)
{
  __int64 v2; // rcx
  NTSTATUS v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  DXGSWAPCHAIN **v7; // r14
  struct DXGSWAPCHAIN *v8; // rsi
  bool v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  PVOID *Object; // [rsp+20h] [rbp-128h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-120h]
  int v16; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-F0h]
  char v18; // [rsp+60h] [rbp-E8h]
  PVOID v19; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGDEVICE *v20; // [rsp+70h] [rbp-D8h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+88h] [rbp-C0h]
  __int128 v23; // [rsp+98h] [rbp-B0h]
  __int64 v24; // [rsp+A8h] [rbp-A0h]
  _BYTE v25[128]; // [rsp+B0h] [rbp-98h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2202);
  *(_OWORD *)Handle = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  RtlCopyFromUser(Handle, Src, 0x38uLL);
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1080;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnOrderedPresent is not allowed for consumer",
      1080LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v19 = 0LL;
  v4 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v19, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v4);
    WdLogGlobalForLineNumber = 1094;
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  v7 = (DXGSWAPCHAIN **)v19;
  v8 = *(struct DXGSWAPCHAIN **)v19;
  v20 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v25, v8, 1, 1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v9 = *((_DWORD *)v8 + 59) != 0;
  else
    v9 = 0;
  v5 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v25, &v20, 1, v9);
  if ( v5 < 0 )
  {
LABEL_22:
    ObfDereferenceObject(v7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = Handle[1];
      LODWORD(Object) = v5;
      McTemplateK0pqqpqq_EtwWriteTransfer(
        v11,
        v10,
        v12,
        v8,
        Object,
        HandleInformation,
        (_QWORD)v23,
        DWORD2(v23),
        HIDWORD(v23));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v25);
    goto LABEL_12;
  }
  if ( *((_DWORD *)v8 + 58) )
  {
    v5 = DXGSWAPCHAIN::UnOrderedPresent(*v7, (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)Handle);
    goto LABEL_22;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1128;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkUnOrderedPresentSwapChain is not allowed for sequential swapchains",
    1128LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return 3221225659LL;
}

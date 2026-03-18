/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x140208210
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     McTemplateK0pqqpq_EtwWriteTransfer @ 0x140082440 (McTemplateK0pqqpq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(char *Src)
{
  __int64 v2; // rcx
  NTSTATUS v4; // eax
  int v5; // edi
  __int64 v6; // rcx
  const void ***v7; // r14
  struct DXGDEVICE *v8; // rsi
  bool v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID *Object; // [rsp+20h] [rbp-138h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-130h]
  int v15; // [rsp+50h] [rbp-108h] BYREF
  __int64 v16; // [rsp+58h] [rbp-100h]
  char v17; // [rsp+60h] [rbp-F8h]
  PVOID v18; // [rsp+68h] [rbp-F0h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int128 Srca; // [rsp+80h] [rbp-D8h] BYREF
  struct DXGDEVICE *v21[4]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v22[128]; // [rsp+B0h] [rbp-A8h] BYREF

  v21[1] = (struct DXGDEVICE *)Src;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2200);
  *(_OWORD *)Handle = 0LL;
  Srca = 0LL;
  RtlCopyFromUser(Handle, Src, 0x20uLL);
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 890;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkAddSurfaceToSwapChain is not allowed for consumer",
      890LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v18 = 0LL;
  v4 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v18, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v4);
    WdLogGlobalForLineNumber = 904;
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  v7 = (const void ***)v18;
  v8 = *(struct DXGDEVICE **)v18;
  v21[2] = v8;
  v21[0] = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
    (DXGSWAPCHAINLOCKWITHDEVICE *)v22,
    v8,
    LODWORD(Handle[1]) != 0,
    1);
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    v9 = *((_DWORD *)v8 + 59) != 0;
  else
    v9 = 0;
  v5 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v22, v21, 1, v9);
  if ( v5 < 0 )
  {
LABEL_27:
    ObfDereferenceObject(v7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = Handle[1];
      LODWORD(Object) = v5;
      McTemplateK0pqqpq_EtwWriteTransfer(
        v11,
        &EventIndirectSwapChainAddSurface,
        v12,
        v8,
        Object,
        HandleInformation,
        (_QWORD)Srca,
        DWORD2(Srca));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v22);
    goto LABEL_12;
  }
  if ( *((_DWORD *)v8 + 58) )
  {
    v5 = DXGSWAPCHAIN::AddSurface(
           *v7,
           (unsigned __int64)v21[0],
           (int)Handle[1],
           (void *)Srca,
           (unsigned int *)&Srca + 2);
    if ( v5 >= 0 )
      RtlCopyToUser(Src + 24, (char *)&Srca + 8, 4uLL);
    goto LABEL_27;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 952;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkAddSurfaceToSwapChain is not allowed for sequential swapchains",
    952LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return 3221225659LL;
}

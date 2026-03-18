/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x140209190
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
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x140207990 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(void *Src)
{
  __int64 v2; // rcx
  NTSTATUS v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  DXGSWAPCHAIN **v7; // rdi
  struct DXGSWAPCHAIN *v8; // rsi
  bool v9; // r9
  __int64 v10; // r8
  PVOID *Object; // [rsp+20h] [rbp-118h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-110h]
  int v13; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-E0h]
  char v15; // [rsp+60h] [rbp-D8h]
  PVOID v16; // [rsp+68h] [rbp-D0h] BYREF
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+70h] [rbp-C8h] BYREF
  struct DXGDEVICE *v18; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v19[128]; // [rsp+A0h] [rbp-98h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2200);
  memset(&Handle, 0, sizeof(Handle));
  RtlCopyFromUser(&Handle, Src, 0x20uLL);
  if ( Handle.bProducer )
  {
    v16 = 0LL;
    v4 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v16, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = (DXGSWAPCHAIN **)v16;
      v8 = *(struct DXGSWAPCHAIN **)v16;
      v18 = 0LL;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v19, v8, 1, 1);
      if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
        v9 = *((_DWORD *)v8 + 59) != 0;
      else
        v9 = 0;
      v5 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v19, &v18, 1, v9);
      if ( v5 >= 0 )
        v5 = DXGSWAPCHAIN::RemoveSurface(*v7, &Handle);
      ObfDereferenceObject(v7);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
      {
        LODWORD(HandleInformation) = Handle.bProducer;
        LODWORD(Object) = v5;
        McTemplateK0pqqpq_EtwWriteTransfer(
          Handle.bProducer,
          &EventIndirectSwapChainRemoveSurface,
          v10,
          v8,
          Object,
          HandleInformation,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v19);
    }
    else
    {
      WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v4);
      WdLogGlobalForLineNumber = 1010;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 996;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RemoveSurface is not allowed for consumer",
      996LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( v15 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}

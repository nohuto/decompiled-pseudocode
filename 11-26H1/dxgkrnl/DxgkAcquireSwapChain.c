/*
 * XREFs of DxgkAcquireSwapChain @ 0x140300AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z @ 0x14030261C (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIH@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(char *Src)
{
  void *v2; // r15
  NTSTATUS v3; // eax
  int v4; // edi
  DXGSWAPCHAIN **v5; // r14
  struct DXGSWAPCHAIN *v6; // r12
  bool v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rax
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-178h] BYREF
  __int64 v17; // [rsp+58h] [rbp-170h]
  char v18; // [rsp+60h] [rbp-168h]
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  void *v20; // [rsp+70h] [rbp-158h]
  void *v21; // [rsp+78h] [rbp-150h]
  struct DXGDEVICE *v22[2]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE Handle[128]; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v24[128]; // [rsp+110h] [rbp-B8h] BYREF

  v22[1] = (struct DXGDEVICE *)Src;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2111);
  memset(Handle, 0, sizeof(Handle));
  v20 = 0LL;
  v2 = 0LL;
  v21 = 0LL;
  RtlCopyFromUser(Handle, Src, 0x80uLL);
  if ( *(_DWORD *)&Handle[8] && *(_DWORD *)&Handle[12] != *(_DWORD *)&Handle[24] )
  {
    WdLogSingleEntry0(2LL);
    v11 = 1177LL;
    v12 = L"Inconsistent bProducer value between acquire and release";
LABEL_34:
    WdLogGlobalForLineNumber = v11;
    goto LABEL_35;
  }
  if ( *(_DWORD *)&Handle[64] > 0x32u )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1184;
    v11 = *(unsigned int *)&Handle[64];
    v12 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
LABEL_35:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !*(_DWORD *)&Handle[64] )
    goto LABEL_8;
  if ( !*(_QWORD *)&Handle[72] )
  {
    WdLogSingleEntry0(2LL);
    v11 = 1192LL;
    v12 = L"Caller specified non-zero free list size but failed to provide buffer";
    goto LABEL_34;
  }
  v14 = 4LL * *(unsigned int *)&Handle[64];
  if ( !is_mul_ok(*(unsigned int *)&Handle[64], 4uLL) )
    v14 = -1LL;
  v2 = (void *)operator new[](v14, 0x4B677844u, 256LL);
  v21 = v2;
  if ( v2 )
  {
    v20 = *(void **)&Handle[72];
    *(_QWORD *)&Handle[72] = v2;
LABEL_8:
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(*(HANDLE *)Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
    v4 = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)Handle, v3);
      WdLogGlobalForLineNumber = 1219;
      v5 = (DXGSWAPCHAIN **)Object;
    }
    else
    {
      v5 = (DXGSWAPCHAIN **)Object;
      v6 = *(struct DXGSWAPCHAIN **)Object;
      v22[0] = 0LL;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)v24,
        v6,
        *(_DWORD *)&Handle[12] != 0,
        1);
      if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
        v7 = *((_DWORD *)v6 + 59) != 0;
      else
        v7 = 0;
      v4 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v24, v22, 1, v7);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)v6 + 58) && *(_DWORD *)&Handle[12] )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1315;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkAcquireSwapChain is not allowed for non-sequential swapchain producer",
            1315LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v4 = -1073741637;
        }
        else
        {
          v8 = DXGSWAPCHAIN::AcquireBuffer(*v5, (struct _D3DKMT_ACQUIRESWAPCHAIN *)Handle, 0LL, 1);
          v4 = v8;
          if ( v8 >= 0 && v8 != 259 )
          {
            RtlCopyToUser(Src + 80, &Handle[80], 4uLL);
            RtlCopyToUser(Src + 88, &Handle[88], 8uLL);
            RtlCopyToUser(Src + 96, &Handle[96], 4uLL);
            RtlCopyToUser(Src + 64, &Handle[64], 4uLL);
            if ( *(_QWORD *)&Handle[32] )
            {
              RtlCopyToUser(Src + 32, &Handle[32], 8uLL);
              RtlCopyToUser(Src + 40, &Handle[40], 8uLL);
            }
            if ( *(_DWORD *)&Handle[64] )
              RtlCopyToUser(v20, *(void **)&Handle[72], 4LL * *(unsigned int *)&Handle[64]);
            if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline()
              && *(_QWORD *)&Handle[104] )
            {
              RtlCopyToUser(Src + 104, &Handle[104], 8uLL);
              RtlCopyToUser(Src + 112, &Handle[112], 8uLL);
              RtlCopyToUser(Src + 120, &Handle[120], 8uLL);
            }
          }
        }
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v24);
    }
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( v2 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v4;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1199;
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate deferred list", 1199LL, 0LL, 0LL, 0LL, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return 3221225495LL;
}

/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1402068D8
 * Callers:
 *     DxgkCreateSwapChain @ 0x140208650 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140053634 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x140082184 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE Value; // r9d
  _DWORD *v7; // rax
  UINT v8; // ecx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  struct DXGPROCESS *Current; // rax

  Value = (struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE)a3->Flags.Value;
  *((_DWORD *)this + 58) = (*(_BYTE *)&Value & 2) != 0;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    v7 = (_DWORD *)operator new(8uLL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = a3->SurfaceCount - 1;
      *v7 = 0;
      v7[1] = v8;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      WdLogSingleEntry0(6LL);
      v9 = 1846LL;
      v10 = L"Out of memory allocating ROTATING_BUFFER_IDX class";
LABEL_7:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v12 = operator new(0x18uLL, 0x4B677844u, 256LL);
  if ( v12 )
  {
    v13 = *((_DWORD *)this + 53);
    *(_DWORD *)v12 = 20;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 4) = v13;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    v9 = 1855LL;
    v10 = L"Failed to allocate surface queue";
    goto LABEL_7;
  }
  v14 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *(_QWORD *)((char *)this + 204) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 412LL);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 444LL) & 0x10) != 0 )
      *((_DWORD *)this + 50) = 1;
    if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a2 + 2)) )
        *((_DWORD *)this + 59) = 1;
    }
    Current = DXGPROCESS::GetCurrent();
    WdLogSingleEntry2(4LL, this, Current);
    result = 0LL;
    WdLogGlobalForLineNumber = 1884;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1861;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to init queue. Returning 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  return result;
}

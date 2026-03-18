/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x14036AF68
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401B81E0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x14036B2C4 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x14036B374 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x14041AA8C (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

int __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, unsigned int a2, void *a3)
{
  __int64 v3; // rbp
  struct DXGSWAPCHAIN_CONTAINER *v6; // rax
  struct _LUID v7; // rbx
  OUTPUTDUPL_MGR_INDIRECT *v9; // rsi
  int updated; // r15d
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _BYTE v17[16]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a2;
  if ( !*((_QWORD *)this + 58) )
    return -1073741811;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 8732;
    return -1073741811;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 444LL) & 0x100) == 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 8738;
    return -1073741811;
  }
  v6 = SwapChainOpenInternal(a3);
  if ( !v6 || !*(_QWORD *)v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8746;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Swap-chain handle (0x%I64x) is invalid",
      (__int64)a3,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  v7 = *(struct _LUID *)(*(_QWORD *)v6 + 204LL);
  if ( v7 )
  {
    ObfDereferenceObject(v6);
    v9 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL));
    if ( v7 == *((_QWORD *)v9 + 16)
      || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v9, v7), updated >= 0) )
    {
      v11 = *((_QWORD *)this + 2);
      v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v11 + 2360);
      if ( v12 )
      {
        v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v12)(
                *(_QWORD *)(v11 + 2336),
                (unsigned int)v3,
                a3,
                v7);
        v14 = v13;
        if ( v13 >= 0 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
          *((struct _LUID *)this + 35) = v7;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
          return BLTQUEUE::SetIndirectSwapChainHandles(
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 3040 * v3),
                   a3);
        }
        else
        {
          WdLogSingleEntry2(2LL, v13, *((_QWORD *)this + 2));
          v16 = *((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 8781;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Dod driver failed SetSwapChainHandle call with 0x%I64x",
            v14,
            v16,
            0LL,
            0LL,
            0LL);
          return v14;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        v15 = *((_QWORD *)this + 2);
        WdLogGlobalForLineNumber = 8787;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SetSwapChain function not supported by Dod driver",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741637;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8769;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reconfigure the OUTPUTDUPL_MGR_INDIRECT (0xI64x) for a new render adapter.",
        (__int64)v9,
        0LL,
        0LL,
        0LL,
        0LL);
      return updated;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8754;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Got zero LUID for swapchain render adapter Luid ",
      8754LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741595;
  }
}

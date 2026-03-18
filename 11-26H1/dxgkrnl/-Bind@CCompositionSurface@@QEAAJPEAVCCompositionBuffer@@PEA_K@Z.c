/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x14006D00C
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x140026474 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     NtBindCompositionSurface @ 0x140027340 (NtBindCompositionSurface.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400265E0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?NotifyNewBinding@CPresentRate@@QEAAXXZ @ 0x1400A3340 (-NotifyNewBinding@CPresentRate@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned int v7; // r10d
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx

  if ( CCompositionSurface::GetActiveBuffer(this) )
  {
    return (unsigned int)-1073740528;
  }
  else
  {
    v8 = (_QWORD *)(v5 + 104);
    v9 = (_QWORD *)(v3 + 24);
    v10 = *(_QWORD *)(v5 + 104);
    if ( *(_QWORD *)(v10 + 8) != v5 + 104 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v8;
    *(_QWORD *)(v10 + 8) = v9;
    *v8 = v9;
    ++*(_QWORD *)(v5 + 40);
    ++*(_DWORD *)(v5 + 120);
    v11 = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(v5 - 16);
    *(_QWORD *)(v6 + 16) = v11;
    *(_BYTE *)(v6 + 40) = 1;
    *v4 = *(_QWORD *)(v5 + 40);
    CPresentRate::NotifyNewBinding((CPresentRate *)(v5 + 56));
  }
  return v7;
}

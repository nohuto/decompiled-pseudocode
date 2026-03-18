/*
 * XREFs of ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18019D6C0
 * Callers:
 *     ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x18019D5F0 (-GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x1802A6050 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18019D7A4 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@U_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18019D9C8 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@U_LUID@@IPEAPEAUIDXGIOutputDWM@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIOutput(
        CDisplayManager *this,
        struct _LUID a2,
        struct _LUID a3,
        unsigned int a4,
        struct IDXGIAdapter1 *a5)
{
  struct IDXGIOutputDWM **v5; // r14
  int Adapter; // eax
  CDisplayManager *v9; // rcx
  struct IDXGIAdapter1 *v10; // rbx
  unsigned int v11; // esi
  int v12; // r10d
  unsigned int v13; // eax
  CDisplayManager *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  v5 = (struct IDXGIOutputDWM **)a5;
  a5 = 0LL;
  *v5 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &a5);
  v10 = a5;
  v11 = Adapter;
  LODWORD(v15) = Adapter;
  if ( Adapter < 0 )
  {
    v12 = Adapter;
    v13 = 109;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A90, 2u, v12, v13, 0LL);
    TranslateDXGIorD3DErrorInContext(v11, 4, &v15);
    v11 = (unsigned int)v15;
    goto LABEL_4;
  }
  LODWORD(v15) = CDisplayManager::InternalGetDXGIOutput(v9, a5, a3, a4, v5);
  v11 = (unsigned int)v15;
  v12 = (int)v15;
  if ( (int)v15 < 0 )
  {
    v13 = 116;
    goto LABEL_3;
  }
LABEL_4:
  if ( v10 )
    ((void (__fastcall *)(struct IDXGIAdapter1 *))v10->lpVtbl->Release)(v10);
  return v11;
}

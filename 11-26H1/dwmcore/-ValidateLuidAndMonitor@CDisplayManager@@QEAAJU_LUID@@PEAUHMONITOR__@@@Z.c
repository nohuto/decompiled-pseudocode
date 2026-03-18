/*
 * XREFs of ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x18029BAA4
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180258680 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18019D7A4 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z @ 0x18029B940 (-InternalValidateMonitor@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CDisplayManager::ValidateLuidAndMonitor(CDisplayManager *this, struct _LUID a2, HMONITOR a3)
{
  int Adapter; // eax
  CDisplayManager *v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned int v8; // eax
  CDisplayManager *v10; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = this;
  v11 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v11);
  LODWORD(v10) = Adapter;
  v6 = Adapter;
  if ( Adapter < 0 )
  {
    v7 = Adapter;
    v8 = 24;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AA9F0, 2u, v7, v8, 0LL);
    TranslateDXGIorD3DErrorInContext(v6, 4, &v10);
    v6 = (unsigned int)v10;
    goto LABEL_6;
  }
  LODWORD(v10) = CDisplayManager::InternalValidateMonitor(v5, v11, a3);
  v6 = (unsigned int)v10;
  v7 = (int)v10;
  if ( (int)v10 < 0 )
  {
    v8 = 28;
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v6;
}

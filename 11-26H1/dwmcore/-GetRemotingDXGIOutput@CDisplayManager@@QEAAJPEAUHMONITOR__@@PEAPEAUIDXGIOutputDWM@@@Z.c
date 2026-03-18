/*
 * XREFs of ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18029B8D0
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180254DC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18014A3D8 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetRemotingDXGIOutput(
        CDisplayManager *this,
        HMONITOR a2,
        struct IDXGIOutputDWM **a3)
{
  int DXGIOutput; // eax
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(this, 0, a2, a3);
  LODWORD(v6) = DXGIOutput;
  v4 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AA9E8, 2u, DXGIOutput, 0x8Eu, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4, &v6);
    return (unsigned int)v6;
  }
  return v4;
}

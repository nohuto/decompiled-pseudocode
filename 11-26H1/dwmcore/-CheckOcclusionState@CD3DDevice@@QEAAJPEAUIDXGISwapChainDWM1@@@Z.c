/*
 * XREFs of ?CheckOcclusionState@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@@Z @ 0x180199DA4
 * Callers:
 *     ?CheckOcclusionState@CLegacySwapChain@@UEBAJXZ @ 0x180199D10 (-CheckOcclusionState@CLegacySwapChain@@UEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CheckOcclusionState(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v3; // eax
  int v4; // ebx

  if ( *((_DWORD *)this + 281) )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x38Au, 0LL);
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, __int64, __int64))(*(_QWORD *)a2 + 128LL))(
           a2,
           1LL,
           1LL);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x394u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v4, 1u);
}

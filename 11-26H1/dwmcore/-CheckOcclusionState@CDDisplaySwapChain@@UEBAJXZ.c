/*
 * XREFs of ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ @ 0x1801FFE70
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180253770 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckOcclusionState(CDDisplaySwapChain *this)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 51);
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 48LL))(v1, &v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x93u, 0LL);
    return v3;
  }
  if ( !v5 )
    return 0;
  if ( v5 == 1 || v5 == 3 )
    return 142213121;
  if ( v5 != 4 )
    return 0;
  return 142213129;
}

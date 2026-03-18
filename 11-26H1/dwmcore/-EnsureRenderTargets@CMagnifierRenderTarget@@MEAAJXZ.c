/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180124940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180125BF0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1802584CC (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 i; // rsi
  __int64 v4; // rcx
  int v6; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 578); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 286) + 8 * i);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) < 0 )
    {
      COffScreenRenderTarget::ReleaseRenderTargets(this);
      break;
    }
  }
  if ( !*((_DWORD *)this + 578) )
  {
    if ( *((_DWORD *)this + 596) )
    {
      v6 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x184u, 0LL);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}

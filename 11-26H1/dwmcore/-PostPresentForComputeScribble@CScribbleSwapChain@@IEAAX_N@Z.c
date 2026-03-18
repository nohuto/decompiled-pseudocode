/*
 * XREFs of ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x1801FFF3C
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180035018 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::PostPresentForComputeScribble(CScribbleSwapChain *this, __int64 a2)
{
  char v2; // si
  char v4; // di
  int v5; // eax

  v2 = a2;
  if ( *((_DWORD *)this + 68) )
  {
    v4 = 0;
    if ( !(_BYTE)a2
      && (*((_BYTE *)this + 276)
       || (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 32) + 112LL))((char *)this + 256)) )
    {
      v4 = 1;
    }
    if ( *((_BYTE *)this + 277) != v4 )
    {
      if ( *((_DWORD *)this + 68) == 1
        && (LOBYTE(a2) = v4,
            v5 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 32) + 80LL))((char *)this + 256, a2),
            v5 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xFEu, 0LL);
      }
      else
      {
        *((_BYTE *)this + 277) = v4;
      }
    }
  }
  if ( v2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources((volatile signed __int32 **)this);
}

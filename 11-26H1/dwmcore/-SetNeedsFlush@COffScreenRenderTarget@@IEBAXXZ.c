/*
 * XREFs of ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x1800577C4
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COffScreenRenderTarget::SetNeedsFlush(COffScreenRenderTarget *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 578); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 286) + 8 * i);
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) >= 0 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 286) + 8 * i);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      if ( !*(_DWORD *)(v5 + 1124) )
        *(_BYTE *)(v5 + 1491) = 1;
    }
  }
}

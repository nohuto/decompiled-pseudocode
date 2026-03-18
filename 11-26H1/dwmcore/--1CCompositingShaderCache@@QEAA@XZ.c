/*
 * XREFs of ??1CCompositingShaderCache@@QEAA@XZ @ 0x1802146F0
 * Callers:
 *     ??R?$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z @ 0x1802B3BF0 (--R-$default_delete@VCCompositingShaderCache@@@std@@QEBAXPEAVCCompositingShaderCache@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_commonRenderingShaderCache__ @ 0x1802B9F80 (_dynamic_atexit_destructor_for__g_commonRenderingShaderCache__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void __fastcall CCompositingShaderCache::~CCompositingShaderCache(CCompositingShaderCache *this)
{
  int i; // edi
  void *v3; // rcx

  if ( *(_QWORD *)this )
  {
    for ( i = 0; i < *((_DWORD *)this + 4); ++i )
      Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)(*((_QWORD *)this + 1)
                                                                                         + 8LL * i));
    operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}

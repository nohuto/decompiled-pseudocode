/*
 * XREFs of ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x1801554FC
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801010E0 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180155600 (-InternalAddRef@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rax
  __int64 v9; // r8
  _OWORD *v10; // rdx
  _QWORD *v11; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 16LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_OWORD *)(*(_QWORD *)a1 + 16 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
  {
    *v11 = *a3;
    Microsoft::WRL::ComPtr<CLinkedShader>::InternalAddRef();
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}

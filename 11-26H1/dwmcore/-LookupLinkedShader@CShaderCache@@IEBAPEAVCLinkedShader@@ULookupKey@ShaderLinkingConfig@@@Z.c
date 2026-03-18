/*
 * XREFs of ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x1800F98B0
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F97A4 (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 *__fastcall CShaderCache::LookupLinkedShader(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // rax
  __int64 i; // r8
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbp
  int v7; // esi
  int v8; // esi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v3 >= *(int *)(a1 + 16) )
      return 0LL;
    if ( *(_QWORD *)(i + *(_QWORD *)a1) == *(_QWORD *)a2 && *(_DWORD *)(i + *(_QWORD *)a1 + 8) == *(_DWORD *)(a2 + 8) )
      break;
    ++v2;
    ++v3;
  }
  if ( v2 == -1 )
    return 0LL;
  v5 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 8) + 8LL * v2);
  if ( v5 && _InterlockedAdd(v5 + 2, 1u) <= 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
    v6 = v5;
  }
  else
  {
    v6 = v5;
    if ( !v5 )
      return 0LL;
  }
  v7 = _InterlockedDecrement(v5 + 2);
  if ( v7 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v10);
  if ( !v7 )
  {
    if ( _InterlockedAdd(v5 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v10);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
    v8 = _InterlockedDecrement(v5 + 2);
    if ( v8 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v10);
    if ( !v8 )
    {
      if ( _InterlockedDecrement(v5 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v10);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
    }
  }
  return v6;
}

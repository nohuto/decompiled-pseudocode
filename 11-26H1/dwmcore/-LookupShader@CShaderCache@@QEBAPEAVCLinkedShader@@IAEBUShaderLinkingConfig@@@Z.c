/*
 * XREFs of ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180100130
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 * Callees:
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180100AD0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CLinkedShader *__fastcall CShaderCache::LookupShader(
        CShaderCache *this,
        unsigned int a2,
        const struct ShaderLinkingConfig *a3)
{
  int v4; // r8d
  __int64 v5; // rax
  __int64 i; // rdx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbp
  int v9; // esi
  int v10; // esi
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ShaderLinkingConfig::GetLookupKey(a3, &v12, a2);
  v4 = 0;
  v5 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v5 >= *((int *)this + 4) )
      return 0LL;
    if ( *(_QWORD *)(i + *(_QWORD *)this) == v12 && *(_DWORD *)(i + *(_QWORD *)this + 8) == v13 )
      break;
    ++v4;
    ++v5;
  }
  if ( v4 == -1 )
    return 0LL;
  v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * v4);
  if ( v7 && _InterlockedAdd(v7 + 2, 1u) <= 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v12);
    v8 = v7;
  }
  else
  {
    v8 = v7;
    if ( !v7 )
      return 0LL;
  }
  v9 = _InterlockedDecrement(v7 + 2);
  if ( v9 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v12);
  if ( !v9 )
  {
    if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v12);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
    v10 = _InterlockedDecrement(v7 + 2);
    if ( v10 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v12);
    if ( !v10 )
    {
      if ( _InterlockedDecrement(v7 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v12);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 16LL))(v7, 1LL);
    }
  }
  return (struct CLinkedShader *)v8;
}

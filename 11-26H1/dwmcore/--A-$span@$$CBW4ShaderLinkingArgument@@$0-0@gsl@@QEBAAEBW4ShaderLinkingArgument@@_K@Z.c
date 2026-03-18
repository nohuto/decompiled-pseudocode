/*
 * XREFs of ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_K@Z @ 0x1801B2F08
 * Callers:
 *     LinkLightShader @ 0x18025E868 (LinkLightShader.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall gsl::span<enum ShaderLinkingArgument const,-1>::operator[](
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  if ( a2 >= *a1 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a1[1] + 2 * a2;
}

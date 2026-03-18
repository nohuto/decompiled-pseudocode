/*
 * XREFs of ??C?$span_iterator@$$CBUSceneMeshMaterialAttributeData@@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x18027FE74
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802801B0 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->(
        unsigned __int64 *a1)
{
  unsigned __int64 result; // rax

  if ( !*a1 || !a1[1] || (result = a1[2], *a1 > result) || result >= a1[1] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return result;
}

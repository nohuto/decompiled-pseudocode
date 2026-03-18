/*
 * XREFs of ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x180281C8C
 * Callers:
 *     _CSceneMesh::OnSceneFrameTick_::_8_::_lambda_2_::operator() @ 0x18027F780 (_CSceneMesh--OnSceneFrameTick_--_8_--_lambda_2_--operator().c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18027F850 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x180055550 (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CSharedSectionWrapper::GetSharedSectionData(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r9d
  const void *v4; // rdi
  bool v5; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 72) )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( *(_DWORD *)(a1 + 84) == -1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v4 = CSharedSectionBase::ResolveAllocation(
         *(CSharedSectionBase **)(a1 + 72),
         *(unsigned int *)(a1 + 80),
         *(unsigned int *)(a1 + 84));
  gsl::details::extent_type<-1>::extent_type<-1>(a2, v3);
  v5 = *a2 == -1LL;
  a2[1] = v4;
  if ( v5 || !v4 && *a2 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  return a2;
}

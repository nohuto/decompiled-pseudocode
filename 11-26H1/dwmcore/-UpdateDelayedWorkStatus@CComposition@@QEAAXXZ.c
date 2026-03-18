/*
 * XREFs of ?UpdateDelayedWorkStatus@CComposition@@QEAAXXZ @ 0x180150B30
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ @ 0x180150BC0 (-HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CComposition::UpdateDelayedWorkStatus(CEffectCompilationService **this)
{
  void *v2; // rdx
  __int64 i; // rbx
  __int64 v4; // r8
  wil::details *v5; // rcx

  CEffectCompilationService::HandleCompletedTasks(this[81]);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 214); i = (unsigned int)(i + 1) )
  {
    v4 = *((_QWORD *)this[104] + i);
    if ( v4 )
    {
      v5 = *(wil::details **)(v4 + 40);
      if ( v5 )
      {
        if ( *(_BYTE *)(v4 + 113) )
        {
          if ( !*(_DWORD *)(v4 + 136) )
          {
            *(_BYTE *)(v4 + 113) = 0;
            wil::details::SetEvent(v5, v2);
          }
        }
      }
    }
  }
}

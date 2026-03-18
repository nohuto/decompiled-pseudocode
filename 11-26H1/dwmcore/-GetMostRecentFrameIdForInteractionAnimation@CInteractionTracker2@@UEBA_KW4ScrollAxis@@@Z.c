/*
 * XREFs of ?GetMostRecentFrameIdForInteractionAnimation@CInteractionTracker2@@UEBA_KW4ScrollAxis@@@Z @ 0x1802737A0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::GetMostRecentFrameIdForInteractionAnimation(_QWORD *a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1) )
  {
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          ModuleFailFastForHRESULT(-2147467259, retaddr);
        v6 = a1[81];
      }
      else
      {
        v6 = a1[83];
      }
    }
    else
    {
      v6 = a1[82];
    }
    return *(_QWORD *)(v6 + 328);
  }
  return v4;
}

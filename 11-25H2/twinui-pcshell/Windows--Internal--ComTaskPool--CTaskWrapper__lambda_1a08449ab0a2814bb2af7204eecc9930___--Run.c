/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x180508A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x180509A70 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run(
        __int64 a1)
{
  WindowArrangementView *v1; // rcx
  __int64 result; // rax

  v1 = *(WindowArrangementView **)(a1 + 16);
  if ( *((_DWORD *)v1 + 74) == 2 )
    return WindowArrangementView::TickPlaceModeIdleAnimation(v1);
  return result;
}

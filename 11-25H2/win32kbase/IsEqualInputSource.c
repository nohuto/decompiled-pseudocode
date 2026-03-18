/*
 * XREFs of IsEqualInputSource @ 0x1400FF830
 * Callers:
 *     ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x14018F3DC (-ComputeCoalescingStrategy@CMouseProcessor@@AEBA-AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@.c)
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021F98C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 || !a2 )
    return 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v2;
}

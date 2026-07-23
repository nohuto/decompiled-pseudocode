/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1404A5960
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x1404A59AC (PfTFullEventListAdd.c)
 */

unsigned int __fastcall PfpEventHandleFullBuffer(__int64 a1)
{
  unsigned int result; // eax

  PfTFullEventListAdd();
  result = *(_DWORD *)(a1 + 740);
  if ( !result )
  {
    result = *(unsigned __int16 *)(a1 + 544);
    if ( result >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
  }
  return result;
}

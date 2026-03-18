/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1402F1A20
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1402F197C (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x1403543B0 (IoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *result; // rax

  for ( result = WmipInUseRegEntryHead; result != (_DWORD *)&WmipInUseRegEntryHead; result = *(_DWORD **)result )
  {
    if ( result[14] == a1 && (int)result[12] >= 0 )
      return result;
  }
  return 0LL;
}

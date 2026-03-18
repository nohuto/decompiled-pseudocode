/*
 * XREFs of ViIsContextIdValid @ 0x140B74964
 * Callers:
 *     VfInsertContext @ 0x140604820 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x140604900 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140604940 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140604980 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x1406049C0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViIsContextIdValid(int a1, int a2)
{
  bool result; // al

  result = 0;
  if ( !a1 || (unsigned int)(a1 - 1) <= 1 )
    return a2 < 1;
  return result;
}

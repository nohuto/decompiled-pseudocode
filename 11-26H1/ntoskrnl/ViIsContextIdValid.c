/*
 * XREFs of ViIsContextIdValid @ 0x140C22868
 * Callers:
 *     VfInsertContext @ 0x140640BC0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x140640CA0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140640CE0 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140640D20 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x140640D60 (VfRemoveContext.c)
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

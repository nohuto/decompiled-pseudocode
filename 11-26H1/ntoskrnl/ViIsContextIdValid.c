/*
 * XREFs of ViIsContextIdValid @ 0x140C28878
 * Callers:
 *     VfInsertContext @ 0x1406447A0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x140644880 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x1406448C0 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140644900 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x140644940 (VfRemoveContext.c)
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

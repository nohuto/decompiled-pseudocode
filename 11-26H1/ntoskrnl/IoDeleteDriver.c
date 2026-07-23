/*
 * XREFs of IoDeleteDriver @ 0x140798F00
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140B2DA80 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(char *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 56);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}

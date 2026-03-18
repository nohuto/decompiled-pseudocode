/*
 * XREFs of IoDeleteDriver @ 0x1407963D0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140B2BA00 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(char *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 56);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}

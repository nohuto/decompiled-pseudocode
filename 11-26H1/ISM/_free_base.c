/*
 * XREFs of _free_base @ 0x18009AA8E
 * Callers:
 *     __dyn_tls_dtor @ 0x18009CA80 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18009CB2C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}

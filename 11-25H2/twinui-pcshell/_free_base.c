/*
 * XREFs of _free_base @ 0x1802D2EC2
 * Callers:
 *     __dyn_tls_dtor @ 0x1802DAF00 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x1802DAFAC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}

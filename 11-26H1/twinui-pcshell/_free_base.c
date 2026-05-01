/*
 * XREFs of _free_base @ 0x1802C9D92
 * Callers:
 *     __dyn_tls_dtor @ 0x1802D35F0 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x1802D369C (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}

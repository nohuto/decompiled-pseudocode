/*
 * XREFs of MIDL_user_allocate @ 0x140AD3690
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ExAllocatePool2(0x100uLL);
}

/*
 * XREFs of MIDL_user_allocate @ 0x140241150
 * Callers:
 *     <none>
 * Callees:
 *     ImpAllocate @ 0x140134DE4 (ImpAllocate.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ImpAllocate(size, 1);
}

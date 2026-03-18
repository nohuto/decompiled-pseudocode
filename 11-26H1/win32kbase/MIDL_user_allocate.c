/*
 * XREFs of MIDL_user_allocate @ 0x14024A890
 * Callers:
 *     <none>
 * Callees:
 *     ImpAllocate @ 0x14016DA5C (ImpAllocate.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return (void *)ImpAllocate(size, 1);
}

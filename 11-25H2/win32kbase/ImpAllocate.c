/*
 * XREFs of ImpAllocate @ 0x140134DE4
 * Callers:
 *     ImpRpcAsyncInit @ 0x140138B2C (ImpRpcAsyncInit.c)
 *     MIDL_user_allocate @ 0x140241150 (MIDL_user_allocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImpAllocate(__int64 a1, char a2)
{
  return ExAllocatePool2(a2 != 0 ? 256LL : 64LL, a1, 1836084809LL);
}

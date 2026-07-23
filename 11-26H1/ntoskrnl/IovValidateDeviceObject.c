/*
 * XREFs of IovValidateDeviceObject @ 0x140C30C5C
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 *     IovStatelessIoCallDriverRules @ 0x140C30AEC (IovStatelessIoCallDriverRules.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) != 0LL;
}

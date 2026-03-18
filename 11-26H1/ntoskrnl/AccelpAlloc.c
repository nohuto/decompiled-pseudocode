/*
 * XREFs of AccelpAlloc @ 0x14084ADE4
 * Callers:
 *     AccelpGetCopyBuffer @ 0x1406DF5C0 (AccelpGetCopyBuffer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall AccelpAlloc(__int64 a1, __int64 a2, char a3)
{
  return ExAllocatePool2(a3 != 0 ? 256LL : 64LL);
}

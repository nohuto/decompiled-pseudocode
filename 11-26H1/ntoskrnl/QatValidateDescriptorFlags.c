/*
 * XREFs of QatValidateDescriptorFlags @ 0x1406E5498
 * Callers:
 *     AccelpQatOperationHandler @ 0x1406E3C44 (AccelpQatOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QatValidateDescriptorFlags(__int64 a1, __int64 a2, __int64 a3)
{
  return (a3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 ? 0xC000000D : 0;
}

/*
 * XREFs of LdrpProtectedCopyMemory @ 0x1800C76A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}

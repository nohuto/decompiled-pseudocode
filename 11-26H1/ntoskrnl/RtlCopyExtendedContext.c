/*
 * XREFs of RtlCopyExtendedContext @ 0x14061AAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140417400 (RtlpCopyExtendedContext.c)
 */

__int64 __fastcall RtlCopyExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpCopyExtendedContext(0, a1, 0LL, a2, a3, 0LL);
}

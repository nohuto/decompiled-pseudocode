/*
 * XREFs of Win8PsGetVersion @ 0x1407BF950
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsGetVersion @ 0x1404BABA0 (PsGetVersion.c)
 */

BOOLEAN __fastcall Win8PsGetVersion(ULONG *a1, ULONG *a2, ULONG *a3, UNICODE_STRING *a4)
{
  BOOLEAN Version; // bp

  Version = PsGetVersion(a1, a2, a3, 0LL);
  if ( a1 )
    *a1 = 6;
  if ( a2 )
    *a2 = 2;
  if ( a3 )
    *a3 = 9200;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return Version;
}

/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140804210
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1, char a2, UNICODE_STRING *a3)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL, a2 != 0, a3);
}

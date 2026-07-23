/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x140809CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return RtlpGetTokenNamedObjectPath(TokenHandle, 0LL, (_BYTE)Sid != 0, ObjectPath);
}

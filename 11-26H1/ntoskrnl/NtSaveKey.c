/*
 * XREFs of NtSaveKey @ 0x140781D00
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}

/*
 * XREFs of CreateFile2 @ 0x14001BD10
 * Callers:
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D0E8 (BasepOpenParentDirectoryNoRedirection.c)
 * Callees:
 *     CreateFileInternal @ 0x14001BD6C (CreateFileInternal.c)
 */

__int64 __fastcall CreateFile2(const WCHAR *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return CreateFileInternal(a1, a5, 2);
}

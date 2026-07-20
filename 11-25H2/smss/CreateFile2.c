/*
 * XREFs of CreateFile2 @ 0x14001C020
 * Callers:
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D7FC (BasepOpenParentDirectoryNoRedirection.c)
 * Callees:
 *     CreateFileInternal @ 0x14001C07C (CreateFileInternal.c)
 */

__int64 __fastcall CreateFile2(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return CreateFileInternal(a1, 0x80000000, 1, 3, a5, 2);
}

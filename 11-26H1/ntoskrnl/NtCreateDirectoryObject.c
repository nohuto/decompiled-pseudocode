/*
 * XREFs of NtCreateDirectoryObject @ 0x140AF9E30
 * Callers:
 *     DifNtCreateDirectoryObjectWrapper @ 0x140670430 (DifNtCreateDirectoryObjectWrapper.c)
 *     CreateSystemRootLink @ 0x140CA9EFC (CreateSystemRootLink.c)
 *     IopCreateRootDirectories @ 0x140CBCD38 (IopCreateRootDirectories.c)
 *     IopCreateUmdfDirectory @ 0x140CBCE2C (IopCreateUmdfDirectory.c)
 *     ExpInitializeCallbacks @ 0x140CE6064 (ExpInitializeCallbacks.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140AF9E70 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObject(__int64 a1, __int64 a2, __int64 a3)
{
  return ObpCreateDirectoryObject(a1, a2, a3, 0LL, 0);
}

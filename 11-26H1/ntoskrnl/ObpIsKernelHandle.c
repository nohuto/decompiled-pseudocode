/*
 * XREFs of ObpIsKernelHandle @ 0x14043CFB0
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C62D0 (ObCloseHandleWithResult.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && a1 != -2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -1;
}

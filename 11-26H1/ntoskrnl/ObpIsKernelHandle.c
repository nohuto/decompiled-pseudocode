/*
 * XREFs of ObpIsKernelHandle @ 0x1404444A0
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C3270 (ObCloseHandleWithResult.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     ObWaitForMultipleObjects @ 0x140A230B0 (ObWaitForMultipleObjects.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(__int64 a1, char a2)
{
  return !a2 && a1 != -2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 != -1;
}

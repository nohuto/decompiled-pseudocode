/*
 * XREFs of SepIsPackageSid @ 0x1402B0080
 * Callers:
 *     SepMaximumAccessCheckEx @ 0x1402ACD9C (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  _DWORD *SparePtr; // rdi

  SparePtr = RtlpBootStatHandleLock.WaitBlock[3].SparePtr;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)RtlpBootStatHandleLock.WaitBlock[3].SparePtr
      && RtlCompareMemory(
           (const void *)(a1 + 2),
           (const void *)(RtlpBootStatHandleLock.LastXStateSaveDebugInfo + 2),
           6uLL) == 6
      && *(_DWORD *)(a1 + 8) == SparePtr[2];
}

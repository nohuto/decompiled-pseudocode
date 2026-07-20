/*
 * XREFs of memmove_0 @ 0x14001E837
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001AA60 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AB84 (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001ACB8 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x14001B504 (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x14001C804 (GetLongPathNameW.c)
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

/*
 * XREFs of memmove_0 @ 0x14001EFB3
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001A318 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001A43C (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001A570 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x14001CCE0 (GetLongPathNameW.c)
 *     InternalFindFirstFileExW @ 0x14001DE78 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

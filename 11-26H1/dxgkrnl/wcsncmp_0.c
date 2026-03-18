/*
 * XREFs of wcsncmp_0 @ 0x14006E467
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x14023B648 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140250698 (DpiIndirectFindDeviceFromInstanceId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}

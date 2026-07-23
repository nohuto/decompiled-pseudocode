/*
 * XREFs of RtlDoesFileExists_UEx @ 0x1800A501C
 * Callers:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18001E730 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDosSearchPath_U @ 0x1800A3770 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_U @ 0x1800A4CD0 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x18010ADE8 (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

char __fastcall RtlDoesFileExists_UEx(const wchar_t *a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v2 = a2;
  v5[1] = a1;
  if ( !a1 )
    goto LABEL_4;
  v3 = wcslen(a1);
  if ( v3 <= 0x7FFE )
  {
    LOWORD(v5[0]) = 2 * v3;
    WORD1(v5[0]) = 2 * v3 + 2;
LABEL_4:
    LOBYTE(a2) = v2;
    return RtlDoesFileExists_UstrEx(v5, a2);
  }
  return 0;
}

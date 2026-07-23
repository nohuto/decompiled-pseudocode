/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x140719320
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x14088CD50 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x14088D270 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x14088F92C (AslPathCombine.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int16 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(pszSrc, L"AppPatch64");
  if ( a2 < 0xB )
    return 3221225507LL;
  v12 = -1;
  pszDest[0] = 0;
  v11[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v12, v11, a4);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v11[0] == 9 || v11[0] == 12 )
    {
      ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "AslPathCombine failed [%x]";
        v10 = 1018;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !a3 )
        a3 = &cchOriginalDestLength;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v9 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v10 = 1024;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  }
  v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v10 = 1006;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v10, (_DWORD)v9);
  return (unsigned int)ProcessHostGuestArchitectures;
}

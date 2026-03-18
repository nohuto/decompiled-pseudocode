/*
 * XREFs of AslPathToSystemPath @ 0x1408897A0
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     AslPathToSystemPathBuf @ 0x140889860 (AslPathToSystemPathBuf.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPath(_QWORD *a1, const wchar_t *a2)
{
  int v3; // ebx
  const char *v4; // r9
  int v5; // r8d
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  *a1 = 0LL;
  pszDest[0] = 0;
  v3 = AslPathToSystemPathBuf(pszDest, 0x104uLL, a2);
  if ( v3 >= 0 )
  {
    v3 = AslStringDuplicate(a1, pszDest);
    if ( v3 >= 0 )
      return 0;
    v4 = "Failed to allocate path string [%x]";
    v5 = 1543;
  }
  else
  {
    v4 = "AslPathToSystemPathBuf failed [%x]";
    v5 = 1537;
  }
  AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPath", v5, (_DWORD)v4);
  return (unsigned int)v3;
}

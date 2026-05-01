/*
 * XREFs of SdbpGetPathAppPatch @ 0x1800916B0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800917B0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x180091A90 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180091B90 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathMergeSource @ 0x180091D10 (SdbpGetPathMergeSource.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(_WORD *a1, unsigned __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 v10; // r8
  __int128 v11; // [rsp+30h] [rbp-258h] BYREF
  int v12; // [rsp+40h] [rbp-248h]
  _WORD v13[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v12 = *(_DWORD *)L"h";
  v11 = *(_OWORD *)L"\\AppPatch";
  if ( a2 < 0xA )
    return 3221225507LL;
  *a1 = 0;
  v13[0] = 0;
  if ( !a3 )
    v3 = &word_1800BBB1C;
  v7 = AslPathCombine(&v11, v3, v13, 260LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = "AslPathCombine failed [%x]";
    v10 = 953LL;
LABEL_9:
    AslLogCallPrintf(1LL, "SdbpGetPathAppPatch", v10, v9, v7);
    return v8;
  }
  v7 = AslPathToSystemPathBuf(a1, a2, v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = "AslPathToSystemPathBuf failed [%x]";
    v10 = 959LL;
    goto LABEL_9;
  }
  return v8;
}

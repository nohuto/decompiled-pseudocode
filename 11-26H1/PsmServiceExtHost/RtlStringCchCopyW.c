/*
 * XREFs of RtlStringCchCopyW @ 0x18006297C
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180058564 (SdbShouldBlockPackageLaunch.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800917B0 (SdbpGetPathAppPatchPreRS3.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslpFileQueryVersionString @ 0x18009E148 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A16C0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A17F8 (AslEnvGetSystem32DirPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A1B48 (AslpEnvResolveVars.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int16 v5; // ax
  _WORD *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)((char *)a1 + v4);
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}

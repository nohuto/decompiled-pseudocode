/*
 * XREFs of AslPathToSystemPathBuf @ 0x18009F250
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     AslPathToSystemPath @ 0x18009F190 (AslPathToSystemPath.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A16C0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A17F8 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x18008D074 (RtlStringCchCatW.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A26D8 (RtlDownlevelGetNtSystemRoot.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 NtSystemRoot; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  memset_0(a1, 0, 2 * a2);
  NtSystemRoot = RtlDownlevelGetNtSystemRoot();
  v7 = RtlStringCchCopyW(a1, a2, NtSystemRoot);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = RtlStringCchCatW(a1, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
    {
      AslLogCallPrintf(1LL, "AslPathToSystemPathBuf", 1488LL, "Failed to cat string [%x]", v9);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL, "AslPathToSystemPathBuf", 1477LL, "Failed to get system root directory [%x]", v7);
  }
  return v8;
}

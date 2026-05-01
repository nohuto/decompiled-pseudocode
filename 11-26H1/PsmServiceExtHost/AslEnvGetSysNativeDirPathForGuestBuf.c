/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A16C0
 * Callers:
 *     SdbpGetPathAppraiser @ 0x180091940 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A17F8 (AslEnvGetSystem32DirPathBuf.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        _WORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned __int16 a4,
        _WORD *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-C8h]
  _WORD v15[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v15, 0, sizeof(v15));
  *a1 = 0;
  if ( a5 && *a5 != a4 )
  {
    v9 = AslPathToSystemPathBuf(v15, 64LL, (__int64)L"\\SysNative");
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = "AslPathToSystemPathBuf failed [%x]";
      v12 = 1839LL;
LABEL_11:
      v14 = v9;
      AslLogCallPrintf(1LL, "AslEnvGetSysNativeDirPathForGuestBuf", v12, v11, v14);
      return v10;
    }
    if ( a3 && *a3 )
    {
      v9 = AslPathCombine((__int64)v15, a3, a1, a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "AslPathCombine failed [%x]";
        v12 = 1849LL;
        goto LABEL_11;
      }
    }
    else
    {
      v9 = RtlStringCchCopyW(a1, a2, (__int64)v15);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = "RtlStringCchCopyW failed [%x]";
        v12 = 1857LL;
        goto LABEL_11;
      }
    }
    return v10;
  }
  return AslEnvGetSystem32DirPathBuf((_DWORD)a1, a2, (_DWORD)a3, a4, (__int64)a5);
}

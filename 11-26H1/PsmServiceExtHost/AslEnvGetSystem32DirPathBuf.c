/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1800A17F8
 * Callers:
 *     SdbpGetPathSystem @ 0x180091E20 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A16C0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x18006297C (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(_WORD *a1, __int64 a2, _WORD *a3, __int16 a4, __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  unsigned __int64 i; // rax
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 v15; // r8
  _WORD v17[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v17, 0, sizeof(v17));
  *a1 = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i >= 0x80 )
      return (unsigned int)-1073741637;
    if ( *(_WORD *)((char *)&unk_1800E14A0 + i) == a4 && *(_WORD *)((char *)&unk_1800E14A0 + i + 2) == v9 )
      break;
    ++v10;
  }
  v12 = AslPathToSystemPathBuf(v17, 64LL, *((_QWORD *)&unk_1800E14A0 + 2 * v10 + 1));
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = "AslPathToSystemPathBuf failed [%x]";
    v15 = 1567LL;
LABEL_11:
    AslLogCallPrintf(1LL, "AslEnvGetSystem32DirPathBuf", v15, v14, v12);
    return v13;
  }
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine((__int64)v17, a3, a1, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = "AslPathCombine failed [%x]";
      v15 = 1577LL;
      goto LABEL_11;
    }
  }
  else
  {
    v12 = RtlStringCchCopyW(a1, a2, (__int64)v17);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = "RtlStringCchCopyW failed [%x]";
      v15 = 1585LL;
      goto LABEL_11;
    }
  }
  return 0;
}

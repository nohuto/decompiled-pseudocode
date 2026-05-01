/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x18009015C
 * Callers:
 *     SdbTagRefToTagID @ 0x1800903B4 (SdbTagRefToTagID.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpGetFileTimestamp @ 0x18008E114 (SdbpGetFileTimestamp.c)
 *     SdbpCloseLocalDatabaseEx @ 0x180090030 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x18009127C (SdbResolveDatabaseEx.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x18009620C (SdbpCheckRuntimePlatformImpl.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v8; // r14d
  __int64 v9; // rdi
  bool v10; // zf
  const char *v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  const char *v14; // r9
  __int64 v15; // r8
  int FileTimestamp; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm0
  __int64 v23; // [rsp+20h] [rbp-E0h]
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h]
  WCHAR v28[264]; // [rsp+50h] [rbp-B0h] BYREF

  LODWORD(v26) = 0;
  v24 = 0;
  v8 = 0;
  v9 = *a5 >> 28;
  v10 = (*a5 & 0xF0000000) == 0;
  v27 = 0LL;
  if ( v10 )
    v9 = (unsigned int)*a5;
  v25 = 0;
  if ( (_DWORD)v9 != 1 && (unsigned int)(v9 - 3) > 0xC )
  {
    LODWORD(v23) = v9;
    v11 = "Bad index 0x%lx";
    v12 = 1105LL;
LABEL_28:
    AslLogCallPrintf(1LL, "SdbpOpenLocalDatabaseEx", v12, v11, v23);
    return v8;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  v13 = SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v26, (unsigned int)&v24, (__int64)v28);
  if ( (unsigned int)(v13 - 1) > 0x102 )
  {
    LODWORD(v23) = v13;
    v11 = "Cannot resolve database, the path length is 0x%lx";
    v12 = 1139LL;
    goto LABEL_28;
  }
  if ( *(_WORD *)(a1 + 584) != 0x7FFF )
  {
    if ( !(unsigned int)SdbpCheckRuntimePlatformImpl(&v25, 0LL, *(unsigned int *)(a1 + 552), v24) )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpOpenLocalDatabaseEx",
        1156LL,
        "Cannot check database runtime platform against current process");
      return v8;
    }
    if ( !v25 )
    {
      v14 = "Database \"%ws\" is not of the same type as the main EXE";
      v15 = 1160LL;
LABEL_13:
      AslLogCallPrintf(3LL, "SdbpOpenLocalDatabaseEx", v15, v14, v28);
      return v8;
    }
  }
  v26 = 0LL;
  FileTimestamp = SdbpGetFileTimestamp(&v26, v28, 0);
  if ( FileTimestamp < 0 && FileTimestamp != -1073741790 && FileTimestamp != -1073741757 )
  {
    v14 = "Custom database has invalid path %S";
    v15 = 1178LL;
    goto LABEL_13;
  }
  v18 = SdbOpenDatabaseEx((__int64)v28, v17, 0);
  if ( v18 )
  {
    v19 = 32LL * (unsigned int)v9;
    v20 = 32 * (v9 + 2);
    *(_QWORD *)(v19 + a1 + 56) = v18;
    *(_DWORD *)(v20 + a1) = 2;
    *(_DWORD *)(a1 + 36) |= 1 << v9;
    if ( a2 )
    {
      v21 = *a2;
      *(_DWORD *)(v20 + a1) |= 1u;
      *(_OWORD *)(v19 + a1 + 40) = v21;
    }
    else
    {
      *(_OWORD *)(v19 + a1 + 40) = 0LL;
    }
    v8 = 1;
    if ( (_DWORD)v9 == 1 )
      *(_QWORD *)(a1 + 24) = v18;
    *a5 = (_DWORD)v9 << 28;
    if ( a4 )
      *a4 = v18;
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbpOpenLocalDatabaseEx", 1184LL, "Failed to open database");
  }
  return v8;
}

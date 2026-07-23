/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x14088C60C
 * Callers:
 *     SdbTagRefToTagID @ 0x14088C068 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpGetFileTimestamp @ 0x140887374 (SdbpGetFileTimestamp.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x14088A19C (SdbpCheckRuntimePlatformImpl.c)
 *     SdbpCloseLocalDatabaseEx @ 0x14088C524 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x14088C954 (SdbResolveDatabaseEx.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  unsigned int v10; // edi
  __int64 v11; // rdi
  const char *v12; // r9
  int v13; // r8d
  const char *v14; // r9
  int v15; // r8d
  int v16; // ecx
  int FileTimestamp; // eax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm0
  unsigned int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h]
  WCHAR v27[264]; // [rsp+50h] [rbp-B0h] BYREF

  v26 = 0LL;
  v8 = *a5;
  v9 = 0;
  v10 = *a5;
  LODWORD(v25) = 0;
  v11 = v10 >> 28;
  v23 = 0;
  v24 = 0;
  if ( (v8 & 0xF0000000) == 0 )
    v11 = v8;
  if ( (_DWORD)v11 != 1 && (unsigned int)(v11 - 3) > 0xC )
  {
    v12 = "Bad index 0x%lx";
    v13 = 1105;
LABEL_28:
    v16 = 1;
    goto LABEL_29;
  }
  SdbpCloseLocalDatabaseEx(a1, 0LL, v11);
  if ( (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v25, (unsigned int)&v23, (__int64)v27) - 1 > 0x102 )
  {
    v12 = "Cannot resolve database, the path length is 0x%lx";
    v13 = 1139;
    goto LABEL_28;
  }
  if ( *(_WORD *)(a1 + 584) != 0x7FFF )
  {
    if ( !(unsigned int)SdbpCheckRuntimePlatformImpl(&v24, 0, *(_DWORD *)(a1 + 552), v23) )
    {
      v14 = "Cannot check database runtime platform against current process";
      v15 = 1156;
LABEL_10:
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", v15, (_DWORD)v14);
      return v9;
    }
    if ( !v24 )
    {
      v12 = "Database \"%ws\" is not of the same type as the main EXE";
      v13 = 1160;
LABEL_13:
      v16 = 3;
LABEL_29:
      AslLogCallPrintf(v16, (unsigned int)"SdbpOpenLocalDatabaseEx", v13, (_DWORD)v12);
      return v9;
    }
  }
  v25 = 0LL;
  FileTimestamp = SdbpGetFileTimestamp(&v25, v27, 0);
  if ( FileTimestamp < 0 && FileTimestamp != -1073741790 && FileTimestamp != -1073741757 )
  {
    v12 = "Custom database has invalid path %S";
    v13 = 1178;
    goto LABEL_13;
  }
  v18 = SdbOpenDatabaseEx((__int64)v27);
  if ( !v18 )
  {
    v14 = "Failed to open database";
    v15 = 1184;
    goto LABEL_10;
  }
  v19 = 32LL * (unsigned int)v11;
  v20 = 32 * (v11 + 2);
  *(_QWORD *)(v19 + a1 + 56) = v18;
  *(_DWORD *)(v20 + a1) = 2;
  *(_DWORD *)(a1 + 36) |= 1 << v11;
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
  v9 = 1;
  if ( (_DWORD)v11 == 1 )
    *(_QWORD *)(a1 + 24) = v18;
  *a5 = (_DWORD)v11 << 28;
  if ( a4 )
    *a4 = v18;
  return v9;
}

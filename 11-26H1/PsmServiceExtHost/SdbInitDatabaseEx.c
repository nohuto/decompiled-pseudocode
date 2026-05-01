/*
 * XREFs of SdbInitDatabaseEx @ 0x18008FBFC
 * Callers:
 *     SdbInitDatabase @ 0x18008FBB0 (SdbInitDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x18008D3D4 (SdbCloseDatabaseRead.c)
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpGetBinaryRuntimePlatform @ 0x1800900C8 (SdbpGetBinaryRuntimePlatform.c)
 *     SdbGetPathSystemSdb @ 0x180091254 (SdbGetPathSystemSdb.c)
 *     SdbpInitializeMatchers @ 0x180096BA0 (SdbpInitializeMatchers.c)
 *     ShimExceptionHandler @ 0x180097528 (ShimExceptionHandler.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

_WORD *__fastcall SdbInitDatabaseEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v4; // ebx
  __int64 v5; // r14
  _WORD *Heap; // rax
  __int64 v7; // rdx
  _WORD *v8; // rdi
  __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // r15
  __int64 v13; // rax
  int MergeStubPath; // eax
  __int64 v15; // rdx
  const wchar_t ***v16; // rax
  const wchar_t **v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 v21; // [rsp+38h] [rbp-390h] BYREF
  __int64 v22; // [rsp+40h] [rbp-388h] BYREF
  int v23; // [rsp+48h] [rbp-380h]
  _WORD *v24; // [rsp+50h] [rbp-378h]
  _WORD *v25; // [rsp+58h] [rbp-370h]
  _WORD *v26; // [rsp+60h] [rbp-368h]
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-358h] BYREF
  char v28; // [rsp+18Ah] [rbp-23Eh]
  wchar_t String2; // [rsp+190h] [rbp-238h] BYREF
  _BYTE v30[6]; // [rsp+192h] [rbp-236h] BYREF

  v4 = 0;
  String2 = 0;
  memset_0(v30, 0, 0x206uLL);
  v5 = 0LL;
  v22 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x6F8uLL);
  v8 = Heap;
  v24 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL, "SdbInitDatabaseEx", 536LL, "Failed to allocate sdb context");
    return 0LL;
  }
  Heap[292] = a3;
  v21 = a3;
  if ( (unsigned int)SdbGetPathSystemSdb(&String2, v7, 1LL, &v21) )
  {
    v11 = 0;
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbpResolveInitSdbPath", 465LL, "SdbGetPathSystemSdb failed to get file path for SDB_SYSTEM");
    v11 = -1073741823;
  }
  if ( v11 < 0 )
  {
    AslLogCallPrintf(1LL, "SdbInitDatabaseEx", 551LL, "SdbpResolveInitSdbPath failed to resolve the sdb path [%x]", v11);
    v12 = (__int64 *)(v8 + 4);
LABEL_22:
    if ( *v12 )
      SdbCloseDatabaseRead(*v12);
    v20 = *((_QWORD *)v8 + 2);
    if ( v20 )
      SdbCloseDatabaseRead(v20);
    AslFree(NtCurrentPeb()->ProcessHeap, v8);
    if ( v5 )
      AslFree(NtCurrentPeb()->ProcessHeap, v5);
    return 0LL;
  }
  v23 = 0;
  *((_QWORD *)v8 + 1) = SdbOpenDatabaseEx((__int64)&String2, v10, 0);
  v12 = (__int64 *)(v8 + 4);
  v26 = v8 + 4;
  v13 = *((_QWORD *)v8 + 1);
  if ( !v13 )
  {
    AslLogCallPrintf(1LL, "SdbInitDatabaseEx", 579LL, "Unable to open main database %S", &String2);
    goto LABEL_22;
  }
  *((_QWORD *)v8 + 7) = v13;
  *((_DWORD *)v8 + 16) = 3;
  *(_OWORD *)(v8 + 20) = *(_OWORD *)(v13 + 28);
  v25 = v8 + 18;
  *((_DWORD *)v8 + 9) |= 1u;
  MergeStubPath = SdbGetMergeStubPath(&v22, (__int64)&String2);
  if ( MergeStubPath == -1073741772 )
    goto LABEL_29;
  if ( MergeStubPath < 0 )
  {
    AslLogCallPrintf(1LL, "SdbInitDatabaseEx", 612LL, "Unable to find merge stub database for %S", &String2);
    v5 = v22;
    goto LABEL_22;
  }
  v16 = (const wchar_t ***)*v12;
  if ( *v12 && (v17 = *v16) != 0LL && *v17 && _wcsicmp(*v17, &String2) != 0 )
  {
LABEL_29:
    *((_QWORD *)v8 + 2) = 0LL;
    v5 = v22;
  }
  else
  {
    v23 = 0;
    v5 = v22;
    *((_QWORD *)v8 + 2) = SdbOpenDatabaseEx(v22, v15, 0);
    v19 = *((_QWORD *)v8 + 2);
    if ( !v19 )
    {
      AslLogCallPrintf(1LL, "SdbInitDatabaseEx", 648LL, "Unable to open merge stub database %S", &String2);
      goto LABEL_22;
    }
    *((_QWORD *)v8 + 15) = v19;
    *((_DWORD *)v8 + 32) = 3;
    *(_OWORD *)(v8 + 52) = *(_OWORD *)(v19 + 28);
    *((_DWORD *)v8 + 9) |= 4u;
  }
  if ( v5 )
    AslFree(NtCurrentPeb()->ProcessHeap, v5);
  SdbpInitializeMatchers(v8);
  *((_DWORD *)v8 + 138) = SdbpGetBinaryRuntimePlatform(a3);
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  LOBYTE(v4) = v28 != 1;
  *((_DWORD *)v8 + 142) = v4 + 1;
  return v8;
}

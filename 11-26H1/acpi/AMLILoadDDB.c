/*
 * XREFs of AMLILoadDDB @ 0x1400DC2B4
 * Callers:
 *     ACPIInitializeDDB @ 0x1400DB558 (ACPIInitializeDDB.c)
 * Callees:
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     NewContext @ 0x14000B4B8 (NewContext.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     SyncLoadDDB @ 0x1400DDC3C (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // cl
  unsigned int DDB; // ebx
  PVOID v6; // rdi
  char *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int pszSrc; // [rsp+88h] [rbp+28h] BYREF
  PVOID Entry; // [rsp+90h] [rbp+30h] BYREF

  Entry = 0LL;
  v11 = 0LL;
  dword_14008ED38 = 0;
  v9 = 0LL;
  pszDest[0] = 0;
  v10 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( (gDebugger & 8) != 0 )
  {
    pszSrc = *a1;
    RtlStringCchCopyNA(byte_14008EC24, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(0x55u, KeGetCurrentThread(), byte_14008EC24, a1, 0LL);
  }
  v4 = 0;
  pszSrc = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&pszSrc);
    v4 = pszSrc;
  }
  gDeviceLockMutexSupported = v4;
  DDB = NewContext((char **)&Entry);
  if ( !DDB )
  {
    v6 = Entry;
    v7 = (char *)Entry;
    *((_QWORD *)Entry + 40) = gpheapGlobal;
    DDB = LoadDDB(v7, (const char *)a1, gpnsNameSpaceRoot, (__int64)&v9);
    if ( !DDB )
      DDB = SyncLoadDDB(v6);
  }
  if ( a2 )
    *a2 = v10;
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(0x10u, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return DDB;
}

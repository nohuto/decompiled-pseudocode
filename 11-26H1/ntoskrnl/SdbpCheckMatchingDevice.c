/*
 * XREFs of SdbpCheckMatchingDevice @ 0x140888A40
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v7; // edi
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (*StringTagPtr)(void); // rax
  __int64 v18; // rdx
  int v19; // eax
  __int128 v21; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a2 + 1744);
  v7 = 0;
  *a1 = 0;
  v21 = 0LL;
  if ( !v6 )
  {
    v10 = "No device query callback specified";
    v11 = 2394;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", v11, (_DWORD)v10);
    v13 = v21;
    goto LABEL_12;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( !FirstTag )
  {
    v10 = "Failed to read HWID attribute";
    v11 = 2400;
    goto LABEL_3;
  }
  StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, FirstTag, v15, v16);
  SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v21);
  v13 = v21;
  if ( (_QWORD)v21 )
  {
    v19 = guard_dispatch_icall_no_overrides(v21, v18);
    v12 = a6;
    v7 = 1;
    *a1 = v19;
    if ( a6 )
      *(_DWORD *)(a6 + 80) = 1;
  }
  else
  {
    if ( *((_QWORD *)&v21 + 1) )
    {
      AslLogCallPrintf(v21 + 1, (unsigned int)"SdbpCheckMatchingDevice", 2406, (unsigned int)"Out of memory");
      return v7;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", 2412, (unsigned int)"Failed to get HWID");
  }
LABEL_12:
  if ( v13 && v13 != *((_QWORD *)&v21 + 1) )
    AslFree(v12, v13);
  return v7;
}

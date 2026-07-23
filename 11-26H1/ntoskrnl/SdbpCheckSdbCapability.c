/*
 * XREFs of SdbpCheckSdbCapability @ 0x14088A250
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     SdbpIsSdbCapabilityPresent @ 0x14088B0E8 (SdbpIsSdbCapabilityPresent.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckSdbCapability(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int FirstTag; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (*StringTagPtr)(void); // rax
  const char *v14; // r9
  int v15; // r8d
  __int64 result; // rax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v18 = 0;
  v9 = 0;
  v17 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, FirstTag, v11, v12);
    SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v17);
    if ( (_QWORD)v17 )
    {
      SdbpIsSdbCapabilityPresent(&v18, a2);
      v9 = v18;
      v8 = 1;
    }
    else
    {
      if ( *((_QWORD *)&v17 + 1) )
      {
        v14 = "Out of memory";
        v15 = 3219;
      }
      else
      {
        v14 = "Failed to get the string from the database";
        v15 = 3225;
      }
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckSdbCapability", v15, (_DWORD)v14);
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}

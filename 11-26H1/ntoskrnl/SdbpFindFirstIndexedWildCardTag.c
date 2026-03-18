/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x1409E7480
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1409E57D4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A92348 (SdbpSearchDB.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     AslStringUpcaseToMultiByteN @ 0x1409E418C (AslStringUpcaseToMultiByteN.c)
 *     SdbGetIndex @ 0x1409E6C78 (SdbGetIndex.c)
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 *     SdbpKeyToAnsiString @ 0x1409E7724 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchExA @ 0x1409E7760 (AslStringPatternMatchExA.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpGetIndex @ 0x140B38224 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        union _RTL_RUN_ONCE *Parameter,
        __int16 a2,
        __int16 a3,
        const WCHAR *a4,
        unsigned int *a5)
{
  unsigned __int64 Value; // rcx
  bool IsUserAddress; // r12
  unsigned int Index; // eax
  char v12; // r13
  __int64 v13; // rdx
  const char *v14; // r9
  int v15; // r8d
  __int64 v17; // r15
  __int64 i; // rdi
  __int64 v19; // rsi
  __int64 ULong64FromUser; // rax
  unsigned int v21; // esi
  unsigned int FirstTag; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int16 *StringTagPtr; // rax
  unsigned int v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v29; // [rsp+40h] [rbp-C0h]
  _BYTE v30[272]; // [rsp+50h] [rbp-B0h] BYREF

  Value = Parameter[1].Value;
  v27 = 0;
  v26 = 0;
  IsUserAddress = MmIsUserAddress(Value);
  if ( !a5 )
  {
    v14 = "SdbpFindFirstIndexedWildCardTag passed a null pointer for pFindInfo.";
    v15 = 1014;
    goto LABEL_6;
  }
  *(_OWORD *)a5 = 0LL;
  *((_OWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = 0LL;
  if ( (a3 & 0xF000) != 0x8000 && (a3 & 0xF000) != 0x6000 )
  {
    v14 = "Wildcard searches only allowed for string tags";
    v15 = 1028;
    goto LABEL_6;
  }
  Index = SdbGetIndex(Parameter, a2, a3, &v26);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      1035,
      (unsigned int)"Failed to get an index for tag 0x%lx key 0x%lx");
    return 0LL;
  }
  v12 = v26;
  a5[5] = v26;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset_0(v30, 0, 0x104uLL);
  v28 = 0LL;
  v29 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v30, v13, a4) < 0 )
  {
    v14 = "Failed to convert name to multi-byte";
    v15 = 1052;
LABEL_6:
    AslLogCallPrintf(1, (unsigned int)"SdbpFindFirstIndexedWildCardTag", v15, (_DWORD)v14);
    return 0LL;
  }
  v17 = SdbpGetIndex(Parameter, *a5, &v27);
  if ( v17 )
  {
    for ( i = 0LL; (unsigned int)i < v27; i = (unsigned int)(i + 1) )
    {
      v19 = v17 + 12 * i;
      if ( IsUserAddress )
        ULong64FromUser = RtlReadULong64FromUser((volatile void *)(v17 + 12 * i));
      else
        ULong64FromUser = *(_QWORD *)v19;
      if ( (v12 & 2) != 0 )
      {
        SdbpKeyToAnsiString(ULong64FromUser, (char *)&v28 + 1);
        LOBYTE(v28) = 42;
      }
      else
      {
        SdbpKeyToAnsiString(ULong64FromUser, &v28);
        LOBYTE(v29) = 42;
      }
      if ( (unsigned int)AslStringPatternMatchExA(&v28, v30) )
      {
        v21 = IsUserAddress ? RtlReadULongFromUser((unsigned int *)(v19 + 8)) : *(_DWORD *)(v19 + 8);
        FirstTag = SdbFindFirstTag(Parameter, v21, *((unsigned __int16 *)a5 + 6));
        if ( FirstTag )
        {
          StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(Parameter, FirstTag, v23, v24);
          if ( StringTagPtr )
          {
            if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((unsigned __int16 **)a5 + 4)) )
            {
              a5[4] = i;
              return v21;
            }
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      1062,
      (unsigned int)"Failed to get index by tag id 0x%lx");
  }
  return 0LL;
}

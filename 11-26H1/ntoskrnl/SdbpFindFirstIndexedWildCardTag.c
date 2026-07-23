/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x1409D5500
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpKeyToAnsiString @ 0x1409D57A4 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchExA @ 0x1409D57E0 (AslStringPatternMatchExA.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     SdbGetIndex @ 0x1409D5FF0 (SdbGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x1409D88D0 (AslStringUpcaseToMultiByteN.c)
 *     SdbpGetIndex @ 0x140B3A434 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        _QWORD *Parameter,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned __int64 v6; // rcx
  bool IsUserAddress; // r12
  unsigned int Index; // eax
  __int64 v11; // rdx
  __int64 v13; // r15
  __int64 i; // rdi
  __int64 v15; // rsi
  __int64 ULong64FromUser; // rax
  unsigned int v17; // esi
  unsigned int FirstTag; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 StringTagPtr; // rax
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+40h] [rbp-C0h]
  _BYTE v25[272]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = Parameter[1];
  v22 = 0;
  IsUserAddress = MmIsUserAddress(v6);
  if ( !a5 )
    goto LABEL_5;
  *(_OWORD *)a5 = 0LL;
  *((_OWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = 0LL;
  if ( (a3 & 0xF000) != 0x8000 && (a3 & 0xF000) != 0x6000 )
    goto LABEL_5;
  Index = SdbGetIndex(Parameter);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset_0(v25, 0, 0x104uLL);
  v23 = 0LL;
  v24 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v25, v11, a4) >= 0 )
  {
    v13 = SdbpGetIndex(Parameter, *a5, &v22);
    if ( v13 )
    {
      for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
      {
        v15 = v13 + 12 * i;
        if ( IsUserAddress )
          ULong64FromUser = RtlReadULong64FromUser((volatile void *)(v13 + 12 * i));
        else
          ULong64FromUser = *(_QWORD *)v15;
        SdbpKeyToAnsiString(ULong64FromUser, &v23);
        LOBYTE(v24) = 42;
        if ( (unsigned int)AslStringPatternMatchExA(&v23, v25) )
        {
          v17 = IsUserAddress ? RtlReadULongFromUser((unsigned int *)(v15 + 8)) : *(_DWORD *)(v15 + 8);
          FirstTag = SdbFindFirstTag((__int64)Parameter, v17, *((_WORD *)a5 + 6));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(Parameter, FirstTag, v19, v20);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a5 + 4)) )
              {
                a5[4] = i;
                return v17;
              }
            }
          }
        }
      }
    }
    else
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
    }
  }
  else
  {
LABEL_5:
    AslLogCallPrintf(1LL, (__int64)"SdbpFindFirstIndexedWildCardTag");
  }
  return 0LL;
}

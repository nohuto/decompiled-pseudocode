/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x1409D84BC
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
 *     SdbpKeyToAnsiString @ 0x1409D57A4 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchExA @ 0x1409D57E0 (AslStringPatternMatchExA.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     AslStringUpcaseToMultiByteN @ 0x1409D88D0 (AslStringUpcaseToMultiByteN.c)
 *     SdbpGetIndex @ 0x140B3A434 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(unsigned __int64 *a1, unsigned int *a2)
{
  bool IsUserAddress; // r12
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 Index; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 ULong64FromUser; // rcx
  unsigned int v11; // esi
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 *StringTagPtr; // rax
  unsigned int v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-D0h]
  _BYTE v20[272]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = 0;
  IsUserAddress = MmIsUserAddress(a1[1]);
  memset_0(v20, 0, 0x104uLL);
  v5 = *((_QWORD *)a2 + 4);
  v18 = 0LL;
  v19 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v20, v6, v5) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v17);
    if ( Index )
    {
      LODWORD(v8) = a2[4];
      while ( 1 )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v17 )
          break;
        v9 = Index + 12 * v8;
        if ( IsUserAddress )
          ULong64FromUser = RtlReadULong64FromUser((volatile void *)(Index + 12 * v8));
        else
          ULong64FromUser = *(_QWORD *)v9;
        if ( (a2[5] & 2) != 0 )
        {
          SdbpKeyToAnsiString(ULong64FromUser, (__int64)&v18 + 1);
          LOBYTE(v18) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(ULong64FromUser, (__int64)&v18);
          LOBYTE(v19) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchExA((char *)&v18, v20) )
        {
          v11 = IsUserAddress ? RtlReadULongFromUser((unsigned int *)(v9 + 8)) : *(_DWORD *)(v9 + 8);
          FirstTag = SdbFindFirstTag((__int64)a1, v11, *((_WORD *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a1, FirstTag, v13, v14);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((unsigned __int16 **)a2 + 4)) )
              {
                a2[4] = v8;
                return v11;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}

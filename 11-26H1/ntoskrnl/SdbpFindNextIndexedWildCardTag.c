/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x1409E4454
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
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 *     SdbpKeyToAnsiString @ 0x1409E7724 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchExA @ 0x1409E7760 (AslStringPatternMatchExA.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbpGetIndex @ 0x140B38224 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, unsigned int *a2)
{
  bool IsUserAddress; // r12
  const WCHAR *v5; // r8
  __int64 v6; // rdx
  __int64 Index; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 ULong64FromUser; // rcx
  unsigned int v11; // esi
  unsigned int FirstTag; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 StringTagPtr; // rax
  unsigned int v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-D0h]
  _BYTE v20[272]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = 0;
  IsUserAddress = MmIsUserAddress(*(_QWORD *)(a1 + 8));
  memset_0(v20, 0, 0x104uLL);
  v5 = (const WCHAR *)*((_QWORD *)a2 + 4);
  v18 = 0LL;
  v19 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v20, v6, v5) >= 0 )
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
          SdbpKeyToAnsiString(ULong64FromUser, (char *)&v18 + 1);
          LOBYTE(v18) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(ULong64FromUser, &v18);
          LOBYTE(v19) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchExA(&v18, v20) )
        {
          v11 = IsUserAddress ? RtlReadULongFromUser((unsigned int *)(v9 + 8)) : *(_DWORD *)(v9 + 8);
          FirstTag = SdbFindFirstTag(a1, v11, *((unsigned __int16 *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v13, v14);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a2 + 4)) )
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

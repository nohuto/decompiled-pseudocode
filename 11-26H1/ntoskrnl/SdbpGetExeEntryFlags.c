/*
 * XREFs of SdbpGetExeEntryFlags @ 0x14088A6B8
 * Callers:
 *     SdbpCheckForMatch @ 0x140A974B0 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbReadBinaryTag @ 0x1409D78C8 (SdbReadBinaryTag.c)
 *     SdbGetEntryFlags @ 0x140B4CAA0 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  const char *v8; // r9
  int v9; // r8d
  int EntryFlags; // eax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r9
  int v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v19 = 0LL;
  v18 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868LL);
  if ( !FirstTag )
  {
    v8 = "Failed to read TAG_EXE_ID for tiExe 0x%x";
    v9 = 718;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetExeEntryFlags", v9, (_DWORD)v8);
    return v4;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, FirstTag, &v19, 16LL) )
  {
    v8 = "Failed to read the GUID for tiExe 0x%x";
    v9 = 723;
    goto LABEL_3;
  }
  EntryFlags = SdbGetEntryFlags(&v19, &v18);
  v11 = EntryFlags != 0 ? v18 : 0;
  v12 = SdbFindFirstTag(a1, v5, 28685LL);
  if ( v12 )
  {
    v11 |= 0x1000u;
    v13 = SdbFindFirstTag(a1, v12, 16400LL);
    if ( v13 )
    {
      if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0LL, v14) == 2 )
        v11 |= 0x2000u;
    }
  }
  v15 = SdbFindFirstTag(a1, v5, 16434LL);
  if ( v15 )
    v11 |= (unsigned int)SdbReadDWORDTag(a1, v15, 0LL, v16) << 16;
  *a3 = v11;
  return 1;
}

/*
 * XREFs of SdbGetDatabaseID @ 0x18008D4A8
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbReadBinaryTag @ 0x1800936A4 (SdbReadBinaryTag.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  int v8; // ebp
  const void *v9; // rsi

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v9 = (const void *)(a1 + 28);
  }
  else
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( !FirstTag )
    {
      AslLogCallPrintf(1LL, "SdbGetDatabaseID", 560LL, "Failed to get root tag");
      return v3;
    }
    v7 = SdbFindFirstTag(a1, FirstTag, 36871LL);
    v8 = v7;
    if ( !v7 )
    {
      AslLogCallPrintf(1LL, "SdbGetDatabaseID", 566LL, "Failed to get the database id");
      return v3;
    }
    v9 = (const void *)(a1 + 28);
    if ( !(unsigned int)SdbReadBinaryTag(a1, v7, a1 + 28, 16LL) )
    {
      AslLogCallPrintf(1LL, "SdbGetDatabaseID", 571LL, "Failed to read database id 0x%lx", v8);
      return v3;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
    v2 = *(_DWORD *)(a1 + 24);
  }
  if ( (v2 & 2) != 0 )
  {
    memmove_0(a2, v9, 0x10uLL);
    return 1;
  }
  return v3;
}

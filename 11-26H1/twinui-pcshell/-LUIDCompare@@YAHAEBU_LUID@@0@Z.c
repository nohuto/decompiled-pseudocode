/*
 * XREFs of ?LUIDCompare@@YAHAEBU_LUID@@0@Z @ 0x1806752BC
 * Callers:
 *     ?AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180675200 (-AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z.c)
 *     ?AdapterInfoSort@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180675210 (-AdapterInfoSort@@YAHPEBU_AdapterInfo@@0_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LUIDCompare(const struct _LUID *a1, const struct _LUID *a2)
{
  LONG HighPart; // r8d
  __int64 result; // rax

  HighPart = a1->HighPart;
  if ( HighPart == a2->HighPart )
  {
    if ( a1->LowPart == a2->LowPart )
      return 0LL;
    else
      return a1->LowPart < a2->LowPart ? -1 : 1;
  }
  else
  {
    result = 1LL;
    if ( HighPart < a2->HighPart )
      return 0xFFFFFFFFLL;
  }
  return result;
}

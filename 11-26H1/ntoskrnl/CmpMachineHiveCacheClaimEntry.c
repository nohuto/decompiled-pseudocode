/*
 * XREFs of CmpMachineHiveCacheClaimEntry @ 0x1408578F0
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 * Callees:
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x140861BB4 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 */

__int64 __fastcall CmpMachineHiveCacheClaimEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  int v7; // eax
  unsigned int v8; // edi

  v4 = a1 + 392;
  v7 = CmpHiveCacheClaimHiveEntry(a1, a2, a3, a4, a1 + 392);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CmpHiveCacheEntryCleanup(a1, 3LL);
    *(_BYTE *)(a4 + 9) = *(_BYTE *)(a1 + 824);
  }
  else
  {
    SetFailureLocation(v4, 0, 52, v7, 16);
    CmpHiveCacheEntryCleanup(a1, 2LL);
  }
  return v8;
}

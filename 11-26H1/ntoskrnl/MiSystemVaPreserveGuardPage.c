/*
 * XREFs of MiSystemVaPreserveGuardPage @ 0x1406F57D8
 * Callers:
 *     MiExtendDynamicBitMap @ 0x1404FFA5C (MiExtendDynamicBitMap.c)
 *     MiMarkSystemVaAllocated @ 0x14050AA78 (MiMarkSystemVaAllocated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSystemVaPreserveGuardPage(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 == 4 )
  {
    LOBYTE(v2) = a1 == qword_140E2D6B8 - 384 + 384LL * (unsigned __int16)KeNumberNodes;
  }
  else if ( a2 == 5 || a2 == 14 )
  {
    return 1;
  }
  return v2;
}

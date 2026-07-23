/*
 * XREFs of SepAdtAuditablePrivilege @ 0x1404CF78C
 * Callers:
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAdtAuditablePrivilege(__int64 a1, unsigned int a2)
{
  char v2; // r8
  unsigned int i; // r9d
  unsigned int j; // r10d
  LUID *v6; // rcx

  v2 = 0;
  for ( i = 0; i < a2; ++i )
  {
    for ( j = 0; j < 0xE; ++j )
    {
      v6 = (&off_140005690)[j];
      if ( *(_DWORD *)(a1 + 12LL * i) == v6->LowPart && *(_DWORD *)(a1 + 12LL * i + 4) == v6->HighPart )
        return 1;
    }
  }
  return v2;
}

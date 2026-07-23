/*
 * XREFs of MiGenerateAccessViolation @ 0x1404E6E58
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1403A8568 (MiCheckSystemPageTables.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDeterminePoolType @ 0x140353D3C (MiDeterminePoolType.c)
 */

__int64 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // al
  KIRQL v4; // si
  _QWORD *v5; // rbx

  v1 = *a1;
  v2 = 0;
  if ( !MiDeterminePoolType(*a1) )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 0LL;
  if ( CurrentIrql == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2C730);
  }
  else
  {
    v4 = ExAcquireSpinLockShared(&dword_140E2C730);
  }
  v5 = (_QWORD *)qword_140E2C738;
  while ( v5 )
  {
    if ( v1 > v5[4] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v1 >= v5[3] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v4 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2C730);
  else
    ExReleaseSpinLockShared(&dword_140E2C730, v4);
  LOBYTE(v2) = v5 != 0LL;
  return v2;
}

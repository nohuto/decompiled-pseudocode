/*
 * XREFs of MiGenerateAccessViolation @ 0x1404ED878
 * Callers:
 *     MiRaisedIrqlFault @ 0x1403A2A28 (MiRaisedIrqlFault.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1403A6808 (MiCheckSystemPageTables.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDeterminePoolType @ 0x140351CB8 (MiDeterminePoolType.c)
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
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2C5B0);
  }
  else
  {
    v4 = ExAcquireSpinLockShared(&dword_140E2C5B0);
  }
  v5 = (_QWORD *)qword_140E2C5B8;
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2C5B0);
  else
    ExReleaseSpinLockShared(&dword_140E2C5B0, v4);
  LOBYTE(v2) = v5 != 0LL;
  return v2;
}

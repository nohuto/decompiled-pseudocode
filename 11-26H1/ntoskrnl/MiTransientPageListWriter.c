/*
 * XREFs of MiTransientPageListWriter @ 0x1405056A0
 * Callers:
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiTransientPageListWriter(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rbx
  unsigned int v6; // edi

  v4 = ExAcquireSpinLockShared(&dword_140E2EBE0);
  v5 = (_QWORD *)qword_140E2EBE8;
  v6 = 0;
  while ( v5 )
  {
    if ( a1 > v5[7] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v5[7] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 && (!v5[4] || a2 < v5[5] || a2 > v5[6]) )
    v5 = 0LL;
  if ( v4 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EBE0);
  else
    ExReleaseSpinLockShared(&dword_140E2EBE0, v4);
  LOBYTE(v6) = v5 != 0LL;
  return v6;
}

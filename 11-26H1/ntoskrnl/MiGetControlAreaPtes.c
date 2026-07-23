/*
 * XREFs of MiGetControlAreaPtes @ 0x1402C57D0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiPrepareDataViewSubsections @ 0x140995B50 (MiPrepareDataViewSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx

  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      result = 0LL;
      v8 = a1 + 128;
      if ( a1 != -128 )
      {
        do
        {
          v9 = *(unsigned int *)(v8 + 44);
          v8 = *(_QWORD *)(v8 + 16);
          result += v9;
        }
        while ( v8 );
      }
    }
    else
    {
      return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
    }
  }
  else
  {
    v2 = (volatile LONG *)(a1 + 72);
    v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v4 = *(_QWORD *)(a1 + 288);
    v5 = 0LL;
    while ( v4 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 8);
    }
    v6 = (*(unsigned int *)(v5 - 20) | ((unsigned __int64)(*(_DWORD *)(v5 - 24) & 0xFFC0) << 26))
       + *(unsigned int *)(v5 - 12)
       - (unsigned __int64)*(unsigned int *)(v5 - 4);
    if ( v3 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v2);
    else
      ExReleaseSpinLockShared(v2, v3);
    return v6;
  }
  return result;
}

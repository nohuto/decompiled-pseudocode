/*
 * XREFs of MiGetPageForWriteCluster @ 0x14033FC88
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 */

__int64 __fastcall MiGetPageForWriteCluster(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  unsigned __int64 v11; // rax

  v7 = 0;
  *a5 = 1;
  v9 = MiLockTransitionLeafPageEx(a2);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 34) & 7) == 3
      && !(unsigned __int16)*(_DWORD *)(v9 + 32)
      && (*(_QWORD *)(v9 + 16) & 0xFFFFFFFFF801FC1FuLL) == a3 )
    {
      v11 = a3;
      if ( qword_140E2D8C0 && (a3 & 0x10) == 0 )
        v11 = a3 & qword_140E2D8C8;
      if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(v11)) )
      {
        *a5 = MiReferencePageForModifiedWrite(v10, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
        __writecr8(0LL);
        if ( *a5 )
          goto LABEL_19;
        return -1LL;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
  }
  if ( (unsigned int)*a4 <= 0x1F )
  {
    if ( qword_140E2D8C0 )
    {
      if ( (a3 & 0x10) == 0 )
        a3 &= qword_140E2D8C8;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
    {
      v10 = 48 * qword_140E361B8 - 0x220000000000LL;
      v7 = *a4 + 1;
LABEL_19:
      *a4 = v7;
      return (__int64)(v10 + 0x220000000000LL) / 48;
    }
  }
  return -1LL;
}

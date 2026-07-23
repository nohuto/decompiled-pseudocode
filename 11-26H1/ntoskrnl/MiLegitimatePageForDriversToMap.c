/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x1402D2A30
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  int v7; // esi
  int v8; // edi
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bp
  __int64 BaseResidentPage; // rax
  int v13; // ecx

  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
  {
    v7 = 3;
    v8 = HIWORD(*(_DWORD *)(a1 + 32)) & 7;
    v9 = (a1 + 0x220000000000LL) / 48;
    if ( KeGetCurrentIrql() >= 2u )
      v10 = MiSafeLockPageAtDpc(v9);
    else
      v10 = MiSafeLockPage(v9);
    v11 = v10;
    if ( v10 == 17 )
      return 3221225496LL;
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    {
      BaseResidentPage = MiGetBaseResidentPage(a1);
      v8 = HIWORD(*(_DWORD *)(BaseResidentPage + 32)) & 7;
      if ( (*(_QWORD *)(BaseResidentPage + 40) & 0x10000000000LL) != 0 )
      {
        v7 = 3 - ((*(_DWORD *)(BaseResidentPage + 36) >> 27) & 3);
        if ( v7 == 3 )
          v7 = 3;
      }
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v11 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
    if ( v7 == 3 || v8 != 6 )
      return 3221225496LL;
    return 0LL;
  }
  v4 = 0xFFFFF68000000000uLL;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( v5 < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( v5 > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    return 0LL;
  v13 = *(_DWORD *)(a1 + 32);
  if ( (v13 & 0x200000) != 0 )
  {
    v4 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
        return 0LL;
    }
  }
  if ( (v13 & 0x80000) != 0 || MiGetPageTablePfnBuddyRaw(a1, v4, a3) == 0x10000000000LL )
    return 0LL;
  return 3221225496LL;
}

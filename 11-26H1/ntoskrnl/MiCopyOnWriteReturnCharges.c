/*
 * XREFs of MiCopyOnWriteReturnCharges @ 0x14036CF80
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404AD45C (MiReleaseLockedVaLeafCharges.c)
 */

unsigned __int64 __fastcall MiCopyOnWriteReturnCharges(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( *(_DWORD *)(a1 + 88) )
  {
    MiReleaseLockedVaLeafCharges(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 40), 1LL);
    return MiUnlockPageTableCharges(
             48 * (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 40LL) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
             1);
  }
  return result;
}

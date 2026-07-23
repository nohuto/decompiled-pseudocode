/*
 * XREFs of MiRotatedToFrameBuffer @ 0x1403145E4
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    v2 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
    if ( v2 > qword_140E2D920 || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 1;
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 8) | 0x8000000000000000uLL) != a1
       || ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) ^ (v3 >> 12)) & 0xFFFFFFFFFFLL) != 0)
      && (*(__int64 *)(48 * v2 - 0x220000000000LL + 40) >= 0
       || *(__int64 *)(48 * v2 - 0x220000000000LL + 8) <= 0
       || (*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) & 0x10000000000LL) != 0) )
    {
      return 1;
    }
  }
  return result;
}

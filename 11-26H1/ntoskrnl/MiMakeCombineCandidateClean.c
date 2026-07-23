/*
 * XREFs of MiMakeCombineCandidateClean @ 0x14031B3EC
 * Callers:
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiMakeCombineCandidateClean(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  MiWriteValidPteNewProtection((__int64 *)a1, *a1 & 0xFFFFFFFFFFFFFFBDuLL);
  result = MiLockPageAndSetDirty(48 * ((v2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x180000;
    if ( (_DWORD)result == 1572864 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)((_QWORD)a1 << 25) >> 16, a2);
  }
  return result;
}

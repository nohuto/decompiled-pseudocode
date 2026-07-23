/*
 * XREFs of CcCancelMmWaitForUninitializeCacheMap @ 0x14050B81C
 * Callers:
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall CcCancelMmWaitForUninitializeCacheMap(__int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  LONG result; // eax
  unsigned __int64 v5; // rdx

  v2 = (unsigned __int64 *)(a1 + 280);
  while ( 1 )
  {
    v5 = *v2;
    if ( !*v2 )
      break;
    if ( (v5 & 1) != 0 )
    {
      v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      *v2 = *(_QWORD *)v3;
      result = KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
      ++LODWORD(EmpParseLock.SchedulerAssistLastYieldBoostTime);
      *(_DWORD *)(a1 + 152) |= 0x8000u;
    }
    else
    {
      v2 = (unsigned __int64 *)*v2;
    }
  }
  *(_DWORD *)(a1 + 152) &= ~0x10000u;
  return result;
}

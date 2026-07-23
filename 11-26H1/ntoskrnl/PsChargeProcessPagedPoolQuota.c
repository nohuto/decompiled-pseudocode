/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1409BDB00
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1409BDA88 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 1, a2);
}

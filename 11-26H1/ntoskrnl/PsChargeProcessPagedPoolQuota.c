/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140972810
 * Callers:
 *     ExpAllocateHandleTable @ 0x140971C08 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140972798 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x1409BC9CC (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(*(_QWORD *)(a1 + 760), a1, 1, a2);
}

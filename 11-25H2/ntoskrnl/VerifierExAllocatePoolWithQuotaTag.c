/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x140B81540
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14048D0D0 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T a2, ULONG a3)
{
  POOL_TYPE v3; // r10d
  __int32 v4; // ebx
  __int64 result; // rax

  v3 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64))pXdvExAllocatePoolWithQuotaTag[0]
    || !pXdvExAllocatePoolWithQuotaTag[0] )
  {
    result = (__int64)ExAllocatePoolWithQuotaTag(v3, a2, a3);
  }
  else
  {
    result = guard_dispatch_icall_no_overrides(v3 | 0x80u);
  }
  if ( !result && !v4 )
    RtlRaiseStatus(-1073741670);
  return result;
}

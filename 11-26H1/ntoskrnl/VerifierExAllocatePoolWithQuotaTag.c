/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x140C35B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1404C7190 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64))pXdvExAllocatePoolWithQuotaTag[0]
    || !pXdvExAllocatePoolWithQuotaTag[0] )
  {
    result = (__int64)ExAllocatePoolWithQuotaTag(v3, a2, a3);
  }
  else
  {
    result = guard_dispatch_icall_no_overrides(v3 | 0x80u, 0LL);
  }
  if ( !result && !v4 )
    RtlRaiseStatus(-1073741670);
  return result;
}

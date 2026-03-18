/*
 * XREFs of FsRtlAllocatePoolWithQuota @ 0x1405B5E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1404CD760 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuota(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}

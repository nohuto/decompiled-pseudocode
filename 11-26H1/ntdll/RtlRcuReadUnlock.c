/*
 * XREFs of RtlRcuReadUnlock @ 0x1801499E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWakeAddressAll @ 0x18004D5B0 (RtlWakeAddressAll.c)
 */

struct _TEB *__fastcall RtlRcuReadUnlock(__int64 a1, struct _TEB ***a2)
{
  struct _TEB **v3; // rcx
  struct _TEB *result; // rax
  __int64 *v5; // rcx

  v3 = *a2;
  if ( !*a2 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 120));
  if ( !*v3 )
    __fastfail(0xEu);
  result = (struct _TEB *)((char *)*v3 - 1);
  *v3 = result;
  if ( !result )
  {
    v5 = (__int64 *)(v3 + 2);
    *v5 = *(_QWORD *)(a1 + 16) | 1LL;
    return (struct _TEB *)RtlWakeAddressAll((unsigned __int64)v5);
  }
  return result;
}

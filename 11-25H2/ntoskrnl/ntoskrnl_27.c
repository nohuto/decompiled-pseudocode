/*
 * XREFs of ntoskrnl_27 @ 0x14097E210
 * Callers:
 *     SPCallServerHandleQueryPolicy @ 0x14097D124 (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x14097DEE0 (NtQueryLicenseValue.c)
 *     sub_14097E278 @ 0x14097E278 (sub_14097E278.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v7; // r8
  int v8; // r9d
  const UNICODE_STRING *v9; // r11

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD7480 )
    return guard_dispatch_icall_no_overrides(Blink);
  else
    return SLQueryLicenseValueInternal((__int64)Blink, v9, v5, v7, v8, a5);
}

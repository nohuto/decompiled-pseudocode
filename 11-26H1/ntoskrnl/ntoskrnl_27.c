/*
 * XREFs of ntoskrnl_27 @ 0x140A6A6F0
 * Callers:
 *     NtQueryLicenseValue @ 0x140A6A340 (NtQueryLicenseValue.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edx
  struct _LIST_ENTRY *Blink; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r11

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( *(_QWORD *)&ExpPlatformBinaryLock.ThreadTimerDelay )
    return guard_dispatch_icall_no_overrides((__int64)Blink, v9);
  else
    return SLQueryLicenseValueInternal((_DWORD)Blink, v9, v5, v7, v8, a5);
}

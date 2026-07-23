/*
 * XREFs of PdcPoReportLidState @ 0x140B53DD0
 * Callers:
 *     <none>
 * Callees:
 *     PopNotifyLidStateChange @ 0x140B53DF8 (PopNotifyLidStateChange.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoReportLidState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  LOBYTE(v3) = v2;
  PopNotifyLidStateChange(v3);
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}

/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x140827680
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140803EEC (RtlAllocateAndInitializeSidEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char EtwpUserInAdminOrLogUsersGroup()
{
  __int64 v0; // rdx
  int v1; // ebx
  int v3; // [rsp+48h] [rbp+20h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp+24h]
  PVOID P; // [rsp+50h] [rbp+28h] BYREF
  int v6; // [rsp+58h] [rbp+30h] BYREF
  int v7; // [rsp+5Ch] [rbp+34h]

  v3 = 0;
  v4 = 1280;
  P = 0LL;
  RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
  v6 = 32;
  v7 = 558;
  if ( (int)RtlAllocateAndInitializeSidEx((__int64)&v3, v0, &v6, (__int64 *)&P) < 0 )
    return 0;
  v1 = RtlCheckTokenMembership(0LL, P);
  ExFreePoolWithTag(P, 0);
  if ( v1 < 0 )
    return 0;
  else
    return 0;
}

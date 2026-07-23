/*
 * XREFs of KeStopProfile @ 0x1404A4318
 * Callers:
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     EtwTimeProfileReset @ 0x14082DA0C (EtwTimeProfileReset.c)
 *     ExpProfileDelete @ 0x14084B5F0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14084BBB0 (NtStopProfile.c)
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KiStopProfileTarget @ 0x140421130 (KiStopProfileTarget.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+28h] [rbp-D8h]
  int v5; // [rsp+2Ch] [rbp-D4h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  _BYTE v7[256]; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+138h] [rbp+38h]
  char v9; // [rsp+140h] [rbp+40h]

  memset_0(v7, 0, 0x110uLL);
  v5 = KeNumberProcessors_0;
  Context = a1;
  v4 = KeNumberProcessors_0;
  v6 = 2097153LL;
  memset_0(v7, 0, sizeof(v7));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget(&Context);
  else
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}

/*
 * XREFs of KeStopProfile @ 0x1404AAC88
 * Callers:
 *     KeStartProfile @ 0x1405F32A8 (KeStartProfile.c)
 *     EtwTimeProfileReset @ 0x1408277CC (EtwTimeProfileReset.c)
 *     ExpProfileDelete @ 0x140842550 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140842B10 (NtStopProfile.c)
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x140A84B18 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KiStopProfileTarget @ 0x14042CA60 (KiStopProfileTarget.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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

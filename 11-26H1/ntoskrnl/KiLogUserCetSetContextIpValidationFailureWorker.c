/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x1407BE6F0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1408320EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  _OWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v3);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KiUnstackDetachProcess((__int64)v3, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 488));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}

/*
 * XREFs of PsMakeSiloContextPermanent @ 0x140A304E0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x140A30F2C (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FC8E30;
  return PspStorageMakeSlotReadOnly(v1);
}

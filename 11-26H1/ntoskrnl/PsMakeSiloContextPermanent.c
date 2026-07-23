/*
 * XREFs of PsMakeSiloContextPermanent @ 0x140A4B440
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     PspStorageMakeSlotReadOnly @ 0x140A4BE8C (PspStorageMakeSlotReadOnly.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
    v1 = *(_QWORD *)(a1 + 1536);
  else
    v1 = qword_140FC9E30;
  return PspStorageMakeSlotReadOnly(v1);
}

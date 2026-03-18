/*
 * XREFs of VfGetPristineDriverInit @ 0x140B7D8FC
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x140B95780 (VfPnpVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140B95F80 (VfPowerVerifyIrpStackDownward.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140B961B0 (VfWmiVerifyIrpStackDownward.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 */

PDRIVER_INITIALIZE __fastcall VfGetPristineDriverInit(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_INITIALIZE *v2; // rax
  PDRIVER_INITIALIZE result; // rax

  if ( !MmIsDriverVerifying(a1) )
    return a1->DriverInit;
  v2 = *(PDRIVER_INITIALIZE **)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v2 )
    return a1->DriverInit;
  result = *v2;
  if ( !result )
    return a1->DriverInit;
  return result;
}

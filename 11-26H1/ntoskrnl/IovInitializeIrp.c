/*
 * XREFs of IovInitializeIrp @ 0x140C47EFC
 * Callers:
 *     IoInitializeIrpPriv @ 0x140473960 (IoInitializeIrpPriv.c)
 *     IoInitializeIrp @ 0x1404766A0 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140C45954 (VfIoInitializeIrp.c)
 */

void __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  if ( !VfIoDisabled )
    VfIoInitializeIrp(a1, a4, 0);
}

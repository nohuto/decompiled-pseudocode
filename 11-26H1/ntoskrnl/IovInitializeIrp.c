/*
 * XREFs of IovInitializeIrp @ 0x140C4DF0C
 * Callers:
 *     IoInitializeIrpPriv @ 0x14046D0E0 (IoInitializeIrpPriv.c)
 *     IoInitializeIrp @ 0x14046FE20 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140C4B964 (VfIoInitializeIrp.c)
 */

void __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  if ( !VfIoDisabled )
    VfIoInitializeIrp(a1, a4, 0);
}

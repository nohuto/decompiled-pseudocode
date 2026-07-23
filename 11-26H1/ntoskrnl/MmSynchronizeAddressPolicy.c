/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140B27900
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1LL);
}

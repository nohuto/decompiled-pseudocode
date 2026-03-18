/*
 * XREFs of MmSynchronizeAddressPolicy @ 0x140B256A0
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 */

void __fastcall MmSynchronizeAddressPolicy(struct _KPROCESS *a1)
{
  if ( a1 != PsInitialSystemProcess )
    MiDeleteProcessShadow((__int64)a1, 1LL);
}

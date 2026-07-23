/*
 * XREFs of EtwpObjectHandleRundown @ 0x14077E4F4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x14092BB30 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(PEPROCESS Process, __int64 a2)
{
  __int64 v4; // rdi

  v4 = ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId(Process);
    *(_BYTE *)(a2 + 68) = (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0;
    ExEnumHandleTable(v4, EtwpObjectHandleEnumCallback, a2, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
}

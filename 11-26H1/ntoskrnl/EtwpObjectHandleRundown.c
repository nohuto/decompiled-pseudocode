/*
 * XREFs of EtwpObjectHandleRundown @ 0x14077B8B4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14096EA90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x1408FBBA0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
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

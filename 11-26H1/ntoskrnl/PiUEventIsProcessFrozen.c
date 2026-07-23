/*
 * XREFs of PiUEventIsProcessFrozen @ 0x1407A8508
 * Callers:
 *     PiUEventIsClientStuck @ 0x1407A8490 (PiUEventIsClientStuck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 */

bool __fastcall PiUEventIsProcessFrozen(void *a1)
{
  bool v1; // bl
  PEPROCESS Process; // [rsp+38h] [rbp+10h] BYREF

  Process = 0LL;
  v1 = 0;
  if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    v1 = Process->FreezeCount + ((*(_DWORD *)&Process->0 >> 3) & 1) != 0;
  if ( Process )
    ObfDereferenceObjectWithTag(Process, 0x746C6644u);
  return v1;
}

/*
 * XREFs of RtlSetThreadErrorMode @ 0x1800DC0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetThreadErrorMode(ULONG NewMode, PULONG OldMode)
{
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  __int64 v5; // rax

  if ( (NewMode & 0xFFFFFF8F) != 0 )
    return -1073741585;
  v3 = NtCurrentTeb();
  WowTebOffset = v3->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
  if ( OldMode )
  {
    v5 = 3880LL;
    if ( (_DWORD)v3 != LODWORD(v3->NtTib.SubSystemTib) )
      v5 = 5808LL;
    *OldMode = *(_DWORD *)((char *)&v3->NtTib.ExceptionList + v5);
  }
  if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
    LODWORD(v3->glDispatchTable[167]) = NewMode;
  else
    v3->HardErrorMode = NewMode;
  return 0;
}

/*
 * XREFs of RtlSetThreadErrorMode @ 0x1800DF160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetThreadErrorMode(unsigned int a1, _DWORD *a2)
{
  struct _TEB *v3; // rcx
  __int64 WowTebOffset; // rax
  __int64 v5; // rax

  if ( (a1 & 0xFFFFFF8F) != 0 )
    return 3221225711LL;
  v3 = NtCurrentTeb();
  WowTebOffset = v3->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v3 = (struct _TEB *)((char *)v3 + WowTebOffset);
  if ( a2 )
  {
    v5 = 3880LL;
    if ( (_DWORD)v3 != LODWORD(v3->NtTib.SubSystemTib) )
      v5 = 5808LL;
    *a2 = *(_DWORD *)((char *)&v3->NtTib.ExceptionList + v5);
  }
  if ( (_DWORD)v3 == LODWORD(v3->NtTib.SubSystemTib) )
    LODWORD(v3->glDispatchTable[167]) = a1;
  else
    v3->HardErrorMode = a1;
  return 0LL;
}

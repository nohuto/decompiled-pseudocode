/*
 * XREFs of ?ProbeAlignment@?$UserModePointer@X@@QEBAX_KK@Z @ 0x140297004
 * Callers:
 *     NtUserSetObjectInformation @ 0x1402BD320 (NtUserSetObjectInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall UserModePointer<void>::ProbeAlignment(_QWORD *a1, __int64 a2, int a3)
{
  if ( a2 )
  {
    if ( ((unsigned int)(a3 - 1) & *a1) != 0LL )
      ExRaiseDatatypeMisalignment();
  }
}

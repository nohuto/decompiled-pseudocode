/*
 * XREFs of NtDeleteAtom @ 0x1409FC4A0
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1409FCD10 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  PVOID AtomTableHandle; // [rsp+30h] [rbp-18h]

  AtomTableHandle = 0LL;
  v3 = 0LL;
  PsInvokeWin32Callout(2LL, &v3, 0LL, 0LL);
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}

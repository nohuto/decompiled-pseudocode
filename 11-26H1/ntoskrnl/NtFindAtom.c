/*
 * XREFs of NtFindAtom @ 0x140847A30
 * Callers:
 *     DifNtFindAtomWrapper @ 0x14067B740 (DifNtFindAtomWrapper.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLookupAtomInAtomTable @ 0x140974FB0 (RtlLookupAtomInAtomTable.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

NTSTATUS __cdecl NtFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  size_t v4; // rbx
  PVOID v6; // r12
  NTSTATUS result; // eax
  char PreviousMode; // r14
  WCHAR *v9; // r15
  __int16 UShortFromUser; // ax
  USHORT Atoma[6]; // [rsp+24h] [rbp-274h] BYREF
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  PVOID AtomTableHandle; // [rsp+40h] [rbp-258h]
  _WORD *v14; // [rsp+48h] [rbp-250h]
  _WORD v15[256]; // [rsp+50h] [rbp-248h] BYREF

  v4 = Length;
  v12 = 0LL;
  AtomTableHandle = 0LL;
  PsInvokeWin32Callout(2LL, &v12, 0LL, 0LL);
  v6 = AtomTableHandle;
  if ( !AtomTableHandle )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      UShortFromUser = RtlReadUShortFromUser(Atom);
      RtlWriteUShortToUser(Atom, UShortFromUser);
    }
    if ( AtomName )
    {
      v9 = v15;
      v14 = v15;
      if ( (_DWORD)v4 && ((unsigned __int8)AtomName & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v15, AtomName, v4);
      v15[v4 >> 1] = 0;
    }
  }
  Atoma[0] = 0;
  result = RtlLookupAtomInAtomTable(v6, v9, Atoma);
  if ( result >= 0 )
  {
    if ( Atom )
    {
      if ( PreviousMode )
        RtlWriteUShortToUser(Atom, Atoma[0]);
      else
        RtlCopyVolatileMemory(Atom, Atoma, 2uLL);
    }
    return 0;
  }
  return result;
}

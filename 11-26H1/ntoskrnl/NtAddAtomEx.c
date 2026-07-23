/*
 * XREFs of NtAddAtomEx @ 0x1408478B0
 * Callers:
 *     DifNtAddAtomExWrapper @ 0x14066DC60 (DifNtAddAtomExWrapper.c)
 *     NtAddAtom @ 0x140847890 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14045AA90 (RtlAddAtomToAtomTableEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

NTSTATUS __cdecl NtAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  size_t v6; // rbx
  __int64 v8; // r12
  NTSTATUS result; // eax
  char PreviousMode; // r14
  WCHAR *v11; // r15
  __int16 UShortFromUser; // ax
  USHORT Src[6]; // [rsp+24h] [rbp-274h] BYREF
  __int128 v14; // [rsp+30h] [rbp-268h] BYREF
  __int64 v15; // [rsp+40h] [rbp-258h]
  _WORD *v16; // [rsp+48h] [rbp-250h]
  _WORD v17[256]; // [rsp+50h] [rbp-248h] BYREF

  v6 = Length;
  if ( (Flags & 0xFFFFFFFD) != 0 )
    return -1073741811;
  v14 = 0LL;
  v15 = 0LL;
  PsInvokeWin32Callout(2LL, &v14, 0LL, 0LL);
  v8 = v15;
  if ( !v15 )
    return -1073741790;
  if ( (unsigned int)v6 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      UShortFromUser = RtlReadUShortFromUser(Atom);
      RtlWriteUShortToUser(Atom, UShortFromUser);
    }
    if ( AtomName )
    {
      v11 = v17;
      v16 = v17;
      if ( (_DWORD)v6 && ((unsigned __int8)AtomName & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(v17, AtomName, v6);
      v17[v6 >> 1] = 0;
    }
  }
  Src[0] = 0;
  result = RtlAddAtomToAtomTableEx(v8, v11, Src, Flags);
  if ( result >= 0 )
  {
    if ( Atom )
    {
      if ( PreviousMode )
        RtlWriteUShortToUser(Atom, Src[0]);
      else
        RtlCopyVolatileMemory(Atom, Src, 2uLL);
    }
    return 0;
  }
  return result;
}

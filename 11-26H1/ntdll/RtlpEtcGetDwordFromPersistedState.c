/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x180148714
 * Callers:
 *     RtlpEcReadPolicyState @ 0x1801485E0 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlStringCchPrintfW @ 0x180059060 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1801487D4 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x180148940 (RtlpGetPersistedRegistryLocation.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        wchar_t *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // rbx
  wchar_t *Atom; // rax
  __int64 v11; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = a3;
    Atom = (wchar_t *)RtlpAllocateAtom(2LL * a3);
    v11 = (__int64)Atom;
    if ( Atom )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Atom, v9, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v11, a5, a6);
      RtlpSysVolFree(v11);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}

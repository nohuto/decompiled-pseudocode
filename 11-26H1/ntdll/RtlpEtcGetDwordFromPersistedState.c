/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x1801485C4
 * Callers:
 *     RtlpEcReadPolicyState @ 0x180148490 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlStringCchPrintfW @ 0x1800435E0 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180148684 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x1801487F0 (RtlpGetPersistedRegistryLocation.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(
        const WCHAR *a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int PersistedRegistryLocation; // ebx
  __int64 v9; // rbx
  wchar_t *Atom; // rax
  wchar_t *v11; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2);
  if ( PersistedRegistryLocation >= 0 )
  {
    v9 = a3;
    Atom = (wchar_t *)RtlpAllocateAtom(2LL * a3);
    v11 = Atom;
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

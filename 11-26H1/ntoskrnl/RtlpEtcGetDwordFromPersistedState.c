/*
 * XREFs of RtlpEtcGetDwordFromPersistedState @ 0x140621A64
 * Callers:
 *     RtlpEcReadPolicyState @ 0x140621930 (RtlpEcReadPolicyState.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x140621B34 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140621C98 (RtlpGetPersistedRegistryLocation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromPersistedState(const WCHAR *a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  NTSTATUS PersistedRegistryLocation; // ebx
  size_t v7; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v9; // rdi

  PersistedRegistryLocation = RtlpGetPersistedRegistryLocation(a1, a2);
  if ( PersistedRegistryLocation >= 0 )
  {
    v7 = a3;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      PersistedRegistryLocation = RtlStringCchPrintfW(Pool2, v7, L"%s%s", 0LL, a4);
      if ( PersistedRegistryLocation >= 0 )
        PersistedRegistryLocation = RtlpEtcGetDwordFromRegistry(v9);
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)PersistedRegistryLocation;
}

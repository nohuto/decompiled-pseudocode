/*
 * XREFs of KsepGetLoadedModulesList @ 0x1407BE654
 * Callers:
 *     KseRegisterShimEx @ 0x1407BCFE0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407BDDD4 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(_QWORD *a1)
{
  __int64 Paged; // rax
  void *v4; // rdi
  int SystemInformation; // eax
  unsigned int v6; // ebx

  if ( !a1 )
    return 3221225485LL;
  while ( 1 )
  {
    Paged = KsepPoolAllocatePaged();
    v4 = (void *)Paged;
    if ( !Paged )
      break;
    SystemInformation = ZwQuerySystemInformation(11LL, Paged);
    v6 = SystemInformation;
    if ( SystemInformation >= 0 )
    {
      *a1 = v4;
      return v6;
    }
    if ( SystemInformation != -1073741820 )
    {
      KsepPoolFreePaged(v4);
      return v6;
    }
    KsepPoolFreePaged(v4);
  }
  return (unsigned int)-1073741670;
}

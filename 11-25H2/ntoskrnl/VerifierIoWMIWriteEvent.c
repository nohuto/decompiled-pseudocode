/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x140B91670
 * Callers:
 *     <none>
 * Callees:
 *     WmiVerifierCopyEvent @ 0x140640424 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x14064047C (WmiVerifierTakeEventOwnership.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // ebx
  void *v4; // rsi
  void *v5; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v4 = WmiVerifierCopyEvent(v2);
    if ( v4 )
    {
      v3 = guard_dispatch_icall_no_overrides(v4);
      v5 = (void *)a1;
      if ( v3 < 0 )
        v5 = v4;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(v2);
  }
  return (unsigned int)v3;
}

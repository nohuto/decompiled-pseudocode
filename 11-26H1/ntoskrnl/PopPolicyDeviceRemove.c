/*
 * XREFs of PopPolicyDeviceRemove @ 0x1407DB1A4
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1407DB220 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  LONG_PTR *v4; // rcx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v4 = *(LONG_PTR **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = result;
    *(_QWORD *)(result + 8) = v4;
    *(_QWORD *)a1 = 0LL;
    guard_dispatch_icall_no_overrides(a1, a2);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}

/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x140AA4D44
 * Callers:
 *     PiIommuAllocateExtension @ 0x140AA4BCC (PiIommuAllocateExtension.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PipIommuValidateDeviceId @ 0x140AA43A4 (PipIommuValidateDeviceId.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx

  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 8), 0LL);
    v4 = -1073741823;
  }
  else
  {
    v4 = -1073741637;
  }
  result = v4;
  *a2 = 0LL;
  return result;
}

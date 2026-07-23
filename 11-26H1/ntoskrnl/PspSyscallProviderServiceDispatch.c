/*
 * XREFs of PspSyscallProviderServiceDispatch @ 0x1407356E0
 * Callers:
 *     PsSyscallProviderDispatch @ 0x140B45560 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspCaptureSystemServiceInMemoryArgs @ 0x1407F31E0 (PspCaptureSystemServiceInMemoryArgs.c)
 */

__int64 __fastcall PspSyscallProviderServiceDispatch(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE v5[136]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a3 & 0xF) == 0 )
    return guard_dispatch_icall_no_overrides(a1[7], a1[8]);
  result = PspCaptureSystemServiceInMemoryArgs((void *)(a1[48] + 40LL), v5);
  if ( (int)result >= 0 )
    return guard_dispatch_icall_no_overrides(a1[7], a1[8]);
  return result;
}

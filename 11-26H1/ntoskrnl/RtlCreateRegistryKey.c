/*
 * XREFs of RtlCreateRegistryKey @ 0x140804BF0
 * Callers:
 *     DifRtlCreateRegistryKeyWrapper @ 0x1406953F0 (DifRtlCreateRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CE86F0 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  char v2; // r8
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = 1;
  result = RtlpGetRegistryHandle(RelativeTo, Path, v2, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}

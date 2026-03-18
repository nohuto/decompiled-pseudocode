/*
 * XREFs of RtlCheckRegistryKey @ 0x140A10F50
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1404D0170 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x140695280 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapOpenPolicyRegistryKey @ 0x140CE86F0 (WheapOpenPolicyRegistryKey.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}

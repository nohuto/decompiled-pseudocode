/*
 * XREFs of WerpFreeSid @ 0x1801223C0
 * Callers:
 *     SendMessageToWERService @ 0x1800CB53C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CB848 (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x1800CBEC0 (RtlLengthRequiredSid.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall WerpFreeSid(void *a1)
{
  ULONG v2; // eax
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a1;
  v2 = RtlLengthRequiredSid(1u);
  RegionSize = v2;
  if ( a1 && v2 )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  else
    return -1073741811;
}

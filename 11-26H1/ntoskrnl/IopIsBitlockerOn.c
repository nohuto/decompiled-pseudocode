/*
 * XREFs of IopIsBitlockerOn @ 0x1405C99FC
 * Callers:
 *     IopInitDumpCapsuleSupport @ 0x1405C99A8 (IopInitDumpCapsuleSupport.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140B1C920 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

bool IopIsBitlockerOn()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-28h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h]

  P = 0LL;
  Handle = 0LL;
  v0 = 1;
  v3 = 0LL;
  RtlInitUnicodeString(&v3, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\BitlockerStatus");
  v2 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v3, 131097LL, v2) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    ObCloseHandle(Handle, 0);
  }
  return v0 == 1;
}

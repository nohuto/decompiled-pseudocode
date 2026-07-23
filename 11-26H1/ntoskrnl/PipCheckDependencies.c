/*
 * XREFs of PipCheckDependencies @ 0x140D116F4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PipLookupGroupName @ 0x140CC8510 (PipLookupGroupName.c)
 */

__int64 __fastcall PipCheckDependencies(void *a1)
{
  PVOID v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebp
  const WCHAR *v5; // rdi
  __int64 MaximumLength; // r14
  ULONG_PTR v7; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  P = 0LL;
  DestinationString = 0LL;
  if ( IopGetRegistryValue(a1, L"DependOnGroup", 0, &P) < 0 )
    return 1LL;
  v2 = P;
  v3 = 1;
  v4 = *((_DWORD *)P + 3);
  v5 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
  while ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, v5);
    MaximumLength = DestinationString.MaximumLength;
    DestinationString.Length = DestinationString.MaximumLength;
    v7 = PipLookupGroupName((const void **)&DestinationString, 0);
    if ( v7 && !*(_DWORD *)(v7 + 28) )
    {
      v3 = 0;
      break;
    }
    v4 -= MaximumLength;
    v5 = (const WCHAR *)((char *)v5 + MaximumLength);
  }
  ExFreePoolWithTag(v2, 0);
  return v3;
}

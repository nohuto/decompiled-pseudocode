/*
 * XREFs of PiGetServiceNameInfo @ 0x140A10FA4
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x140A110B0 (IoOpenDriverRegistryKey.c)
 *     IoGetDriverDirectory @ 0x140B00ED0 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140A114F8 (PipOpenServiceEnumKeys.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetServiceNameInfo(__int64 a1, UNICODE_STRING *a2, char *a3)
{
  char v6; // si
  NTSTATUS inited; // ebx
  int RegistryValue; // eax
  PVOID v9; // rdi
  UNICODE_STRING *p_DestinationString; // rdx
  unsigned int v12; // ecx
  const WCHAR *v13; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h]

  DestinationString = 0LL;
  P = 0LL;
  Handle = 0LL;
  v6 = 1;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PipOpenServiceEnumKeys(*(_QWORD *)(a1 + 48) + 24LL, 131097LL, &Handle, 0LL, 0);
  if ( inited < 0 )
    goto LABEL_8;
  RegistryValue = IopGetRegistryValue(Handle);
  v9 = P;
  inited = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_3;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) != 1
      || (v12 = *((_DWORD *)P + 3), v12 < 2)
      || (v13 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2)), v13[((unsigned __int64)v12 >> 1) - 1]) )
    {
      inited = -1073741492;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( inited >= 0 )
      {
        if ( RtlCompareUnicodeStrings(
               *(PCWCH *)(*(_QWORD *)(a1 + 48) + 32LL),
               (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 24LL) >> 1,
               DestinationString.Buffer,
               (unsigned __int64)DestinationString.Length >> 1,
               1u) )
        {
          p_DestinationString = &DestinationString;
LABEL_4:
          inited = RtlDuplicateUnicodeString(1u, p_DestinationString, a2);
          if ( inited >= 0 )
            *a3 = v6;
          goto LABEL_6;
        }
LABEL_3:
        v6 = 0;
        p_DestinationString = (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL);
        goto LABEL_4;
      }
    }
  }
LABEL_6:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}

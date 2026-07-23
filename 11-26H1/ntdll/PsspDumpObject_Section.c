/*
 * XREFs of PsspDumpObject_Section @ 0x180100720
 * Callers:
 *     <none>
 * Callees:
 *     NtQuerySection @ 0x18015F860 (NtQuerySection.c)
 */

NTSTATUS __fastcall PsspDumpObject_Section(void *a1, void *a2, unsigned int a3, _DWORD *a4)
{
  NTSTATUS result; // eax
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  ReturnLength = 0LL;
  if ( a3 < 0x18 )
    return -1073741789;
  result = NtQuerySection(a1, SectionBasicInformation, a2, 0x18uLL, &ReturnLength);
  if ( result < 0 )
  {
    *a4 = 0;
  }
  else if ( HIDWORD(ReturnLength) )
  {
    return -2147483643;
  }
  else
  {
    *a4 = ReturnLength;
  }
  return result;
}

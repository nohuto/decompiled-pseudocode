/*
 * XREFs of PnpGetDriverNameFromString @ 0x1405DC900
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14048D330 (PnpDeviceCompletionRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDriverNameFromString(unsigned __int16 *a1, char **a2, _DWORD *a3)
{
  int Length; // ebx
  unsigned int v7; // edi
  void *Pool2; // r15
  unsigned int v10; // eax
  char *v11; // rdx
  NTSTATUS v12; // edi
  _STRING v13; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  Length = 0;
  DestinationString = 0LL;
  v13 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 48;
  if ( *a1 < 0x30u )
    v7 = *a1;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = *a1;
  v11 = (char *)*((_QWORD *)a1 + 1);
  if ( v10 > v7 )
    v11 += v10 - v7;
  memmove(Pool2, v11, v7);
  *((_WORD *)Pool2 + ((unsigned __int64)v7 >> 1)) = 0;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
  v12 = RtlUnicodeStringToAnsiString(&v13, &DestinationString, 1u);
  if ( v12 >= 0 && v13.Buffer )
  {
    Length = v13.Length;
    *a2 = v13.Buffer;
  }
  else
  {
    *a2 = 0LL;
  }
  *a3 = Length;
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v12;
}

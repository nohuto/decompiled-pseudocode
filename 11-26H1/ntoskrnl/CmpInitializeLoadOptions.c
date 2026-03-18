/*
 * XREFs of CmpInitializeLoadOptions @ 0x1406E20E8
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

wchar_t *__fastcall CmpInitializeLoadOptions(ULONG_PTR BugCheckParameter3)
{
  const char *v1; // rdx
  wchar_t *result; // rax
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(const char **)(BugCheckParameter3 + 216);
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, v1);
  CmpLoadOptions.Length = 0;
  CmpLoadOptions.MaximumLength = 2 * (DestinationString.Length + 1);
  CmpLoadOptions.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL);
  if ( !CmpLoadOptions.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&CmpLoadOptions, &DestinationString, 0);
  result = CmpLoadOptions.Buffer;
  CmpLoadOptions.Buffer[DestinationString.Length] = 0;
  CmpLoadOptions.Length += 2;
  return result;
}

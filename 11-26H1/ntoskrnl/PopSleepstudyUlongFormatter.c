/*
 * XREFs of PopSleepstudyUlongFormatter @ 0x140B2C140
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B9F90 (RtlUnicodeStringPrintf.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PopSleepstudyUlongFormatter(unsigned int *a1, UNICODE_STRING *a2)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741670;
  a2->Buffer = (wchar_t *)Pool2;
  *(_DWORD *)&a2->Length = 1310720;
  return RtlUnicodeStringPrintf(a2, L"%d", *a1);
}

/*
 * XREFs of PopSleepstudyUlong64Formatter @ 0x140B31320
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B9F90 (RtlUnicodeStringPrintf.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PopSleepstudyUlong64Formatter(_QWORD *a1, UNICODE_STRING *a2)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741670;
  a2->Buffer = (wchar_t *)Pool2;
  *(_DWORD *)&a2->Length = 2752512;
  return RtlUnicodeStringPrintf(a2, L"%lld", *a1);
}

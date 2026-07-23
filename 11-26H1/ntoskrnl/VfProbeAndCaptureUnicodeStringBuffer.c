/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x140C274E4
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140C2747C (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, int a2)
{
  ULONG_PTR v5; // rdx
  __int64 v6; // rcx
  void *Pool2; // rdi
  void *v8; // rdx
  size_t v9; // r8

  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = 256LL;
    if ( a2 != 1 )
      v6 = 64LL;
    Pool2 = (void *)ExAllocatePool2(v6, v5, 0x43536656u);
    if ( !Pool2 )
      return 3221225495LL;
    v8 = (void *)*((_QWORD *)a1 + 1);
    v9 = *a1;
    if ( KeGetCurrentThread()->PreviousMode )
      RtlCopyFromUser(Pool2, v8, v9);
    else
      memmove(Pool2, v8, v9);
    *((_QWORD *)a1 + 1) = Pool2;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = *a1;
  return 0LL;
}

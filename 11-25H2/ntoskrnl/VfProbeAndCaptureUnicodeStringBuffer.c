/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x140B73028
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B72FEC (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, int a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  void *Pool2; // rax
  void *v8; // rdi

  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = 256LL;
    if ( a2 != 1 )
      v6 = 64LL;
    Pool2 = (void *)ExAllocatePool2(v6, v5, 0x43536656uLL);
    v8 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v8;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = *a1;
  return 0LL;
}

/*
 * XREFs of PfpPrivSourceAdd @ 0x14096A114
 * Callers:
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 * Callees:
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall PfpPrivSourceAdd(unsigned int *a1, void *a2)
{
  __int64 v3; // rax
  int ULongFromUser; // eax

  v3 = a1[4];
  if ( (unsigned int)v3 >= a1[5] )
    return 3221225507LL;
  RtlCopyToUser((void *)(*(_QWORD *)a1 + 16LL + 96 * v3), a2, 0x60uLL);
  ULongFromUser = RtlReadULongFromUser((unsigned int *)(*(_QWORD *)a1 + 8LL));
  RtlWriteULongToUser((_DWORD *)(*(_QWORD *)a1 + 8LL), ULongFromUser + 1);
  ++a1[4];
  return 0LL;
}

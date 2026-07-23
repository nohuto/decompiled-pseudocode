/*
 * XREFs of PopSetHiberFileMcb @ 0x140B03534
 * Callers:
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    if ( qword_140F108F8 )
      ExFreePoolWithTag(qword_140F108F8, 0x72626968u);
    LODWORD(dword_140F10900) = a2;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    qword_140F108F8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140F10900);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

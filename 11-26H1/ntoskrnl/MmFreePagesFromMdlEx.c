/*
 * XREFs of MmFreePagesFromMdlEx @ 0x140345450
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmFreePagesFromMdlEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 || (*(_DWORD *)(BugCheckParameter2 + 40) & 0xFFF) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x122EuLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(unsigned int *)(BugCheckParameter2 + 40));
  return MiFreePagesFromMdl(BugCheckParameter2);
}

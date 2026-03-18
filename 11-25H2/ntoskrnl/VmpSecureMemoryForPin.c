/*
 * XREFs of VmpSecureMemoryForPin @ 0x140790344
 * Callers:
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1404D0714 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmSecureVirtualMemoryEx @ 0x1409F0080 (MmSecureVirtualMemoryEx.c)
 */

__int64 __fastcall VmpSecureMemoryForPin(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax

  v4 = a1 + 16;
  v8 = 0;
  if ( ExAcquireRundownProtection_0(a1 + 16) )
  {
    v9 = MmSecureVirtualMemoryEx(a2 << 12, a3 << 12, 1LL);
    if ( v9 )
    {
      *a4 = v9;
    }
    else
    {
      v8 = -1073741670;
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v8;
}

/*
 * XREFs of VmpSecureMemoryForPin @ 0x140823D20
 * Callers:
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x140513450 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MmSecureVirtualMemoryEx @ 0x14077A5F0 (MmSecureVirtualMemoryEx.c)
 */

__int64 __fastcall VmpSecureMemoryForPin(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax

  v4 = a1 + 18;
  v8 = 0;
  if ( ExAcquireRundownProtection_0(a1 + 18) )
  {
    v9 = MmSecureVirtualMemoryEx(a2 << 12, a3 << 12, 1u, 10);
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

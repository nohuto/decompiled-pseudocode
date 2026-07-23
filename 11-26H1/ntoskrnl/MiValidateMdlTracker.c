/*
 * XREFs of MiValidateMdlTracker @ 0x1404E901C
 * Callers:
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EF760 (MmUpdateMdlTrackerForMdlSwitch.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateMdlTracker(ULONG_PTR BugCheckParameter3, int a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter3 + 24);
  v4 = *(_QWORD *)(BugCheckParameter3 + 40);
  v6 = (((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v2 + 40) + 4095) >> 12;
  if ( v4 != v6 )
    KeBugCheckEx(0x76u, 5uLL, *(_QWORD *)(BugCheckParameter3 + 24), BugCheckParameter3, v6 | (v4 << 32));
  v7 = *(_QWORD *)(v2 + 48);
  result = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( result != v7 )
    KeBugCheckEx(0x76u, 6uLL, v2, BugCheckParameter3, v7 | (result << 32));
  if ( a2 )
  {
    result = rapidhash_internal((unsigned __int8 *)(v2 + 48), 8 * v6, 0xBDD89AA982704029uLL);
    if ( *(_DWORD *)(BugCheckParameter3 + 60) != (_DWORD)result )
      KeBugCheckEx(
        0x76u,
        7uLL,
        v2,
        BugCheckParameter3,
        (unsigned int)result | (*(_QWORD *)(BugCheckParameter3 + 64) << 32));
  }
  return result;
}

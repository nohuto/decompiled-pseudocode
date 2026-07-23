/*
 * XREFs of PopEnlargeHiberFile @ 0x1407D32A4
 * Callers:
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1404A8DD0 (MmGetNumberOfPhysicalPages.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  qword_140F12108 = qword_140F108F0;
  v5 = 0LL;
  v6 = 0LL;
  v2 = MmGetNumberOfPhysicalPages(0) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140F12118 = v5;
    qword_140F12120 = v6;
    qword_140F12110 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}

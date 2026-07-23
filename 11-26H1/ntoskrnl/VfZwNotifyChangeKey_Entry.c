/*
 * XREFs of VfZwNotifyChangeKey_Entry @ 0x140C38A90
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140C26580 (ViZwCheckVirtualAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     ViZwShouldCheck @ 0x140C4DB94 (ViZwShouldCheck.c)
 */

void __fastcall VfZwNotifyChangeKey_Entry(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rcx
  unsigned int v5; // eax

  if ( (unsigned int)ViZwShouldCheck(a1, a2, a3) )
  {
    v4 = a1[6];
    if ( v4 )
    {
      ViZwCheckVirtualAddress(v4, *a1);
      v5 = *((_DWORD *)a1 + 10);
      if ( v5 > 6 && v5 - 32 > 0x1F )
        CarReportRuleViolationFromNt(196, 252LL, *a1, a1[5], 0LL, 8u, *a1);
    }
    ViZwCheckVirtualAddress(a1[4], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
  }
}

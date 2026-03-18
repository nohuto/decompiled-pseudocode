/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x140193AF0
 * Callers:
 *     DpiFdoCreateChildDescriptor @ 0x14023FC98 (DpiFdoCreateChildDescriptor.c)
 *     DpEvalAcpiMethod @ 0x1403B1CC0 (DpEvalAcpiMethod.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140430744 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v4 = DpiAcpiPrepareAcpiChildNameList();
  v5 = 0;
  if ( v4 >= 0 )
  {
    while ( v5 < *(_DWORD *)(a1 + 3416) )
    {
      v6 = *(_QWORD *)(a1 + 3432);
      if ( a2 == *(_DWORD *)(v6 + 16LL * v5) )
        return *(_QWORD *)(v6 + 16LL * v5 + 8);
      ++v5;
    }
  }
  return 0LL;
}

/*
 * XREFs of FillDevmodeFromVidPn @ 0x1402D71CC
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402D747C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall FillDevmodeFromVidPn(__int64 a1, int a2, void *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rcx
  const struct DMMVIDPNPRESENTPATH *v9; // rbx
  int v10; // eax
  __int64 v12; // rax

  v6 = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v7 = a1 + 120;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = 0LL;
  if ( v8 != v7 )
    v9 = (const struct DMMVIDPNPRESENTPATH *)(v8 - 8);
  while ( v9 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v9 + 11) + 24LL) == a2 )
    {
      v10 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(v9, (struct _CDD_DEVMODE *)a3);
      v6 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(3LL, v9, v10);
        WdLogGlobalForLineNumber = 5470;
      }
      return v6;
    }
    v12 = *((_QWORD *)v9 + 1);
    v9 = (const struct DMMVIDPNPRESENTPATH *)(v12 - 8);
    if ( v12 == v7 )
      v9 = 0LL;
  }
  return v6;
}

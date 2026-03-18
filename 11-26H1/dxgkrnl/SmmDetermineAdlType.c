/*
 * XREFs of SmmDetermineAdlType @ 0x1400411F0
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140040E10 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmDetermineAdlType(__int64 a1, __int64 a2, char a3)
{
  int v3; // r8d
  int v5; // ecx

  if ( (a3 & 1) != 0 )
    return 1LL;
  v3 = a3 & 2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL) & 1) != 0 )
  {
    if ( v3 )
      return 1LL;
  }
  else
  {
    if ( v3 && (((*(_DWORD *)(a2 + 44) & 0x1E) - 6) & 0xFFFFFFFB) == 0 )
      return 1LL;
    v5 = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( ((v5 - 2) & 0xFFFFFFF9) == 0 && v5 != 6 )
      return 2LL;
  }
  return 0LL;
}

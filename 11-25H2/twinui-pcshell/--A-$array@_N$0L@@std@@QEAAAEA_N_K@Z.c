/*
 * XREFs of ??A?$array@_N$0L@@std@@QEAAAEA_N_K@Z @ 0x1804EC614
 * Callers:
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x1800F31E0 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18016FBF8 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z @ 0x1801C9E60 (-ContainsPositioner@PositionerPriority@@UEAAHW4SHELL_POSITIONER_TYPE@@@Z.c)
 *     ?GetBitfieldToPersist@PositionerPriority@@UEAAKXZ @ 0x1801E56F0 (-GetBitfieldToPersist@PositionerPriority@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::array<bool,11>::operator[](__int64 a1, __int64 a2)
{
  return a2 + a1;
}

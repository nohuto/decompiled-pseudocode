/*
 * XREFs of MiWalkEntireImage @ 0x140ACA024
 * Callers:
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiMakeRestOfImageHot @ 0x1408816B4 (MiMakeRestOfImageHot.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 *     MiValidateSectionNewSecurity @ 0x140AC9C64 (MiValidateSectionNewSecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC9D6C (MiFreeRetpolineImportInfo.c)
 *     MiSwitchBaseAddress @ 0x140AC9EC0 (MiSwitchBaseAddress.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiGetImageSubsectionBounds @ 0x140AB9F48 (MiGetImageSubsectionBounds.c)
 *     MiGetSectionStrongImageReference @ 0x140B4F550 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // edi
  __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+28h] [rbp-49h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h]
  unsigned __int64 v12; // [rsp+58h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-11h]
  __int64 ControlAreaPartition; // [rsp+68h] [rbp-9h]
  _KPROCESS *Process; // [rsp+70h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+88h] [rbp+17h]

  memset_0(v10, 0, 0xA0uLL);
  v2 = *(_QWORD *)a1;
  v10[0] = a1;
  v3 = *(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (MiFlags & 0x8000) == 0
    || (*(_DWORD *)(v2 + 92) & 0xC0000) == 0
    || *(_QWORD *)(v3 + 64)
    || (result = MiGetSectionStrongImageReference(*(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF8uLL), (int)result >= 0) )
  {
    if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
      v11 |= 0x10u;
    ControlAreaPartition = MiGetControlAreaPartition(v2);
    if ( (*(_DWORD *)(a1 + 24) & 1) == 0 && (*(_DWORD *)(v2 + 56) & 0x800) != 0 )
      v11 |= 1u;
    v8 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    v12 = v3;
    v16 = -1LL;
    v17 = 9;
    v9 = v2 + 128;
    while ( v9 )
    {
      v10[1] = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( (unsigned int)MiGetImageSubsectionBounds((__int64)v10, v5, v6, v7) )
      {
        v8 = MiWalkEntireSubsection((__int64)v10);
        if ( v8 < 0 )
          break;
      }
    }
    if ( ListEntry )
      MiDecayPfnFullyInitialized(ListEntry, 0);
    return (unsigned int)v8;
  }
  return result;
}

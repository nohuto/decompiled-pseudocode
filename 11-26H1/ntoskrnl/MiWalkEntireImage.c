/*
 * XREFs of MiWalkEntireImage @ 0x140AC8434
 * Callers:
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiMakeRestOfImageHot @ 0x14087B2B4 (MiMakeRestOfImageHot.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiValidateSectionNewSecurity @ 0x140AC8074 (MiValidateSectionNewSecurity.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC817C (MiFreeRetpolineImportInfo.c)
 *     MiSwitchBaseAddress @ 0x140AC82D0 (MiSwitchBaseAddress.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiGetControlAreaPartition @ 0x140457F60 (MiGetControlAreaPartition.c)
 *     MiDecayPfnFullyInitialized @ 0x140498358 (MiDecayPfnFullyInitialized.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiGetImageSubsectionBounds @ 0x140AB8908 (MiGetImageSubsectionBounds.c)
 *     MiGetSectionStrongImageReference @ 0x140B4D7C0 (MiGetSectionStrongImageReference.c)
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
    if ( (stru_140E36558.WaitRegister.Flags & 1) != 0 )
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

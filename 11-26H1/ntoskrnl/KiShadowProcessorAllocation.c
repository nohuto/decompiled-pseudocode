/*
 * XREFs of KiShadowProcessorAllocation @ 0x140BFE350
 * Callers:
 *     KeWriteProtectProcessorState @ 0x140BFA178 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 * Callees:
 *     KiShadowKernelSectionByAddress @ 0x1405F9C1C (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405F9C94 (KiUnshadowKernelSectionByAddress.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int ShadowMapping; // edi
  char v7; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned int i; // ebp
  unsigned __int64 v11; // rcx
  unsigned int j; // ebp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v17; // [rsp+6Ch] [rbp+24h]

  v17 = 0;
  if ( !KiKvaShadow )
    goto LABEL_24;
  ShadowMapping = MmCreateShadowMapping(a2, 20480LL);
  if ( !ShadowMapping )
  {
LABEL_25:
    v7 = 0;
    goto LABEL_26;
  }
  v7 = 1;
  ShadowMapping = MmCreateShadowMapping(a1 + 44672, 4096LL);
  if ( !ShadowMapping )
    goto LABEL_26;
  v7 = 3;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    ShadowMapping = KiShadowKernelSectionByAddress();
    if ( !ShadowMapping )
      goto LABEL_26;
    v7 = 7;
  }
  if ( !(_BYTE)KiKernelCetEnabled )
  {
LABEL_23:
    v17 = 0;
LABEL_24:
    ShadowMapping = 1;
    goto LABEL_25;
  }
  if ( a3 )
    v8 = *(_QWORD *)(a3 + 136);
  else
    v8 = (*(_QWORD *)(a1 + 39904) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
  ShadowMapping = MmCreateShadowMapping(v8 - 0x2000, 4096LL);
  if ( ShadowMapping )
  {
    v7 |= 8u;
    v9 = a3 ? *(_QWORD *)(a3 + 224) : *(_QWORD *)(a1 + 39920);
    ShadowMapping = MmCreateShadowMapping(v9, 4096LL);
    if ( ShadowMapping )
    {
      v7 |= 0x10u;
      for ( i = 1; i <= 4; ++i )
      {
        if ( a3 )
          v11 = *(_QWORD *)(a3 + 8LL * i + 184);
        else
          v11 = (*(_QWORD *)(*(_QWORD *)(a1 + 39920) + 8LL * i) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
        ShadowMapping = MmCreateShadowMapping(v11 - 0x2000, 4096LL);
        if ( !ShadowMapping )
          goto LABEL_26;
        v17 = i;
      }
      goto LABEL_23;
    }
  }
LABEL_26:
  if ( (_BYTE)KiKernelCetEnabled )
  {
    for ( j = 1; j <= v17; ++j )
    {
      if ( a3 )
        v13 = *(_QWORD *)(a3 + 8LL * j + 184);
      else
        v13 = (*(_QWORD *)(*(_QWORD *)(a1 + 39920) + 8LL * j) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
      MmDeleteShadowMapping(v13 - 0x2000, 0x1000uLL);
    }
    if ( (v7 & 0x10) != 0 )
    {
      if ( a3 )
        v14 = *(_QWORD *)(a3 + 224);
      else
        v14 = *(_QWORD *)(a1 + 39920);
      MmDeleteShadowMapping(v14, 0x1000uLL);
    }
    if ( (v7 & 8) != 0 )
    {
      if ( a3 )
        v15 = *(_QWORD *)(a3 + 136);
      else
        v15 = (*(_QWORD *)(a1 + 39904) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
      MmDeleteShadowMapping(v15 - 0x2000, 0x1000uLL);
    }
  }
  if ( (v7 & 4) != 0 )
    KiUnshadowKernelSectionByAddress();
  if ( (v7 & 2) != 0 )
    MmDeleteShadowMapping(a1 + 44672, 0x1000uLL);
  if ( (v7 & 1) != 0 )
    MmDeleteShadowMapping(a2, 0x5000uLL);
  return ShadowMapping;
}

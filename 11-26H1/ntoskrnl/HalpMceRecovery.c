/*
 * XREFs of HalpMceRecovery @ 0x140590D10
 * Callers:
 *     <none>
 * Callees:
 *     HalpMceRecoveryNotRequiredIntel @ 0x14059124C (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpMceRecoveryRequired @ 0x14059132C (HalpMceRecoveryRequired.c)
 *     HalpShouldRecoveryBeAttempted @ 0x140591400 (HalpShouldRecoveryBeAttempted.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140591444 (WheaGetErrPacketFromErrRecord.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405918FC (HalpMemoryErrorDeferredRecovery.c)
 */

__int64 __fastcall HalpMceRecovery(struct _WHEA_ERROR_RECORD *a1, _DWORD *a2)
{
  unsigned int v4; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  unsigned __int64 Context; // rbx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  char v13; // al
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = -1073741637;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord(a1);
  if ( !ErrPacketFromErrRecord || ErrPacketFromErrRecord->ErrorSourceType > (unsigned int)WheaErrSrcTypeSei )
    return v4;
  Context = ErrPacketFromErrRecord->Context;
  v14 = *(_QWORD *)(Context + 40);
  if ( !HalpMcaRecoverySupported || !HalpMcaRecoveryPolicy )
    goto LABEL_36;
  if ( Context && *(_DWORD *)Context >= 3u )
    *(_DWORD *)(Context + 276) |= 1u;
  if ( !(unsigned __int8)HalpShouldRecoveryBeAttempted(*(unsigned int *)(Context + 4), &v14) )
  {
    if ( Context && *(_DWORD *)Context >= 3u )
      *(_BYTE *)(Context + 280) = 0;
    if ( v8 == 1 )
    {
      HalpMceRecoveryNotRequiredIntel(Context);
    }
    else if ( ((v7 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported) && (v7 & 0x400000000000000LL) != 0 )
    {
      v13 = 0;
      if ( HalpMcaScalableRasSupported )
        v13 = (v7 & 0x100000000000LL) != 0;
      HalpMemoryErrorDeferredRecovery(*(_QWORD *)(Context + 48), 0, 0, 0, 0, v7, 0, 1, v13);
    }
    v4 = 0;
    goto LABEL_65;
  }
  if ( Context && *(_DWORD *)Context >= 3u )
    *(_BYTE *)(Context + 280) = 1;
  if ( (v7 & 0x4000000000000000LL) != 0 && !HalpMcaOverflowRecoverySupported )
  {
    if ( !Context || *(_DWORD *)Context < 3u )
      return v4;
    *(_DWORD *)(Context + 272) |= 2u;
    goto LABEL_37;
  }
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    if ( !Context || *(_DWORD *)Context < 3u )
      return v4;
    *(_DWORD *)(Context + 272) |= 4u;
    goto LABEL_37;
  }
  v4 = HalpMceRecoveryRequired(Context);
  if ( (v4 & 0x80000000) != 0 )
  {
LABEL_36:
    if ( !Context )
      return v4;
LABEL_37:
    if ( *(_DWORD *)Context >= 3u )
      *(_BYTE *)(Context + 281) = 0;
    return v4;
  }
  v9 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)v10 & 0x10) != 0 && Context && *(_DWORD *)Context >= 3u )
    *(_BYTE *)(Context + 282) = 1;
  if ( (*(_DWORD *)v10 & 1) == 0 )
    goto LABEL_29;
  v11 = *(_DWORD *)(v9 + 40);
  switch ( v11 )
  {
    case 0:
      a1->Header.Flags.AsULONG |= 0x80u;
      break;
    case 12:
      if ( Context && *(_DWORD *)Context >= 3u )
        *(_DWORD *)(Context + 272) |= 0x100u;
LABEL_35:
      v4 = -1073741637;
      goto LABEL_36;
    case 10:
      if ( Context && *(_DWORD *)Context >= 3u )
        *(_DWORD *)(Context + 272) |= 0x80u;
      goto LABEL_35;
    case 13:
      if ( Context && *(_DWORD *)Context >= 3u )
        *(_DWORD *)(Context + 272) |= 0x200u;
      goto LABEL_35;
    case 14:
      if ( Context && *(_DWORD *)Context >= 3u )
        *(_DWORD *)(Context + 272) |= 0x400u;
      v4 = -1073741571;
      goto LABEL_36;
  }
LABEL_29:
  if ( (*(_DWORD *)v10 & 4) != 0 )
    *(_QWORD *)(v10 + 8) = a1;
LABEL_65:
  if ( Context && *(_DWORD *)Context >= 3u )
    *(_BYTE *)(Context + 281) = 1;
  *a2 = 2;
  return v4;
}

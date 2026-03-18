/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x140022410
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400101C0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 SrbDataBuffer; // rax
  char v8; // r11
  int v9; // r8d
  __int64 v10; // r9
  __int16 *v11; // r10
  __int16 v12; // dx
  __int16 v13; // dx
  __int64 v14; // rax
  __int16 v15; // dx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  char v18; // si
  char v19; // al
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v5 = SrbExtension;
  if ( !v6 )
  {
    *(_BYTE *)(a2 + 3) = 4;
LABEL_3:
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    return SrbExtension;
  }
  if ( *(_BYTE *)(a2 + 3) != 1 )
    goto LABEL_3;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v21);
  v9 = *(_DWORD *)(v5 + 4200);
  v10 = SrbDataBuffer;
  v12 = *v11;
  LODWORD(v21) = v9;
  if ( BYTE2(v9) )
  {
    if ( v12 )
      v13 = v12 - 273;
    else
      v13 = 0x8000;
    v14 = 2LL * BYTE1(v9);
    *(_WORD *)(v10 + 8 * v14 + 58) = v13;
    *(_BYTE *)(v10 + 8 * v14 + 61) = v8;
LABEL_15:
    v17 = BYTE1(v21);
    if ( BYTE1(v21) >= (unsigned __int8)v21 )
    {
      v18 = BYTE2(v21);
      v8 = 0;
    }
    else
    {
      v17 = BYTE1(v21) + 1;
      *(_WORD *)((char *)&v21 + 1) = (unsigned __int8)(BYTE1(v21) + 1);
      v18 = 0;
    }
    goto LABEL_19;
  }
  if ( v12 )
    v15 = v12 - 273;
  else
    v15 = 0x8000;
  v16 = 2LL * BYTE1(v9);
  *(_BYTE *)(SrbDataBuffer + 16 * (BYTE1(v9) + 2LL) + 28) = v8;
  *(_WORD *)(SrbDataBuffer + 8 * v16 + 56) = v15;
  *(_BYTE *)(SrbDataBuffer + 8 * v16 + 62) = v8;
  if ( !BYTE1(v9) && !*(_WORD *)(*(_QWORD *)(a1 + 1560) + 266LL) )
    goto LABEL_15;
  v17 = BYTE1(v21);
  v18 = v8;
  BYTE2(v21) = v8;
LABEL_19:
  v19 = *(_BYTE *)(v5 + 4225);
  if ( v8 )
  {
    *(_BYTE *)(v5 + 4225) = v19 & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v5 + 4096, v17, v18);
    *(_BYTE *)(v5 + 4225) &= ~4u;
    *(_QWORD *)(v5 + 4192) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v5 + 4200) = (unsigned int)v21;
    LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
  }
  else
  {
    LOBYTE(SrbExtension) = v19 | 8;
    *(_BYTE *)(v5 + 4225) = SrbExtension;
  }
  return SrbExtension;
}

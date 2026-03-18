/*
 * XREFs of NVMeGetLogPageTelemetryHeaderCompletion @ 0x14001E3D0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x140019C28 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r15
  _BYTE *v8; // rdi
  __int64 SrbDataBuffer; // rax
  unsigned int *v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  char v16; // al
  unsigned int v17; // r8d
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  __int16 v23; // ax
  char v24; // r8
  __int64 v25; // rcx
  int v27; // [rsp+28h] [rbp-90h]
  unsigned int *v28; // [rsp+C0h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v28 = 0LL;
  v5 = SrbExtension;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v28);
  v7 = *(_QWORD *)(a1 + 1560);
  v8 = (_BYTE *)SrbDataBuffer;
  LOBYTE(SrbDataBuffer) = *(_BYTE *)(v5 + 4200);
  v10 = v28;
  if ( (_BYTE)SrbDataBuffer != 7 )
  {
    if ( (_BYTE)SrbDataBuffer != 8 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      if ( (*(_BYTE *)(v5 + 4203) & 1) != 0 )
        *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_39;
    }
    v18 = *(_QWORD *)(v5 + 4160);
    if ( (*(_BYTE *)(v5 + 4203) & 1) != 0 )
    {
LABEL_29:
      v21 = *(unsigned __int16 *)(v18 + 12);
      if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
      {
        LODWORD(SrbDataBuffer) = *(_DWORD *)(v18 + 16);
        if ( v21 <= (unsigned int)SrbDataBuffer )
          v21 = *(_DWORD *)(v18 + 16);
      }
      if ( v21 )
      {
        v22 = (v21 + 1) << 9;
        v23 = 8 * (*(unsigned __int8 *)(v5 + 4201) + 1);
        v24 = 16;
        v8[31] = v23;
        v8[30] = HIBYTE(v23);
        if ( *(_BYTE *)(v5 + 4202) == 16 )
          v24 = 17;
        v8[8 * *(unsigned __int8 *)(v5 + 4201) + 32] = v24;
        v8[8 * *(unsigned __int8 *)(v5 + 4201) + 33] = 2;
        v8[8 * *(unsigned __int8 *)(v5 + 4201) + 34] = v8[8 * *(unsigned __int8 *)(v5 + 4201) + 34] & 0xF0 | 2;
        v25 = *(unsigned __int8 *)(v5 + 4201);
        v8[8 * v25 + 38] = BYTE1(v22);
        v8[8 * v25 + 37] = BYTE2(v22);
        v8[8 * v25 + 39] = v22;
        v8[8 * v25 + 36] = HIBYTE(v22);
        SrbDataBuffer = *(unsigned __int8 *)(v5 + 4201);
        *(_BYTE *)(a1 + 4053) = v8[8 * SrbDataBuffer + 32];
        *(_DWORD *)(a1 + 4048) = v22;
        ++*(_BYTE *)(v5 + 4201);
      }
      goto LABEL_39;
    }
    v19 = *v28;
    if ( (*v28 & 3) != 0 )
    {
      if ( v19 )
      {
        memset(v8, 0, *v28);
        goto LABEL_27;
      }
    }
    else
    {
      v20 = v19 >> 2;
      if ( v20 )
      {
        memset(v8, 0, 4LL * v20);
LABEL_27:
        v6 = 0LL;
      }
    }
    *(_WORD *)v8 = *(_WORD *)(v18 + 5);
    LOBYTE(SrbDataBuffer) = *(_BYTE *)(v18 + 7);
    v8[9] |= 6u;
    v8[2] = SrbDataBuffer;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(a2 + 3) != 1 || (v11 = *(_QWORD *)(v5 + 4160), *(_BYTE *)v11 != 7) )
  {
LABEL_18:
    *(_BYTE *)(v5 + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    *(_BYTE *)(v5 + 4200) = 8;
    LOBYTE(v17) = 8;
    BuildGetLogPageCommandForTelemetryLog(a1, v5, v17, *(_DWORD *)(v5 + 4208), *(_QWORD *)(v5 + 4168), v27, 0LL, 1, 1u);
    *(_BYTE *)(v5 + 4225) |= 4u;
    *(_QWORD *)(v5 + 4192) = NVMeGetLogPageTelemetryHeaderCompletion;
    LOBYTE(SrbDataBuffer) = ProcessCommand(a1, a2);
    return SrbDataBuffer;
  }
  *(_BYTE *)(v5 + 4203) = 1;
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
  {
    v12 = *v10;
    if ( (*v10 & 3) != 0 )
    {
      if ( v12 )
      {
        memset(v8, 0, *v10);
        goto LABEL_10;
      }
    }
    else
    {
      v13 = v12 >> 2;
      if ( v13 )
      {
        memset(v8, 0, 4LL * v13);
LABEL_10:
        v6 = 0LL;
      }
    }
  }
  *(_WORD *)v8 = *(_WORD *)(v11 + 5);
  LOBYTE(SrbDataBuffer) = *(_BYTE *)(v11 + 7);
  v8[9] |= 6u;
  v8[2] = SrbDataBuffer;
  v14 = *(unsigned __int16 *)(v11 + 12);
  if ( (*(_BYTE *)(v7 + 261) & 0x40) != 0 )
  {
    LODWORD(SrbDataBuffer) = *(_DWORD *)(v11 + 16);
    if ( v14 <= (unsigned int)SrbDataBuffer )
      v14 = *(_DWORD *)(v11 + 16);
  }
  if ( v14 )
  {
    v15 = (v14 + 1) << 9;
    v16 = v8[34] & 0xF0 | 3;
    *(_DWORD *)(v8 + 30) = 17827840;
    v8[34] = v16;
    v8[39] = v15;
    v8[38] = BYTE1(v15);
    v8[37] = BYTE2(v15);
    v8[36] = HIBYTE(v15);
    *(_BYTE *)(a1 + 4052) = 16;
    *(_DWORD *)(a1 + 4044) = v15;
    *(_BYTE *)(v5 + 4201) = 1;
    LOBYTE(SrbDataBuffer) = v8[32];
    *(_BYTE *)(v5 + 4202) = SrbDataBuffer;
  }
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
    goto LABEL_18;
  *(_WORD *)(v11 + 5) = v6;
  *(_BYTE *)(v11 + 7) = v6;
  *(_DWORD *)(v11 + 8) = 0;
  *(_WORD *)(v11 + 12) = v6;
LABEL_39:
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    LODWORD(SrbDataBuffer) = 8 * *(unsigned __int8 *)(v5 + 4201) + 32;
    *v10 = SrbDataBuffer;
  }
  else if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    LOBYTE(SrbDataBuffer) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
    v6 = 0LL;
  }
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v6 )
  {
    LOBYTE(SrbDataBuffer) = NVMeFreeDmaBufferEx(
                              a1,
                              0,
                              1,
                              *(unsigned int *)(v5 + 4208),
                              (__int64 *)(v5 + 4160),
                              *(_QWORD *)(v5 + 4168));
    v6 = 0LL;
  }
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_QWORD *)(v5 + 4160) = v6;
  *(_DWORD *)(v5 + 4208) = v6;
  return SrbDataBuffer;
}

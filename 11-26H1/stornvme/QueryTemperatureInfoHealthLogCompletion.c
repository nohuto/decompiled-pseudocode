/*
 * XREFs of QueryTemperatureInfoHealthLogCompletion @ 0x140022200
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400101C0 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall QueryTemperatureInfoHealthLogCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // r9
  __int16 v10; // dx
  __int16 v11; // dx
  _WORD *v12; // rax
  __int16 v13; // dx
  unsigned __int64 v14; // rax
  _WORD *v15; // r11
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // r10
  unsigned int *v18; // rbp
  __int64 v19; // r9
  __int16 v20; // ax
  unsigned int v21; // [rsp+78h] [rbp+10h]
  unsigned int *v22; // [rsp+88h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v22 = 0LL;
  v5 = SrbExtension;
  result = GetSrbDataBuffer(a2, &v22);
  v7 = result;
  v8 = (__int64 *)(v5 + 4160);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v9 = *v8;
    HIBYTE(v21) = 0;
    v10 = *(_WORD *)(*v8 + 1);
    *(_WORD *)(result + 52) = 0;
    if ( v10 )
      v11 = v10 - 273;
    else
      v11 = 0x8000;
    *(_WORD *)(result + 54) = v11;
    v12 = (_WORD *)(v9 + 214);
    v13 = 8;
    *(_DWORD *)(v7 + 56) = -2147450880;
    do
    {
      if ( *v12 )
        break;
      --v12;
      --v13;
    }
    while ( v13 );
    v14 = *(unsigned int *)(v7 + 32);
    v15 = (_WORD *)(v9 + 200);
    v16 = v13 + 1;
    v17 = 1;
    *(_WORD *)(v7 + 40) = v16;
    if ( v14 <= 16 * (unsigned __int64)v16 + 24 )
      LODWORD(v14) = 16 * v16 + 24;
    *(_DWORD *)(v7 + 32) = v14;
    if ( v16 > 1u )
    {
      v18 = v22;
      do
      {
        v19 = 16LL * v17;
        if ( *v18 < (unsigned __int64)(v19 + 40) )
          break;
        *(_WORD *)(v7 + v19 + 52) = v17;
        v20 = *v15 ? *v15 - 273 : 0x8000;
        ++v15;
        *(_WORD *)(v7 + v19 + 54) = v20;
        ++v17;
        *(_DWORD *)(v7 + v19 + 56) = -2147450880;
      }
      while ( v17 < v16 );
      v8 = (__int64 *)(v5 + 4160);
    }
    LOBYTE(v21) = v17 - 1;
    *(_WORD *)((char *)&v21 + 1) = 0;
    *(_BYTE *)(v5 + 4225) = *(_BYTE *)(v5 + 4225) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v5 + 4096, 0, 0);
    *(_BYTE *)(v5 + 4225) &= ~4u;
    *(_QWORD *)(v5 + 4192) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v5 + 4200) = v21;
    result = ProcessCommand(a1, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4225) |= 8u;
  }
  if ( *v8 )
    result = NVMeFreeDmaBufferEx(a1, 0, 1, *(unsigned int *)(v5 + 4208), v8, *(_QWORD *)(v5 + 4168));
  *(_DWORD *)(v5 + 4208) = 0;
  *v8 = 0LL;
  return result;
}

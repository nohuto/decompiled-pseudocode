/*
 * XREFs of EtwpRealtimeDeliverBuffer @ 0x140A14034
 * Callers:
 *     EtwpRealtimeUpdateReferenceTime @ 0x140836280 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140A12CDC (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140A13CC8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFlushBuffer @ 0x140A13E4C (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A141BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x140A14A2C (EtwpDisassociateConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 *v3; // rsi
  int v5; // ecx
  _QWORD *v6; // r14
  __int16 v8; // r12
  _QWORD *v9; // rbp
  int v10; // eax
  char v11; // al
  char v12; // r8
  __int16 v13; // ax
  __int16 v14; // ax
  char v15; // [rsp+60h] [rbp+8h]
  char v17; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v3 = (__int16 *)(a2 + 52);
  v15 = 0;
  v5 = *(_DWORD *)(a1 + 448);
  v17 = 0;
  if ( v5 )
  {
    v13 = *v3;
    if ( v5 == 3 )
    {
      v14 = v13 | 8;
    }
    else if ( v5 == 2 )
    {
      v14 = v13 | 4;
    }
    else
    {
      v14 = v13 | 2;
    }
    *v3 = v14;
    v17 = 1;
  }
  v6 = *(_QWORD **)(a1 + 328);
  if ( v6 == (_QWORD *)(a1 + 328) )
    return 3221225473LL;
  do
  {
    v8 = *v3;
    v9 = v6;
    v6 = (_QWORD *)*v6;
    if ( (*((_BYTE *)v9 + 90) & 2) != 0 )
      *v3 = v8 | 4;
    v10 = EtwpRealtimeInjectEtwBuffer(a1, v9, a2, 2LL);
    *v3 = v8;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741764 )
      {
        v9[4] = v2;
        v2 = v9;
      }
      else
      {
LABEL_19:
        EtwpDisassociateConsumer(a1, v9);
      }
      v12 = v15;
      continue;
    }
    v11 = *((_BYTE *)v9 + 90);
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      *((_BYTE *)v9 + 90) = v11;
    }
    v12 = 1;
    v15 = 1;
    if ( (v11 & 1) != 0 && (*(_BYTE *)v3 & 1) != 0 )
      goto LABEL_19;
  }
  while ( v6 != (_QWORD *)(a1 + 328) );
  if ( !v12 )
    return 3221225473LL;
  if ( v17 )
    *(_DWORD *)(a1 + 448) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 256);
  while ( v2 )
  {
    *((_BYTE *)v2 + 90) |= 2u;
    ++*((_DWORD *)v2 + 20);
    v2 = (_QWORD *)v2[4];
  }
  return 0LL;
}

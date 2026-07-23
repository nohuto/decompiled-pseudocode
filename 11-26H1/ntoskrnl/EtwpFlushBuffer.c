/*
 * XREFs of EtwpFlushBuffer @ 0x140A13E4C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A133D8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpFileModeCompress @ 0x1403F2148 (EtwpFileModeCompress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140A14034 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x140A14650 (EtwpSendSessionNotification.c)
 *     EtwpFlushBufferToLogfile @ 0x140A14718 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140A14D18 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int16 a3)
{
  int v4; // edi
  __int64 v5; // rcx
  char v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  int v9; // r14d
  char v10; // r15
  int v12; // eax
  int v13; // eax

  v4 = -1073741823;
  v5 = *(unsigned int *)(a2 + 4);
  v6 = a3;
  v7 = a2;
  v8 = -1073741823;
  if ( !(_DWORD)v5 )
    v5 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v5;
  if ( (_DWORD)v5 != 72 || a3 == 1 )
  {
    *(_WORD *)(a2 + 52) = a3 | 0x20;
    if ( (*(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0) && *(_DWORD *)a2 - (int)v5 > 0 )
      memset_0((void *)(a2 + v5), 255, *(_DWORD *)a2 - (int)v5);
    v9 = 0;
    if ( *(_DWORD *)(v7 + 48) == 72 )
      v9 = -2147483614;
  }
  else
  {
    v9 = -2147483614;
  }
  v10 = v6 & 1;
  if ( v9 == -2147483614 && !v10 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) == 0 )
    goto LABEL_22;
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) || (v4 = EtwpRealtimeDeliverBuffer(a1, v7), v4 < 0) )
  {
    if ( v9 != -2147483614 )
    {
      v4 = EtwpRealtimeSaveBuffer(a1, v7);
      goto LABEL_20;
    }
  }
  else if ( v9 != -2147483614 )
  {
    goto LABEL_20;
  }
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) )
  {
    v4 = 0;
    goto LABEL_22;
  }
LABEL_20:
  if ( v4 < 0 )
    EtwpSendSessionNotification(a1, 4LL, (unsigned int)v4);
LABEL_22:
  if ( *(_QWORD *)(a1 + 800) )
  {
    v12 = *(_DWORD *)(a1 + 12);
    if ( (v12 & 0x4000000) != 0 && (v12 & 1) != 0 && !(unsigned int)EtwpFileModeCompress(a1, v7) )
      v7 = *(_QWORD *)(a1 + 1416);
    v13 = EtwpFlushBufferToLogfile(a1, v7);
    v8 = v13;
    if ( v13 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v13);
  }
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741432 || v8 >= 0 )
    return 0LL;
  if ( v8 != -1073741823 )
    return (unsigned int)v8;
  return (unsigned int)v4;
}

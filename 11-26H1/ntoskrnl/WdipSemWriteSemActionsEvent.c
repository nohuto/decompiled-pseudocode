/*
 * XREFs of WdipSemWriteSemActionsEvent @ 0x140AD7B88
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemFastAllocate @ 0x140AD7DB0 (WdipSemFastAllocate.c)
 *     WdipSemGetLoggerDroppedEventCount @ 0x140AD7DEC (WdipSemGetLoggerDroppedEventCount.c)
 *     WdipSemWriteEvent @ 0x140AD7E84 (WdipSemWriteEvent.c)
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemWriteSemActionsEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int LoggerDroppedEventCount; // ebx
  __int64 v7; // rbx
  int v8; // r14d
  __int128 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rax
  _QWORD *v15; // rsi
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[255]; // [rsp+48h] [rbp-B8h]
  _QWORD v20[124]; // [rsp+840h] [rbp+740h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v17[0] = 0;
  v4 = 0LL;
  if ( a1 && a2 )
  {
    LoggerDroppedEventCount = WdipSemGetLoggerDroppedEventCount(
                                (unsigned int)_InterlockedExchange(
                                                (_DWORD *)&stru_140F06A28.QuantumTarget + 1,
                                                SHIDWORD(stru_140F06A28.QuantumTarget)),
                                v17);
    if ( LoggerDroppedEventCount >= 0 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(_DWORD *)(v7 + 48);
      v19[1] = v7 + 16;
      v19[3] = v17;
      v18 = v7;
      v19[0] = 16LL;
      v19[2] = 2LL;
      v19[4] = 4LL;
      v16 = *(_BYTE *)(v7 + 48);
      v19[5] = &v16;
      v19[6] = 1LL;
      while ( 1 )
      {
        if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 48) )
        {
          LoggerDroppedEventCount = WdipSemWriteEvent(v5, a1, a2 + 16, (unsigned int)(v8 + 4), &v18);
          goto LABEL_9;
        }
        v9 = *(__int128 **)(v7 + 8 * v4 + 56);
        v10 = WdipSemFastAllocate(4LL, 40LL);
        v11 = v10;
        if ( !v10 )
          break;
        v12 = *v9;
        v20[v4] = v10;
        *(_OWORD *)v10 = v12;
        *(_BYTE *)(v10 + 16) = *((_BYTE *)v9 + 18);
        *(_QWORD *)(v10 + 24) = *((_QWORD *)v9 + 3);
        *(_DWORD *)(v10 + 32) = *((_DWORD *)v9 + 9);
        v5 = *(unsigned int *)(a2 + 4 * v4 + 48);
        *(_DWORD *)(v10 + 36) = v5;
        v13 = 2LL * (unsigned int)(v4 + 4);
        v4 = (unsigned int)(v4 + 1);
        v19[v13 - 1] = v11;
        v19[v13] = 40LL;
      }
      LoggerDroppedEventCount = -1073741670;
LABEL_9:
      if ( (_DWORD)v4 )
      {
        v15 = v20;
        do
        {
          WdipSemFastFree(4LL, *v15++);
          --v4;
        }
        while ( v4 );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)LoggerDroppedEventCount;
}

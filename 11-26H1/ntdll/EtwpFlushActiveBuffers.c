/*
 * XREFs of EtwpFlushActiveBuffers @ 0x180066A60
 * Callers:
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     EtwpSendSessionNotification @ 0x180064890 (EtwpSendSessionNotification.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180066CB8 (EtwpWaitForBufferReferenceCount.c)
 *     RtlWakeAllConditionVariable @ 0x180066CF0 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x180066D70 (EtwpFlushBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rsi
  unsigned int v7; // ebx
  __int16 v8; // r12
  _QWORD **v9; // rax
  _QWORD *v10; // rsi
  __int16 v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  _QWORD *v16; // r12
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int32 v20; // eax
  __int64 v21; // rcx
  unsigned __int16 v22; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 192);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 72);
  v4 = *(unsigned int *)(a1 + 188);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v17 = (__int64 *)(a1 + 560);
    v18 = v4;
    do
    {
      v19 = *v17;
      if ( *v17 && *(_DWORD *)(v19 + 8) != 72 )
      {
        *v17 = 0LL;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), v2);
        if ( v20 <= v2 )
          *(_DWORD *)(v19 + 4) = v20;
        *(_DWORD *)(v19 + 44) = 3;
        v21 = v19 + 32;
        **(_QWORD **)(a1 + 264) = v21;
        *(_QWORD *)(a1 + 264) = v21;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  v9 = *(_QWORD ***)(a1 + 256);
  if ( v9 == *(_QWORD ***)(a1 + 264) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 264) = *(_QWORD *)(a1 + 256);
  }
  RtlLeaveCriticalSection(v3);
  if ( v10 )
  {
    v12 = a2 != 0;
    do
    {
      v13 = v10;
      v14 = v10;
      if ( !*v10 )
        v8 = v12;
      v22 = v8;
      v15 = v10 - 4;
      v16 = v10;
      v10 = (_QWORD *)*v10;
      EtwpWaitForBufferReferenceCount(v15);
      v7 = EtwpFlushBuffer(a1, v13 - 4, v22);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v14 + 3) = 0;
      *v16 = 0LL;
      *(v14 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
      **(_QWORD **)(a1 + 240) = v16;
      *(_QWORD *)(a1 + 240) = v16;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 64));
      v8 = v22;
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v10 );
  }
  return v7;
}

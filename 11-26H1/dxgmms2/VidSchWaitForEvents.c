/*
 * XREFs of VidSchWaitForEvents @ 0x14002FB1C
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400EBAC0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSuspendFlipQueues @ 0x140106C98 (VidSchiSuspendFlipQueues.c)
 *     VidSchSwitchFromContext @ 0x1401087A0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1401088A0 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1401089B0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiIsMmIoFlipPending @ 0x14002FD20 (VidSchiIsMmIoFlipPending.c)
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // rbp
  char v9; // r14
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  __int64 i; // rdi
  __int64 result; // rax
  bool v14; // si
  char IsMmIoFlipPending; // al
  BOOLEAN Alertable; // si
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 184) )
  {
    v9 = 0;
    v17 = 0LL;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v17;
      v9 = 1;
      v17 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v18 = 0;
    while ( 1 )
    {
      v10 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v11 = v10;
      if ( !v9 || v10 != 258 )
        break;
      if ( !(unsigned int)VidSchiCheckHwProgress(a1, &v18) )
      {
        if ( *(_DWORD *)(a1 + 3260) )
        {
          for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
          {
            if ( KeReadStateEvent((PRKEVENT)a3[i]) )
              return (unsigned int)i;
          }
        }
        return v11;
      }
    }
    return v11;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 792) || *(_DWORD *)(a1 + 76) || *(_DWORD *)(a1 + 80);
    IsMmIoFlipPending = VidSchiIsMmIoFlipPending(a1, 0LL);
    if ( (v14 || IsMmIoFlipPending) && *(_BYTE *)(a1 + 780) )
    {
      *(_QWORD *)(a1 + 1664) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1632), 0, 1u);
    }
    Alertable = a5;
    while ( 1 )
    {
      LODWORD(i) = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, Alertable, Timeout, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( (_DWORD)i != 257 )
        return (unsigned int)i;
    }
    WdLogSingleEntry0(3LL);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 8822;
  }
  return result;
}

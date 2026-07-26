/*
 * XREFs of NdisSetTimerObject @ 0x1400D9870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqil @ 0x140052950 (WPP_RECORDER_SF_qqil.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall NdisSetTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext)
{
  _QWORD *v5; // rsi
  KIRQL v9; // al
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  int v12; // [rsp+20h] [rbp-48h]

  v5 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( **((_BYTE **)TimerObject + 3) == 17 && !v5 )
    return 0;
  if ( FunctionContext )
    *((_QWORD *)TimerObject + 23) = FunctionContext;
  else
    *((_QWORD *)TimerObject + 23) = *((_QWORD *)TimerObject + 22);
  if ( v5 && (*(_BYTE *)(v5[470] + 26LL) & 2) != 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(v5 + 235);
    v10 = (_QWORD *)v5[70];
    v11 = v10;
    if ( v10 )
    {
      while ( v11 != TimerObject )
      {
        v11 = (_QWORD *)*v11;
        if ( !v11 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      *(_QWORD *)TimerObject = v10;
      v5[70] = TimerObject;
    }
    KeReleaseSpinLock(v5 + 235, v9);
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqil(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      DueTime.QuadPart,
      *(__int64 *)&MillisecondsPeriod,
      (__int64)FunctionContext,
      v12);
  return KeSetTimerEx(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           (PKDPC)((char *)TimerObject + 96));
}

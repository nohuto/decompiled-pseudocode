/*
 * XREFs of Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1400496FC
 * Callers:
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 */

void __fastcall Interrupter_FlushPendingDpcOrWorkItemPreReset(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rsi
  char v6; // al
  _DWORD *v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  int v10; // edx
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  Timeout.QuadPart = 0LL;
  v2 = (_DWORD *)(a1 + 92);
  v4 = (_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 92) )
  {
    do
    {
      v5 = *(_QWORD *)(*v4 + 8 * v1);
      if ( v5 )
      {
        v6 = Interrupter_AcquireEventRingLock(*(_QWORD *)(*v4 + 8 * v1));
        *(_DWORD *)(v5 + 112) |= 0x10u;
        Interrupter_ReleaseEventRingLock(v5, v6);
      }
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *v2 );
    v7 = (_DWORD *)(a1 + 92);
  }
  else
  {
    v7 = (_DWORD *)(a1 + 92);
  }
  KeFlushQueuedDpcs();
  v8 = 0LL;
  if ( *v2 )
  {
    do
    {
      v9 = *(_QWORD **)(*v4 + 8 * v8);
      if ( v9 && v9[27] )
      {
        Timeout.QuadPart = -600000000LL;
        while ( KeWaitForSingleObject(v9 + 24, Executive, 0, 0, &Timeout) == 258 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v9[1] + 72LL),
              v10,
              9,
              35,
              (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
              v8);
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *v7 );
  }
}

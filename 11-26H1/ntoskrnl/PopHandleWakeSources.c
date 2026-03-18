/*
 * XREFs of PopHandleWakeSources @ 0x140BF952C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404F94F8 (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404FF4EC (PopReleaseWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x1406CEBE0 (ExCopyWakeTimerInfo.c)
 *     PopNewWakeSource @ 0x14077577C (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x140B45F68 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x140C0969C (PopValidateRTCWake.c)
 */

LONG PopHandleWakeSources()
{
  struct _LIST_ENTRY *Flink; // rsi
  bool v1; // bl
  __int64 v2; // rdx
  int v3; // r14d
  _QWORD *v4; // rbp
  int v5; // ecx
  __int64 v6; // rdi
  int v7; // eax
  struct _LIST_ENTRY **p_Flink; // rcx
  unsigned __int64 RelativeTimerBias; // rax
  char *p_Blink; // rax
  int Blink; // r9d
  __int64 *v12; // rcx
  char v13; // r8
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v17; // r8
  __int64 *i; // rcx
  __int64 v19; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  Flink = stru_140F11D08.Timer.Header.WaitListHead.Flink;
  v1 = 0;
  *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 3;
  if ( !stru_140F11D08.Timer.Header.WaitListHead.Flink )
    goto LABEL_59;
  stru_140F11D08.Timer.Header.WaitListHead.Flink = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  LOBYTE(v2) = 0;
  v22 = 0;
  if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x200000) != 0
    || ((__int64)stru_140F11D08.Timer.TimerListEntry.Blink & 1) != 0 )
  {
    v3 = 1;
    goto LABEL_9;
  }
  if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x400000) != 0
    || ((__int64)stru_140F11D08.Timer.TimerListEntry.Blink & 2) != 0 )
  {
    v3 = 2;
    goto LABEL_9;
  }
  if ( (unsigned __int8)PopValidateRTCWake(&v22, v2)
    && (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x100000) == 0 )
  {
    LOBYTE(v2) = v22;
    v3 = 4;
LABEL_9:
    if ( dword_140F0FBD0 < 0 || (unsigned __int64)dword_140F0FBD0 >= 3 )
      v4 = 0LL;
    else
      v4 = (_QWORD *)qword_140F0FBE8[3 * dword_140F0FBD0];
    if ( v3 == 4 )
    {
      if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFCuLL )
        v5 = 4;
      else
        v5 = ((_BYTE)v2 != 0) + 2;
    }
    else
    {
      v5 = 1;
    }
    v6 = PopNewWakeSource(v5);
    PopUnlinkWakeSources((__int64)Flink);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 16);
      if ( v7 == 2 || v7 == 3 )
      {
        ExCopyWakeTimerInfo(v4, (_QWORD *)(v6 + 24));
      }
      else if ( v4 == (_QWORD *)-1LL )
      {
        *(_DWORD *)(v6 + 24) = 0;
      }
      else if ( v4 == (_QWORD *)-2LL )
      {
        *(_DWORD *)(v6 + 24) = 1;
      }
      else
      {
        if ( v4 == (_QWORD *)-3LL )
          v3 = 2;
        *(_DWORD *)(v6 + 24) = v3;
      }
      p_Flink = &Flink[2].Flink->Flink;
      if ( *p_Flink != (struct _LIST_ENTRY *)&Flink[1].Blink )
LABEL_32:
        __fastfail(3u);
      *(_QWORD *)v6 = (char *)Flink + 24;
      *(_QWORD *)(v6 + 8) = p_Flink;
      *p_Flink = (struct _LIST_ENTRY *)v6;
      Flink[2].Flink = (struct _LIST_ENTRY *)v6;
      LODWORD(Flink[2].Blink) = 1;
    }
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  RelativeTimerBias = stru_140F11D08.RelativeTimerBias;
  if ( *(struct _KTHREAD **)(stru_140F11D08.RelativeTimerBias + 8) != (struct _KTHREAD *)&stru_140F11D08.RelativeTimerBias )
    goto LABEL_32;
  ++LODWORD(stru_140F11D08.Queue);
  Flink->Flink = (struct _LIST_ENTRY *)stru_140F11D08.RelativeTimerBias;
  Flink->Blink = (struct _LIST_ENTRY *)&stru_140F11D08.RelativeTimerBias;
  *(_QWORD *)(RelativeTimerBias + 8) = Flink;
  p_Blink = (char *)&Flink[1].Blink;
  stru_140F11D08.RelativeTimerBias = (unsigned __int64)Flink;
  Blink = (int)Flink[2].Blink;
  if ( Blink )
  {
    v12 = *(__int64 **)p_Blink;
    v13 = 0;
    while ( v12 != (__int64 *)p_Blink )
    {
      v14 = *((_DWORD *)v12 + 4);
      if ( v14 == 1 )
        goto LABEL_45;
      if ( !v14 )
      {
        v15 = *(__int64 *)((char *)v12 + 76) - *(_QWORD *)&GUID_NETWORK_ADAPTER_CLASS.Data1;
        if ( !v15 )
          v15 = *(__int64 *)((char *)v12 + 84) - *(_QWORD *)GUID_NETWORK_ADAPTER_CLASS.Data4;
        if ( v15 )
        {
          v16 = *(__int64 *)((char *)v12 + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
          if ( !v16 )
            v16 = *(__int64 *)((char *)v12 + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
          if ( v16 )
            goto LABEL_45;
        }
      }
      v12 = (__int64 *)*v12;
    }
  }
  else
  {
LABEL_45:
    v13 = 1;
  }
  LOBYTE(Flink[5].Flink) = v13;
  v17 = 0;
  if ( Blink )
  {
    for ( i = *(__int64 **)p_Blink; i != (__int64 *)p_Blink; i = (__int64 *)*i )
    {
      if ( !*((_DWORD *)i + 4) )
      {
        v19 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v19 )
          v19 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( !v19 )
        {
          v17 = 1;
          break;
        }
      }
    }
  }
  BYTE1(Flink[5].Flink) = v17;
  if ( Blink == 1 && *(_DWORD *)(*(_QWORD *)p_Blink + 16LL) == 4 )
    v1 = *(_DWORD *)(*(_QWORD *)p_Blink + 24LL) == 1;
  BYTE2(Flink[5].Flink) = v1;
LABEL_59:
  *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 4;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return KeSetEvent((PRKEVENT)&stru_140F11D08.Timer.Processor, 0, 0);
}

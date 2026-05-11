/*
 * XREFs of USBMIDIInReQueueUrb @ 0x140008CC0
 * Callers:
 *     <none>
 * Callees:
 *     USBMidiInAddEventToPinQueue @ 0x140008FA4 (USBMidiInAddEventToPinQueue.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x14000BC78 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x140041024 (USBMidiInInitializeUrbAndIrp.c)
 */

void __fastcall USBMIDIInReQueueUrb(PDEVICE_OBJECT DeviceObject, char *Context)
{
  KSPIN_LOCK *v2; // r15
  struct _DEVICE_OBJECT *v3; // r14
  KIRQL v5; // bp
  unsigned int v6; // r13d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // r14
  unsigned __int64 v13; // r12
  unsigned int v14; // ebp
  char v15; // r11
  int v16; // r8d
  KIRQL v17; // al
  unsigned int v18; // ecx
  int v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+30h] [rbp-68h]
  unsigned int v23; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+18h]

  v2 = (KSPIN_LOCK *)(Context + 104);
  v3 = DeviceObject;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 13);
  v6 = 0;
  v23 = 0;
  if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = 16 * *((_DWORD *)Context + 6);
    v23 = v6;
  }
  v7 = *((_QWORD *)Context + 20) + ((unsigned __int64)*((unsigned int *)Context + 17) << 6);
  while ( v7 )
  {
    if ( Context[41] )
      break;
    *(_BYTE *)(v7 + 48) = 0;
    v8 = 0LL;
    if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
      v8 = *((_QWORD *)Context + 20) + ((unsigned __int64)((*((_DWORD *)Context + 17) + 1) % v6) << 6);
    KeReleaseSpinLock(v2, v5);
    if ( *(int *)(*(_QWORD *)(v7 + 24) + 48LL) >= 0 )
    {
      v10 = *(_QWORD *)(v7 + 32);
      if ( *(int *)(v10 + 4) >= 0 )
      {
        v11 = *(unsigned int *)(v10 + 36);
        v12 = *(char **)(v7 + 40);
        if ( (unsigned int)v11 >= 4 )
        {
          v13 = v11 - 4;
          v24 = v11 >> 2;
          do
          {
            v14 = 0;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
              || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
            {
              v15 = 0;
            }
            if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            {
              LOBYTE(v9) = 0;
            }
            if ( v15 || (_BYTE)v9 )
            {
              v16 = (unsigned __int8)v12[2];
              LOBYTE(v16) = v9;
              LOBYTE(v9) = v15;
              WPP_RECORDER_AND_TRACE_SF_DDDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v9,
                v16,
                WPP_GLOBAL_Control->DeviceExtension,
                v19,
                v20,
                v21,
                (__int64)&WPP_c6a1ce1100163087ce6362c90e81e0ce_Traceguids,
                *v12,
                v12[1],
                v12[2],
                v12[3]);
            }
            if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( v13 < 4 )
              {
                if ( *(_BYTE *)(v8 + 48)
                  && *(_DWORD *)(*(_QWORD *)(v8 + 32) + 36LL) >= 4u
                  && (((unsigned __int8)*v12 ^ **(_BYTE **)(v8 + 40)) & 0xF0) == 0 )
                {
                  v14 = 1;
                }
              }
              else
              {
                LOBYTE(v14) = (((unsigned __int8)*v12 ^ (unsigned __int8)v12[4]) & 0xF0) == 0;
              }
            }
            USBMidiInAddEventToPinQueue(Context, v12, v14);
            v12 += 4;
            v13 -= 4LL;
            --v24;
          }
          while ( v24 );
          v6 = v23;
          v2 = (KSPIN_LOCK *)(Context + 104);
        }
        v3 = DeviceObject;
      }
    }
    if ( !Context[41] )
    {
      USBMidiInInitializeUrbAndIrp(v7);
      v17 = KeAcquireSpinLockRaiseToDpc(v2);
      _InterlockedAdd((volatile signed __int32 *)Context + 16, 1u);
      KeReleaseSpinLock(v2, v17);
      IofCallDriver(v3, *(PIRP *)(v7 + 24));
    }
    v5 = KeAcquireSpinLockRaiseToDpc(v2);
    v18 = ++*((_DWORD *)Context + 17);
    if ( 16 * *((_DWORD *)Context + 6) == v18 )
    {
      *((_DWORD *)Context + 17) = 0;
      v18 = 0;
    }
    v7 = *((_QWORD *)Context + 20) + ((unsigned __int64)v18 << 6);
    if ( !*(_BYTE *)(v7 + 48) )
      break;
  }
  Context[72] = 0;
  KeSetEvent((PRKEVENT)(Context + 112), 0, 0);
  KeReleaseSpinLock(v2, v5);
}

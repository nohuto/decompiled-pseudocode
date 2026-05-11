/*
 * XREFs of USBMidiInAddEventToPinQueue @ 0x140008FA4
 * Callers:
 *     USBMIDIInReQueueUrb @ 0x140008CC0 (USBMIDIInReQueueUrb.c)
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x140002170 (USBMidiInGetCurrentTime.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall USBMidiInAddEventToPinQueue(__int64 a1, _DWORD *a2, int a3)
{
  KSPIN_LOCK *v6; // rbp
  int v7; // esi
  KIRQL v8; // al
  __int64 **v9; // rdi
  __int64 *i; // rbx
  __int64 v11; // rsi
  KIRQL v12; // bp
  _QWORD *v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 **v16; // rcx
  struct _KSPIN *v17; // rcx

  if ( (*(_BYTE *)a2 & 0xFu) >= 2 )
  {
    v6 = (KSPIN_LOCK *)(a1 + 104);
    v7 = *(unsigned __int8 *)a2 >> 4;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    v9 = (__int64 **)(a1 + 48);
    for ( i = *v9; i != (__int64 *)v9 && *((_DWORD *)i + 5) != v7; i = (__int64 *)*i )
      ;
    KeReleaseSpinLock(v6, v8);
    if ( i != (__int64 *)v9 )
    {
      v11 = *(_QWORD *)(i[3] + 16);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 112));
      if ( *((_BYTE *)i + 32) )
      {
        v13 = i + 10;
        v14 = (__int64 *)i[10];
        if ( v14 != i + 10 )
        {
          if ( (_QWORD *)v14[1] != v13 )
            goto LABEL_19;
          v15 = *v14;
          if ( *(__int64 **)(*v14 + 8) != v14 )
            goto LABEL_19;
          *v13 = v15;
          *(_QWORD *)(v15 + 8) = v13;
          *((_DWORD *)v14 + 6) = *a2;
          v14[2] = USBMidiInGetCurrentTime();
          if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
            *((_DWORD *)v14 + 7) = a3;
          v16 = (__int64 **)i[9];
          if ( *v16 != i + 8 )
LABEL_19:
            __fastfail(3u);
          *v14 = (__int64)(i + 8);
          v14[1] = (__int64)v16;
          *v16 = v14;
          i[9] = (__int64)v14;
        }
        if ( !*((_BYTE *)i + 33) )
        {
          v17 = (struct _KSPIN *)i[3];
          *((_BYTE *)i + 33) = 1;
          KsPinAttemptProcessing(v17, 1u);
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 112), v12);
    }
  }
}

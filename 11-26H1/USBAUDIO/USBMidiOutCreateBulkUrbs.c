/*
 * XREFs of USBMidiOutCreateBulkUrbs @ 0x1400093B8
 * Callers:
 *     USBMidiOutProcessPin @ 0x14003EE40 (USBMidiOutProcessPin.c)
 * Callees:
 *     KsGateTurnInputOff @ 0x140003BC0 (KsGateTurnInputOff.c)
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     USBMIDICreateEventPackets @ 0x14003C994 (USBMIDICreateEventPackets.c)
 *     USBMidiOutAllocateRequest @ 0x14003E754 (USBMidiOutAllocateRequest.c)
 */

__int64 __fastcall USBMidiOutCreateBulkUrbs(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // r15
  unsigned int v2; // ebx
  PKSSTREAM_POINTER v3; // rdi
  char v4; // bp
  int Request; // esi
  PVOID Context; // r14
  ULONG Remaining; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdx
  KIRQL v10; // r13
  struct _KSGATE *v11; // rax
  bool v12; // sf
  ULONG InUsed; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  Pin = StreamPointer->Pin;
  v2 = 0;
  v3 = StreamPointer;
  v4 = 0;
  Request = 0;
  Context = Pin->Context;
  do
  {
    if ( Request < 0 || v4 )
      break;
    Remaining = v3->OffsetIn.Remaining;
    v15 = 0LL;
    Request = USBMidiOutAllocateRequest(v3);
    if ( Request >= 0 )
    {
      v8 = v15;
      v9 = v15;
      InUsed = 0;
      *(_DWORD *)(*(_QWORD *)(v15 + 24) + 36LL) = 0;
      USBMIDICreateEventPackets(v3, v9, &InUsed);
      KsStreamPointerAdvanceOffsets(v3, InUsed, 0, 0);
      if ( Remaining == InUsed )
        v3 = 0LL;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      _InterlockedIncrement((volatile signed __int32 *)Context + 14);
      if ( *((_DWORD *)Context + 14) == 20 )
      {
        v4 = 1;
        v11 = KsPinGetAndGate(Pin);
        KsGateTurnInputOff(v11);
        *((_BYTE *)Context + 44) = 1;
      }
      else
      {
        v4 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v10);
      Request = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 40LL), *(PIRP *)(v8 + 16));
    }
  }
  while ( v3 );
  if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() && v3 )
  {
    v12 = Request < 0;
    if ( Request >= 0 )
      goto LABEL_18;
    if ( !v4 )
    {
      KsStreamPointerSetStatusCode(v3, Request);
      KsStreamPointerAdvanceOffsets(v3, v3->OffsetIn.Remaining, 0, 0);
    }
  }
  v12 = Request < 0;
LABEL_18:
  if ( v12 )
    return (unsigned int)Request;
  return v2;
}

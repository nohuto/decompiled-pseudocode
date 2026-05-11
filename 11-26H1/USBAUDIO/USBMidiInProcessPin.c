/*
 * XREFs of USBMidiInProcessPin @ 0x140009100
 * Callers:
 *     <none>
 * Callees:
 *     Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8 (Feature_MIDI2__private_IsEnabledDeviceUsageNoInline.c)
 *     USBMidiInCopyEvent @ 0x1400407BC (USBMidiInCopyEvent.c)
 */

__int64 __fastcall USBMidiInProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rbp
  KSPIN_LOCK *v5; // r15
  PKSSTREAM_POINTER LeadingEdgeStreamPointer; // rsi
  KIRQL v7; // bl
  __int64 **v8; // r14
  int *v9; // rdi
  __int64 *v10; // rax
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // r8
  PUCHAR Data; // rcx
  ULONG v15; // ebx
  KIRQL v16; // al
  __int64 *v17; // rcx
  int **v18; // rcx
  int v20; // r8d
  ULONG Remaining; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h]

  Context = Pin->Context;
  v3 = 0;
  v22 = 1;
  v4 = Context[19];
  v5 = Context + 14;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v8 = (__int64 **)(v4 + 64);
  while ( 1 )
  {
    v9 = (int *)*v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    if ( !LeadingEdgeStreamPointer )
      goto LABEL_30;
    if ( *((__int64 ***)v9 + 1) != v8 || (v10 = *(__int64 **)v9, *(int **)(*(_QWORD *)v9 + 8LL) != v9) )
LABEL_25:
      __fastfail(3u);
    *v8 = v10;
    v10[1] = (__int64)v8;
    if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
      v22 = v9[7];
    KeReleaseSpinLock(v5, v7);
    if ( (*((_BYTE *)v9 + 25) & 0xF8) != 0xF8 )
      goto LABEL_12;
    v11 = *(_DWORD *)(v4 + 48);
    if ( !v11 )
      goto LABEL_12;
    KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v11 + 3) & 0xFFFFFFFC, 1u);
    *(_DWORD *)(v4 + 48) = 0;
    LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
    if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !LeadingEdgeStreamPointer )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(v5);
        v17 = *v8;
        if ( (__int64 **)(*v8)[1] != v8 )
          goto LABEL_25;
        *(_QWORD *)v9 = v17;
        *((_QWORD *)v9 + 1) = v8;
        v17[1] = (__int64)v9;
        *v8 = (__int64 *)v9;
        v9 = 0LL;
        KeReleaseSpinLock(v5, v16);
        goto LABEL_21;
      }
LABEL_12:
      v12 = *((_QWORD *)v9 + 2);
      v13 = *(_QWORD *)(v4 + 56);
      Data = LeadingEdgeStreamPointer->OffsetOut.Data;
      Remaining = LeadingEdgeStreamPointer->OffsetOut.Remaining;
      USBMidiInCopyEvent((_DWORD)Data, (_DWORD)v9 + 24, v13, v12, (__int64)&Remaining);
      v15 = Remaining;
      if ( (v9[6] & 0xF) == 4 && Remaining + 3 <= LeadingEdgeStreamPointer->OffsetOut.Remaining )
      {
        if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
          *(_DWORD *)(v4 + 48) = v15;
        else
          *(_DWORD *)(v4 + 48) += v15;
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (Remaining + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      }
      goto LABEL_21;
    }
    if ( LeadingEdgeStreamPointer )
      goto LABEL_12;
LABEL_21:
    v7 = KeAcquireSpinLockRaiseToDpc(v5);
    if ( !(unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() || v9 )
    {
      v18 = *(int ***)(v4 + 88);
      if ( *v18 != (int *)(v4 + 80) )
        goto LABEL_25;
      *(_QWORD *)v9 = v4 + 80;
      *((_QWORD *)v9 + 1) = v18;
      *v18 = v9;
      *(_QWORD *)(v4 + 88) = v9;
    }
  }
  if ( (unsigned int)Feature_MIDI2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( LeadingEdgeStreamPointer )
    {
      if ( v22 || (v20 = *(_DWORD *)(v4 + 48)) == 0 )
      {
LABEL_28:
        KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
      }
      else
      {
        KsStreamPointerAdvanceOffsetsAndUnlock(LeadingEdgeStreamPointer, 0, (v20 + 3) & 0xFFFFFFFC, 1u);
        *(_DWORD *)(v4 + 48) = 0;
      }
    }
  }
  else if ( LeadingEdgeStreamPointer )
  {
    goto LABEL_28;
  }
  v3 = 259;
LABEL_30:
  *(_BYTE *)(v4 + 33) = 0;
  KeReleaseSpinLock(v5, v7);
  return v3;
}

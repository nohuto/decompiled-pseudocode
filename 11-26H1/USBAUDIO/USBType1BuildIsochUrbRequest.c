/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1400025D0
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x140002380 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x140040AC4 (USBType1LockDelay.c)
 * Callees:
 *     KsGateTurnInputOff @ 0x140003BC0 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14000E328 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     memset @ 0x14001CAC0 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(PKSSTREAM_POINTER StreamPointer, __int64 (__fastcall *a2)())
{
  char v2; // di
  PKSSTREAM_POINTER v3; // rbx
  bool v4; // cl
  __int64 (__fastcall *v5)(); // r13
  char *Context; // rbp
  ULONG Remaining; // r14d
  __int64 v8; // r15
  int v9; // r12d
  unsigned int v10; // esi
  PVOID *v11; // rdx
  unsigned int v12; // r12d
  PVOID *v13; // rax
  _WORD *v14; // rcx
  _WORD *v15; // rdx
  __int64 v16; // rbx
  ULONG v17; // r13d
  int v18; // r8d
  unsigned int v19; // ecx
  KIRQL v20; // dl
  NTSTATUS v21; // eax
  unsigned int *v22; // rsi
  __int64 v23; // rax
  IRP *v24; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v26; // edx
  int v27; // r8d
  struct _IO_STACK_LOCATION *v28; // rax
  KIRQL v29; // al
  PVOID *v30; // r8
  PVOID v31; // rsi
  KIRQL v33; // al
  __int64 v35; // r13
  KIRQL v36; // al
  __int64 v37; // rdi
  void *v38; // rcx
  int v39; // eax
  KIRQL v40; // al
  __int64 *v41; // r13
  __int64 v42; // r8
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  KIRQL v45; // bl
  struct _KSGATE *v46; // rax
  int Timeout; // [rsp+20h] [rbp-C8h]
  int v48; // [rsp+28h] [rbp-C0h]
  int v49; // [rsp+30h] [rbp-B8h]
  int v50; // [rsp+38h] [rbp-B0h]
  NTSTATUS v51; // [rsp+60h] [rbp-88h]
  _WORD *v52; // [rsp+68h] [rbp-80h]
  PVOID *v53; // [rsp+70h] [rbp-78h]
  __int64 v54; // [rsp+78h] [rbp-70h]
  PKSPIN Pin; // [rsp+80h] [rbp-68h]
  PVOID Entry; // [rsp+88h] [rbp-60h] BYREF
  PVOID *p_Entry; // [rsp+90h] [rbp-58h]
  bool v60; // [rsp+100h] [rbp+18h]
  char v61; // [rsp+108h] [rbp+20h]

  Pin = StreamPointer->Pin;
  v2 = 0;
  v3 = StreamPointer;
  v61 = 0;
  v4 = 0;
  v5 = a2;
  Context = (char *)Pin->Context;
  v60 = 0;
  Remaining = v3->OffsetIn.Remaining;
  v8 = *((_QWORD *)Context + 19);
  v54 = *((_QWORD *)Context + 2);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 8)
      * (*(_DWORD *)(v8 + 132) + (((*(_DWORD *)(v8 + 136) + *(_DWORD *)(v8 + 128)) & 0xFFFFC000) >= 0xFA0000));
  p_Entry = &Entry;
  Entry = &Entry;
  v51 = 0;
  if ( Remaining >= v10 )
  {
    while ( 1 )
    {
      if ( v9 < 0 || v2 )
      {
        v4 = v60;
        goto LABEL_20;
      }
      if ( v5 == USBType1MsCompleteCallback )
      {
        v11 = (PVOID *)v3->Context;
        v12 = 1;
      }
      else
      {
        v11 = (PVOID *)ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v8 + 144));
        v12 = 32;
      }
      v53 = v11;
      if ( !v11 )
        goto LABEL_51;
      v13 = p_Entry;
      v14 = v11[3];
      v52 = v14;
      if ( *p_Entry != &Entry )
        goto LABEL_73;
      v11[1] = p_Entry;
      *v11 = &Entry;
      *v13 = v11;
      p_Entry = v11;
      memset(v14, 0, 12LL * v12 + 152);
      v15 = v52;
      v52[1] = 10;
      *((_QWORD *)v52 + 3) = *(_QWORD *)(v8 + 64);
      *((_QWORD *)v52 + 5) = v3->OffsetIn.Data;
      if ( *(_BYTE *)(v8 + 112) )
        *((_DWORD *)v52 + 32) = *(_DWORD *)(v8 + 920);
      else
        *((_DWORD *)v52 + 8) = 4;
      v16 = 0LL;
      v17 = 0;
      do
      {
        if ( Remaining < v10 || v2 )
          break;
        Remaining -= v10;
        *(_DWORD *)&v15[6 * v16 + 70] = v17;
        v17 += v10;
        v18 = *(_DWORD *)(v8 + 136);
        v19 = (v18 + *(_DWORD *)(v8 + 128)) % 0xFA0000u;
        *(_DWORD *)(v8 + 128) = v19;
        v10 = *(_DWORD *)(v8 + 8) * (*(_DWORD *)(v8 + 132) + (((v18 + v19) & 0xFFFFC000) >= 0xFA0000));
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        if ( *(_BYTE *)(v8 + 112) )
        {
          if ( (*(_DWORD *)(v8 + 924))-- == 1 )
          {
            v39 = *(_DWORD *)(v8 + 916);
            ++*(_DWORD *)(v8 + 920);
            *(_DWORD *)(v8 + 924) = v39;
            v61 = 1;
          }
          else
          {
            ++*(_DWORD *)(v8 + 920);
            v61 = 0;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v20);
        v2 = v61;
        v16 = (unsigned int)(v16 + 1);
        v15 = v52;
      }
      while ( (unsigned int)v16 < v12 );
      *((_DWORD *)v15 + 33) = v16;
      *((_DWORD *)v15 + 9) = v17;
      *v15 = 12 * v16 + 152;
      *((_DWORD *)v53 + 9) = v17;
      if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)&USBType1LockDelayCompleteCallback )
        break;
      v3 = StreamPointer;
      v53[5] = 0LL;
      v51 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)v53 + 5);
      v9 = v51;
      if ( v51 < 0 )
      {
        v5 = a2;
        goto LABEL_52;
      }
      v21 = KsStreamPointerAdvanceOffsets(StreamPointer, v17, 0, 0);
      v5 = a2;
      v4 = v21 == 0;
      v60 = v21 == 0;
LABEL_19:
      if ( Remaining < v10 )
        goto LABEL_20;
    }
    v3 = StreamPointer;
    v53[5] = StreamPointer;
    StreamPointer->OffsetIn.Data += v17;
    StreamPointer->OffsetIn.Remaining -= v17;
    v5 = a2;
LABEL_51:
    v9 = v51;
LABEL_52:
    v4 = v60;
    goto LABEL_19;
  }
LABEL_20:
  if ( (char *)v5 == (char *)&USBType1LockDelayCompleteCallback )
    goto LABEL_24;
  if ( !Remaining )
  {
    if ( !v4 )
      goto LABEL_24;
LABEL_23:
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_24;
  }
  if ( v2 )
  {
    if ( v5 == USBType1MsCompleteCallback )
      goto LABEL_24;
    goto LABEL_23;
  }
  v35 = *((_QWORD *)Context + 19);
  if ( a2 == USBType1MsCompleteCallback && Remaining == v3->OffsetIn.Count )
  {
    *(_DWORD *)(v35 + 140) = v10 - Remaining;
    v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v41 = (__int64 *)(v35 + 152);
    v42 = *v41;
    v43 = StreamPointer->Context;
    if ( *(__int64 **)(*v41 + 8) == v41 )
    {
      *v43 = v42;
      v43[1] = v41;
      *(_QWORD *)(v42 + 8) = v43;
      *v41 = (__int64)v43;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v40);
      ExFreePool(StreamPointer);
      v5 = a2;
      goto LABEL_24;
    }
LABEL_73:
    __fastfail(3u);
  }
  KeWaitForSingleObject((PVOID)(v35 + 168), Executive, 0, 0, 0LL);
  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  v37 = *(_QWORD *)(v35 + 152);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v36);
  v38 = *(void **)(v37 + 48);
  *(_DWORD *)(v37 + 36) = Remaining;
  memmove(v38, StreamPointer->OffsetIn.Data, Remaining);
  *(_DWORD *)(v35 + 140) = v10 - Remaining;
  v5 = a2;
  if ( a2 != USBType1MsCompleteCallback )
    KsStreamPointerAdvanceOffsetsAndUnlock(StreamPointer, Remaining, 0, 0);
LABEL_24:
  while ( 1 )
  {
    v22 = (unsigned int *)Entry;
    if ( Entry == &Entry || !*((_QWORD *)Entry + 5) )
      break;
    if ( *((PVOID **)Entry + 1) != &Entry )
      goto LABEL_73;
    v23 = *(_QWORD *)Entry;
    if ( *(PVOID *)(*(_QWORD *)Entry + 8LL) != Entry )
      goto LABEL_73;
    Entry = *(PVOID *)Entry;
    *(_QWORD *)(v23 + 8) = &Entry;
    v24 = (IRP *)*((_QWORD *)v22 + 2);
    CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
    IoInitializeIrp(v24, 72 * *(char *)(*(_QWORD *)(v54 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v54 + 40) + 76LL));
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = *((_QWORD *)v22 + 3);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v28 = v24->Tail.Overlay.CurrentStackLocation;
    v28[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v5;
    v28[-1].Context = v22;
    v28[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)Context + 14);
    if ( (char *)v5 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      *((_QWORD *)Context + 10) += v22[9];
      v30 = (PVOID *)*((_QWORD *)Context + 9);
      if ( *v30 != Context + 64 )
        goto LABEL_73;
      *(_QWORD *)v22 = Context + 64;
      *((_QWORD *)v22 + 1) = v30;
      *v30 = v22;
      *((_QWORD *)Context + 9) = v22;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v29);
    }
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v27) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v26 || (_BYTE)v27 )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v26,
        v27,
        WPP_GLOBAL_Control->DeviceExtension,
        Timeout,
        v48,
        v49,
        v50,
        (char)v22,
        (char)StreamPointer,
        *((_DWORD *)Context + 14));
    if ( IofCallDriver(*(PDEVICE_OBJECT *)(v54 + 40), *((PIRP *)v22 + 2)) >= 0
      && (char *)v5 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      Context[45] = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v33);
    }
    v9 = 0;
  }
  while ( 1 )
  {
    v31 = Entry;
    if ( Entry == &Entry )
      break;
    if ( *((PVOID **)Entry + 1) != &Entry )
      goto LABEL_73;
    v44 = *(_QWORD **)Entry;
    if ( *(PVOID *)(*(_QWORD *)Entry + 8LL) != Entry )
      goto LABEL_73;
    Entry = *(PVOID *)Entry;
    v44[1] = &Entry;
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v8 + 144), v31);
  }
  if ( v61 )
  {
    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    Context[44] = 1;
    v46 = KsPinGetAndGate(Pin);
    KsGateTurnInputOff(v46);
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v45);
  }
  return (unsigned int)v9;
}

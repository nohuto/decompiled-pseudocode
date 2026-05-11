/*
 * XREFs of USBType1ProcessStreamPointer @ 0x140002380
 * Callers:
 *     USBType1ProcessPin @ 0x140002240 (USBType1ProcessPin.c)
 * Callees:
 *     USBType1BuildIsochUrbRequest @ 0x1400025D0 (USBType1BuildIsochUrbRequest.c)
 *     USBType1AsyncEndpointStartPolling @ 0x14000DD48 (USBType1AsyncEndpointStartPolling.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     USBType1LockDelay @ 0x140040AC4 (USBType1LockDelay.c)
 */

__int64 __fastcall USBType1ProcessStreamPointer(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // r13
  int started; // ebx
  PKSSTREAM_POINTER v3; // rbp
  _QWORD *Context; // rdi
  __int64 v5; // r14
  ULONG Remaining; // edi
  __int64 v7; // r15
  unsigned int *v8; // rsi
  ULONG v9; // eax
  ULONG v10; // r12d
  KIRQL v11; // al
  _QWORD *v12; // r8
  void **v13; // rdx
  struct _KSSTREAM_POINTER *Pool2; // rax
  KIRQL v16; // si
  _QWORD *v17; // [rsp+50h] [rbp+8h]

  Pin = StreamPointer->Pin;
  started = 0;
  v3 = StreamPointer;
  Context = Pin->Context;
  v5 = Context[19];
  if ( *(_BYTE *)(v5 + 115) )
  {
    started = USBType1LockDelay(StreamPointer->Pin);
    if ( started < 0 )
      goto LABEL_22;
  }
  if ( !*(_BYTE *)(v5 + 112) )
    goto LABEL_13;
  v16 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( !*(_BYTE *)(v5 + 932) )
    started = USBType1AsyncEndpointStartPolling(Pin);
  KeReleaseSpinLock(Context + 14, v16);
  if ( started < 0 )
  {
LABEL_22:
    KsStreamPointerUnlock(v3, 0);
  }
  else
  {
LABEL_13:
    if ( !*(_DWORD *)(v5 + 140) )
      goto LABEL_30;
    started = 0;
    Remaining = v3->OffsetIn.Remaining;
    v17 = Pin->Context;
    v7 = v17[19];
    v8 = *(unsigned int **)(v7 + 152);
    v9 = *(_DWORD *)(v7 + 140);
    if ( v9 >= Remaining )
      v9 = v3->OffsetIn.Remaining;
    v10 = v9;
    memmove((void *)(*((_QWORD *)v8 + 6) + v8[9]), v3->OffsetIn.Data, v9);
    if ( Remaining == v10 )
    {
      KsStreamPointerAdvanceOffsetsAndUnlock(v3, v10, 0, 0);
      v3 = 0LL;
    }
    else
    {
      KsStreamPointerAdvanceOffsets(v3, v10, 0, 0);
    }
    *(_DWORD *)(v7 + 140) -= v10;
    v8[9] += v10;
    if ( !*(_DWORD *)(v7 + 140) )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(v17 + 14);
      v12 = *(_QWORD **)v8;
      if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 || (v13 = (void **)*((_QWORD *)v8 + 1), *v13 != v8) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      KeReleaseSpinLock(v17 + 14, v11);
      Pool2 = (struct _KSSTREAM_POINTER *)ExAllocatePool2(64LL, 64LL, 1096972357LL);
      if ( Pool2 )
      {
        Pool2->Pin = Pin;
        Pool2->Offset = &Pool2->OffsetIn;
        Pool2->OffsetIn.Data = (PUCHAR)*((_QWORD *)v8 + 6);
        Pool2->OffsetIn.Count = v8[9];
        Pool2->OffsetIn.Remaining = v8[9];
        Pool2->Context = v8;
        started = USBType1BuildIsochUrbRequest(Pool2);
      }
      else
      {
        started = -1073741670;
      }
    }
    if ( started >= 0 )
    {
LABEL_30:
      if ( !v3 )
        return 0;
      if ( *(_DWORD *)(v5 + 140) )
        return 0;
      started = USBType1BuildIsochUrbRequest(v3);
      if ( started >= 0 )
        return 0;
    }
  }
  return (unsigned int)started;
}

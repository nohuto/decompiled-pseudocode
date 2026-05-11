/*
 * XREFs of USBType1AsyncEndpointPollCallback @ 0x140003BF0
 * Callers:
 *     <none>
 * Callees:
 *     KsGateTurnInputOn @ 0x140003EB8 (KsGateTurnInputOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDddd @ 0x14000E02C (WPP_RECORDER_AND_TRACE_SF_DDDddd.c)
 */

__int64 __fastcall USBType1AsyncEndpointPollCallback(__int64 a1, __int64 a2, struct _KSPIN *a3)
{
  _QWORD *Context; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  KIRQL v8; // r12
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edx
  bool v16; // r10
  struct _KSGATE *v17; // rax
  unsigned int v18; // edx

  Context = a3->Context;
  v6 = Context[19];
  v7 = *(_QWORD *)(v6 + 880);
  v8 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  if ( *(_DWORD *)(v6 + 924) )
    *(_DWORD *)(v6 + 924) = *(_DWORD *)(v6 + 916) + 16;
  *(_BYTE *)(v6 + 933) = 0;
  KeSetEvent((PRKEVENT)(v6 + 936), 0, 0);
  if ( *(int *)(a2 + 48) >= 0 && *(int *)(v7 + 4) >= 0 && *(_DWORD *)(v7 + 36) == 3 )
  {
    v10 = *(_DWORD *)(v6 + 872);
    v11 = (4 * *(unsigned __int8 *)(v6 + 994)) | (*(unsigned __int8 *)(v6 + 993) >> 6);
    v12 = 1000 * (*(_WORD *)(v6 + 992) & 0x3FFF);
    v13 = (v12 >> 14) + 1000 * v11;
    v14 = v10 - v13;
    v15 = v10 / 0xA;
    if ( v10 <= v13 )
      v14 = ((1000 * (*(_WORD *)(v6 + 992) & 0x3FFFu)) >> 14) + 1000 * v11 - v10;
    if ( v14 > v15 )
    {
      v13 = v10 - v15;
      if ( v10 <= ((1000 * (*(_WORD *)(v6 + 992) & 0x3FFFu)) >> 14) + 1000 * v11 )
        v13 = v15 + v10;
      v11 = v13 / 0x3E8;
      v12 = (v13 % 0x3E8) << 14;
    }
    if ( v13 != *((_DWORD *)Context + 26) )
    {
      v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v10) = 0;
      }
      if ( v16 || (_BYTE)v10 )
      {
        v18 = v12 / 0x3E8;
        LOBYTE(v18) = v16;
        WPP_RECORDER_AND_TRACE_SF_DDDddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v10,
          WPP_GLOBAL_Control->DeviceExtension);
      }
      *((_DWORD *)Context + 26) = v13;
      *(_DWORD *)(v6 + 132) = v11;
      *(_DWORD *)(v6 + 136) = v12;
    }
  }
  if ( *((_BYTE *)Context + 44) )
  {
    *((_BYTE *)Context + 44) = 0;
    v17 = KsPinGetAndGate(a3);
    KsGateTurnInputOn(v17);
    if ( !*(_BYTE *)(v6 + 116) )
      goto LABEL_23;
    KsPinAttemptProcessing(a3, 1u);
  }
  if ( !*(_BYTE *)(v6 + 116) )
  {
LABEL_23:
    *(_BYTE *)(v6 + 932) = 0;
    goto LABEL_7;
  }
  *(_DWORD *)(v6 + 912) += *(_DWORD *)(v6 + 916);
  IoQueueWorkItem(*(PIO_WORKITEM *)(v6 + 984), USBType1AsyncEndpointPoll, CriticalWorkQueue, a3);
LABEL_7:
  KeReleaseSpinLock(Context + 14, v8);
  return 3221225494LL;
}

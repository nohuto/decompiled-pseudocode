/*
 * XREFs of NvmeAdapterTerminateFabricControllerAssociation @ 0x1400EEB88
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

BOOLEAN __fastcall NvmeAdapterTerminateFabricControllerAssociation(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  union _LARGE_INTEGER v9; // rdi
  union _LARGE_INTEGER v10; // rbx
  union _LARGE_INTEGER v11; // rax
  BOOLEAN result; // al
  struct _KEVENT Event; // [rsp+A8h] [rbp-80h] BYREF
  struct _KDPC Dpc; // [rsp+C8h] [rbp-60h] BYREF
  struct _KTIMER Timer; // [rsp+108h] [rbp-20h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+168h] [rbp+40h] BYREF

  memset_0(&Timer, 0, sizeof(Timer));
  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)NvmeAdapterFabricControllerQuiesceTimerDpcRoutine, &Event);
  v2 = *(unsigned int *)(a1 + 1076);
  if ( !(_DWORD)v2 )
    v2 = 120000LL;
  v3 = *(_QWORD *)(a1 + 592);
  v4 = v2 * ((*(_DWORD *)(v3 + 96) & 0x40 | 0x80uLL) >> 6);
  v5 = *(_WORD *)(v3 + 386);
  if ( !v5 )
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 96) + 56LL);
  v6 = v4 + v5;
  StorEtwNvmeControllerEvent(
    a1,
    1,
    4LL,
    (__int64)L"Using time-based recovery",
    L"WaitTimeMs",
    v6,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  v7 = -10000LL * v6;
  Timeout.QuadPart = -10000000LL;
  KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)v7, 0, 1u, &Dpc);
  while ( v7 )
  {
    v8 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
    if ( !v8 )
      break;
    if ( v8 == 258 )
    {
      v9.QuadPart = -v7;
      v10.QuadPart = -Timeout.QuadPart;
      Timeout = v10;
      v11 = v10;
      if ( v9.QuadPart <= v10.QuadPart )
        break;
      if ( (*(_DWORD *)(a1 + 136) & 0x400LL) != 0 )
      {
        result = KeCancelTimer(&Timer);
        if ( result )
          return result;
        v11 = Timeout;
      }
      v7 = v10.QuadPart - v9.QuadPart;
      Timeout.QuadPart = -v11.QuadPart;
    }
  }
  *(_QWORD *)(a1 + 136) &= ~0x100uLL;
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           4LL,
           (__int64)L"Previous association has been terminated",
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0);
}

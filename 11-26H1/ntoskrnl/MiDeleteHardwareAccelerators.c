/*
 * XREFs of MiDeleteHardwareAccelerators @ 0x14070F4A0
 * Callers:
 *     MmAcceleratorCallbackRoutine @ 0x14087FB60 (MmAcceleratorCallbackRoutine.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1402A6A58 (MiFreeDeferredAcceleratorPool.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
 *     MiWakeAllZeroConductors @ 0x14070EB7C (MiWakeAllZeroConductors.c)
 *     MiUnlinkAccelerator @ 0x14070FBA8 (MiUnlinkAccelerator.c)
 *     MiWaitForInFlightAcceleratorDeletions @ 0x14070FC50 (MiWaitForInFlightAcceleratorDeletions.c)
 */

void __fastcall MiDeleteHardwareAccelerators(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // di
  ULONG *v6; // rdx
  unsigned int i; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // r12
  char *v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF

  v4 = ExAcquireSpinLockExclusive(&dword_140E36530);
  v5 = v4;
  if ( a2 )
  {
    byte_140E36504 = 1;
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
    else
      ExReleaseSpinLockExclusive(&dword_140E36530, v4);
    MiWakeAllZeroConductors();
    ExAcquireSpinLockExclusive(&dword_140E36530);
  }
LABEL_6:
  v6 = &MiState;
  for ( i = 0; i < 0x40; ++i )
  {
    v8 = 16LL * i;
    v9 = *(_QWORD *)((char *)&MiState + v8 + 39808);
    v10 = (char *)&MiState + v8 + 39808;
    if ( (char *)v9 != v10 )
    {
      while ( 1 )
      {
        v11 = *(char **)v9;
        if ( a2 || *(_QWORD *)(v9 + 16) == a1 )
        {
          *(_DWORD *)(v9 + 52) |= 1u;
          if ( *(_DWORD *)(v9 + 48) )
          {
            v18 = 393479LL;
            v19[1] = v19;
            v19[0] = v19;
            v17 = *(_QWORD *)(v9 + 40);
            *(_QWORD *)(v9 + 40) = &v17;
            if ( v5 == 17 )
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
            else
              ExReleaseSpinLockExclusive(&dword_140E36530, v5);
            MiWakeAllZeroConductors();
            KeWaitForGate((__int64)&v18, 19LL);
            ExAcquireSpinLockExclusive(&dword_140E36530);
            if ( !a2 )
            {
LABEL_20:
              v6 = &MiState;
              break;
            }
            goto LABEL_6;
          }
          MiUnlinkAccelerator(v9, v6);
          v12 = (__int64 *)qword_140E36510;
          if ( *(PVOID **)qword_140E36510 != &P )
            __fastfail(3u);
          *(_QWORD *)v9 = &P;
          *(_QWORD *)(v9 + 8) = v12;
          *v12 = v9;
          qword_140E36510 = v9;
          if ( !a2 )
            goto LABEL_20;
        }
        v9 = (__int64)v11;
        if ( v11 == v10 )
          goto LABEL_20;
      }
    }
  }
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
  else
    ExReleaseSpinLockExclusive(&dword_140E36530, v5);
  MiFreeDeferredAcceleratorPool();
  if ( a2 )
  {
    MiWaitForInFlightAcceleratorDeletions(v14, v13, v15, v16);
    if ( qword_140E36528 )
    {
      AccelDestroyOffloadWorkspace(qword_140E36528);
      qword_140E36528 = 0LL;
    }
  }
}

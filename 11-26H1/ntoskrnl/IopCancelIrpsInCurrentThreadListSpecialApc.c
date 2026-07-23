/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1404C7DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAlertThread @ 0x1403108E0 (KeAlertThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v6; // r14
  char v7; // bp
  KIRQL v8; // al
  KIRQL v9; // r9
  unsigned int *v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r8d

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  v9 = v8;
  v10 = *(unsigned int **)&CurrentThread[1].SystemCallNumber;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].SystemCallNumber == v10 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread, v8);
  }
  else
  {
    do
    {
      if ( *((char *)v10 + 35) < *((char *)v10 + 34) + 2 )
      {
        v12 = *(_QWORD *)(a1 + 96);
        if ( !v12 || (v13 = *(_QWORD *)(a1 + 96), *((_QWORD *)v10 + 5) == v12) )
        {
          v16 = *(_QWORD *)(a1 + 88);
          if ( !v16 || (v13 = *(_QWORD *)(a1 + 96), *((_QWORD *)v10 + 20) == v16) )
          {
            v17 = *(v10 - 4);
            v13 = *(_QWORD *)(a1 + 96);
            if ( (v17 & 0x402) == 0 && ((v17 & 0x84) != 0 || (*((_BYTE *)v10 + 39) & 2) != 0) )
            {
              *((_BYTE *)v10 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              v13 = *(_QWORD *)(a1 + 96);
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) && (!v13 || *((_QWORD *)v10 + 5) == v13) )
        {
          v15 = *(_QWORD *)(a1 + 88);
          if ( (!v15 || *((_QWORD *)v10 + 20) == v15) && (*(v10 - 4) & 2) == 0 )
          {
            *v6 = 1;
            *(_DWORD *)(a1 + 132) = 1;
          }
        }
      }
      v10 = *(unsigned int **)v10;
    }
    while ( &CurrentThread[1].SystemCallNumber != v10 );
    KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread, v9);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0LL, v14);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}

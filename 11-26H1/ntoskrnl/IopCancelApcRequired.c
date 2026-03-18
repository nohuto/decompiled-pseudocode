/*
 * XREFs of IopCancelApcRequired @ 0x14052AAA4
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x140797050 (NtCancelSynchronousIoFile.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140956BB4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  _QWORD *v7; // r9
  unsigned int v8; // ebx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1560));
  v7 = *(_QWORD **)(a1 + 1344);
  if ( v7 == (_QWORD *)(a1 + 1344) )
  {
    v8 = 0;
  }
  else if ( a3 || (v8 = 1, a2) )
  {
    while ( 1 )
    {
      v8 = 0;
      if ( (_QWORD *)(a1 + 1344) == v7 )
        break;
      if ( (*(_DWORD *)(v7 - 2) & 2) == 0 && (v7[5] == a3 && (!a2 || v7[20] == a2) || !a3 && v7[20] == a2) )
      {
        v8 = 1;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1560), v6);
  return v8;
}

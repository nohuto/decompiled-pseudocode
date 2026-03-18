/*
 * XREFs of SleepstudyHelperSetBlockerParentHandle @ 0x1404B0B20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerParentHandle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  KSPIN_LOCK *v5; // rcx
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // dl
  int v9; // eax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(KSPIN_LOCK **)(a1 + 80);
    if ( v5 )
      SshpDereferenceBlocker(v5, 1, 1);
    *(_QWORD *)(a1 + 80) = a2;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a2);
    v7 = *(_DWORD *)(a2 + 16);
    v8 = v6;
    *(_DWORD *)(a2 + 16) = v7 + 1;
    v9 = *(_DWORD *)(a2 + 8);
    if ( (v9 & 8) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v7;
      *(_DWORD *)(a2 + 8) = v9 & 0xFFFFFFF7;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)a2, v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

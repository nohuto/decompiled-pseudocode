/*
 * XREFs of KiEpfComplete @ 0x1405F9754
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x1405F986C (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 */

void __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *i; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  for ( i = *(_QWORD **)v2; ; i = (_QWORD *)*i )
  {
    v4 = 0LL;
    if ( i == (_QWORD *)v2 )
      break;
    v4 = i;
    v5 = (_QWORD *)*i;
    if ( i[2] == a1 )
    {
      if ( (_QWORD *)v5[1] == i )
      {
        v6 = (_QWORD *)i[1];
        if ( (_QWORD *)*v6 == i )
        {
          *v6 = v5;
          v5[1] = v6;
          goto LABEL_13;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
  }
  v7 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
  {
    ++*(_DWORD *)(v2 + 24);
  }
  else
  {
    if ( v7[1] != v2 )
      goto LABEL_16;
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_16;
    *(_QWORD *)v2 = v8;
    v4 = v7;
    *(_QWORD *)(v8 + 8) = v2;
  }
LABEL_13:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v4 )
  {
    _InterlockedIncrement(&dword_140F14F24);
    KeSignalGate((__int64)(v4 + 3), 0LL, v9);
  }
}

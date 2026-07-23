/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x140C19318
 * Callers:
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 *v4; // rdx
  KIRQL v5; // r9
  __int64 *v6; // r8
  __int64 *v8; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  v5 = v3;
  while ( v4 != &KdpDebuggerDataListHead )
  {
    v6 = v4;
    v4 = (__int64 *)*v4;
    if ( v6 == (__int64 *)a2 || *((_DWORD *)v6 + 4) == 1195525195 )
    {
      KeReleaseSpinLock(&KdpDataSpinLock, v3);
      return 0;
    }
  }
  *(_DWORD *)(a2 + 16) = 1195525195;
  *(_DWORD *)(a2 + 20) = 936;
  v8 = (__int64 *)qword_140F597D8;
  if ( *(__int64 **)qword_140F597D8 != &KdpDebuggerDataListHead )
    __fastfail(3u);
  *(_QWORD *)a2 = &KdpDebuggerDataListHead;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  qword_140F597D8 = a2;
  KeReleaseSpinLock(&KdpDataSpinLock, v5);
  return 1;
}

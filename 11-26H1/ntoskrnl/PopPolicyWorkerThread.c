/*
 * XREFs of PopPolicyWorkerThread @ 0x1404C1A70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edi
  KIRQL v4; // r9
  int v5; // esi
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r8d

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F10820);
  v3 = *(_DWORD *)&stru_140F10828.ApcStateFill[32] | a1;
  v4 = v2;
  *(_DWORD *)&stru_140F10828.ApcStateFill[32] = v3;
  v5 = 0;
  v6 = v3;
  while ( 1 )
  {
    v10 = unk_140F10E44 & v6;
    if ( !v10 )
      break;
    _BitScanForward((unsigned int *)&v7, v10);
    v8 = ~(1 << v7);
    unk_140F10E44 &= v8;
    *(_DWORD *)&stru_140F10828.ApcStateFill[32] = v3 & v8;
    KeReleaseSpinLock(&qword_140F10820, v4);
    if ( PopWorkerTypes[v7] )
      v5 |= guard_dispatch_icall_no_overrides(PopWorkerTypes, v9);
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F10820);
    *(_DWORD *)&stru_140F10828.ApcStateFill[32] |= 1 << v7;
    v6 = *(_DWORD *)&stru_140F10828.ApcStateFill[32];
    v3 = *(_DWORD *)&stru_140F10828.ApcStateFill[32];
  }
  unk_140F10E44 |= v5;
  KeReleaseSpinLock(&qword_140F10820, v4);
}

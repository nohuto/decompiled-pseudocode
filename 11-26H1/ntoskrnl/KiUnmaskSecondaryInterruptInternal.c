/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140430668
 * Callers:
 *     KeUnmaskInterrupt @ 0x140430AF4 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404309BC (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  int v9; // edi

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(v3 + KiDpcCorralLock.Timer.DueTime.QuadPart);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiDpcCorralLock.Timer.DueTime.QuadPart));
  if ( !*(_BYTE *)(v3 + KiDpcCorralLock.Timer.DueTime.QuadPart + 32) )
  {
    v5 = 296;
LABEL_4:
    HalpReleaseHighLevelLock(v4, 0);
    return v5;
  }
  v6 = *(_QWORD *)(v3 + KiDpcCorralLock.Timer.DueTime.QuadPart + 40);
  if ( !v6 )
    goto LABEL_4;
  v7 = (__int64 *)(v6 + 8);
  v8 = (__int64 *)(v6 + 8);
  while ( 1 )
  {
    v9 = v8[12] & 1;
    if ( !v9 )
      break;
    v8 = (__int64 *)*v8;
    if ( v8 == v7 )
      goto LABEL_10;
  }
  *(_BYTE *)(v3 + KiDpcCorralLock.Timer.DueTime.QuadPart + 32) = 0;
LABEL_10:
  HalpReleaseHighLevelLock(v4, 0);
  if ( !v9 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a2, 0LL);
  return v5;
}

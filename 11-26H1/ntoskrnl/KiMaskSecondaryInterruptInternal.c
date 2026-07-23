/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140430730
 * Callers:
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404309BC (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx

  v3 = 0;
  v4 = 48LL * (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(v4 + KiDpcCorralLock.Timer.DueTime.QuadPart);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v4 + KiDpcCorralLock.Timer.DueTime.QuadPart));
  if ( *(_BYTE *)(v4 + KiDpcCorralLock.Timer.DueTime.QuadPart + 32)
    || (v7 = *(_QWORD *)(v4 + KiDpcCorralLock.Timer.DueTime.QuadPart + 40)) == 0 )
  {
    HalpReleaseHighLevelLock(v5, 0);
    return 0LL;
  }
  else
  {
    v8 = (__int64 *)(v7 + 8);
    while ( (v8[12] & 1) != 0 )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == (__int64 *)(v7 + 8) )
      {
        *(_BYTE *)(v4 + KiDpcCorralLock.Timer.DueTime.QuadPart + 32) = 1;
        goto LABEL_9;
      }
    }
    v3 = 296;
LABEL_9:
    HalpReleaseHighLevelLock(v5, 0);
    if ( !v3 )
      guard_dispatch_icall_no_overrides(a2, 0LL);
    return v3;
  }
}

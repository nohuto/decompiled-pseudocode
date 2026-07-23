/*
 * XREFs of MiTerminateEnclave @ 0x14087D03C
 * Callers:
 *     NtTerminateEnclave @ 0x14087D760 (NtTerminateEnclave.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140AB8F4C (PsDereferenceVsmEnclave.c)
 *     MiTerminateHardwareEnclave @ 0x140C08014 (MiTerminateHardwareEnclave.c)
 */

__int64 __fastcall MiTerminateEnclave(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9

  v3 = *(_DWORD *)(a2 + 72);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 8) == 0 )
      MiTerminateHardwareEnclave(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(volatile signed __int64 **)(a2 + 80);
    if ( _InterlockedIncrement64(v8 + 2) <= 1 )
      __fastfail(0xEu);
    MiUnlockVad((__int64)CurrentThread, a2);
    v11 = PsTerminateVsmEnclave((__int64)v8, a3, v9, v10);
    PsDereferenceVsmEnclave((PVOID)v8);
    MiLockVad((__int64)CurrentThread, a2, v12, v13);
    return v11;
  }
}

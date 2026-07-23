/*
 * XREFs of PiProcessAddBootDevices @ 0x1407A7B1C
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x140CC73C4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 */

__int64 __fastcall PiProcessAddBootDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)(v3 + 300) == 772 && (*(_DWORD *)(v3 + 396) & 0x6002) == 0 && !*(_QWORD *)(v3 + 432) )
  {
    PiPnpRtlBeginOperation(&P, a2);
    if ( (int)PipCallDriverAddDevice(v3) >= 0 )
      PoFxPrepareDevice(v3, 0, v4, v5);
    if ( P )
      PiPnpRtlEndOperation(P);
  }
  return 0LL;
}

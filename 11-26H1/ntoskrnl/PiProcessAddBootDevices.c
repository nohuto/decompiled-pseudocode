/*
 * XREFs of PiProcessAddBootDevices @ 0x1407A4FDC
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x140CC12F4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x1404A1864 (PoFxPrepareDevice.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
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

/*
 * XREFs of HalpInterruptConnect @ 0x14057DE80
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x140587924 (HalpTimerInitializeSystemWatchdog.c)
 *     HalpRegisterPeiErrorSource @ 0x140590B38 (HalpRegisterPeiErrorSource.c)
 *     HalpDmaConfigureInterrupt @ 0x1405A35DC (HalpDmaConfigureInterrupt.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptLineToGsi @ 0x140435864 (HalpInterruptLineToGsi.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoSetDevicePropertyData @ 0x140A189E0 (IoSetDevicePropertyData.c)
 *     IoConnectInterruptEx @ 0x140A9C1B0 (IoConnectInterruptEx.c)
 */

int __fastcall HalpInterruptConnect(
        __int128 *a1,
        unsigned int a2,
        ULONG a3,
        KIRQL a4,
        int a5,
        KINTERRUPT_MODE a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        KSPIN_LOCK *a9,
        KIRQL a10,
        int a11,
        PKINTERRUPT *a12)
{
  __int128 v16; // xmm0
  int result; // eax
  int v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  PKINTERRUPT *v19; // [rsp+50h] [rbp-B0h]
  KSPIN_LOCK *v20; // [rsp+58h] [rbp-A8h]
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-A0h] BYREF
  int Data; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v23[2]; // [rsp+B8h] [rbp-48h] BYREF
  KIRQL v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C4h] [rbp-3Ch] BYREF
  KINTERRUPT_MODE v26; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-20h]
  _DWORD v29[8]; // [rsp+F0h] [rbp-10h] BYREF

  v20 = a9;
  v19 = a12;
  memset_0(&Data, 0, 0x60uLL);
  v16 = *a1;
  Data = 1;
  v23[1] = a3;
  v24 = a4;
  v28 = (v28 | 0x40000000) ^ (a11 ^ (v28 | 0x40000000)) & 0x3FFFFFFF;
  v25 = a5;
  v27 = v16;
  v23[0] = 0;
  v26 = a6;
  *(_QWORD *)v18 = 0LL;
  result = HalpInterruptGsiToLine(a2, v18);
  if ( result >= 0 )
  {
    HalpInterruptApplyOverrides(v18, &v25, &v26);
    result = HalpInterruptLineToGsi(v18, v29);
    if ( result >= 0 )
    {
      memset(v18, 0, 12);
      result = HalpInterruptRemap(0, 0, (unsigned int)v18, 0, (__int64)v23, 1);
      if ( result >= 0 )
      {
        IoSetDevicePropertyData(AcpiRootPdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x60u, &Data);
        memset_0(&Parameters, 0, sizeof(Parameters));
        Parameters.FullySpecified.PhysicalDeviceObject = AcpiRootPdo;
        Parameters.FullySpecified.InterruptObject = v19;
        Parameters.FullySpecified.SpinLock = v20;
        Parameters.FullySpecified.SynchronizeIrql = a10;
        Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a1;
        Parameters.FullySpecified.Group = *((_WORD *)a1 + 4);
        Parameters.Version = 4;
        *(_OWORD *)&Parameters.MessageBased.MessageServiceRoutine = __PAIR128__(a8, a7);
        *(_WORD *)&Parameters.MessageBased.FloatingSave = 256;
        Parameters.FullySpecified.Vector = a3;
        Parameters.FullySpecified.Irql = a4;
        Parameters.FullySpecified.InterruptMode = a6;
        result = IoConnectInterruptEx(&Parameters);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}

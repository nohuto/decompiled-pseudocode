/*
 * XREFs of IoConnectInterruptEx @ 0x140A9C1B0
 * Callers:
 *     HalpInterruptConnect @ 0x14057DE80 (HalpInterruptConnect.c)
 *     DifIoConnectInterruptExWrapper @ 0x14065DD60 (DifIoConnectInterruptExWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopConnectInterruptFullySpecified @ 0x1407A2248 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x140A9BEFC (IopConnectLineBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140A9C4C0 (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A9D270 (IopConnectMessageBasedInterrupt.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  KIRQL Irql; // dl
  KIRQL SynchronizeIrql; // al
  char v6; // di
  PKSPIN_LOCK *p_SpinLock; // rsi
  USHORT Group; // r14
  unsigned int v9; // edx
  KIRQL v10; // al
  __int128 v11; // xmm0
  __m128i v12; // xmm2
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  NTSTATUS v16; // esi
  NTSTATUS v17; // eax
  PVOID ServiceContext; // r9
  PKSERVICE_ROUTINE ServiceRoutine; // r8
  PDEVICE_OBJECT PhysicalDeviceObject; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-69h]
  ULONG Vector; // [rsp+28h] [rbp-61h]
  KIRQL v24; // [rsp+30h] [rbp-59h]
  KIRQL v25; // [rsp+38h] [rbp-51h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-49h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-41h]
  __int128 ProcessorEnableMask; // [rsp+60h] [rbp-29h] BYREF
  int v29; // [rsp+70h] [rbp-19h]
  _BYTE v30[4]; // [rsp+74h] [rbp-15h] BYREF
  __m128i v31; // [rsp+78h] [rbp-11h]
  __int128 v32; // [rsp+88h] [rbp-1h]
  __int128 v33; // [rsp+98h] [rbp+Fh]
  __int128 v34; // [rsp+A8h] [rbp+1Fh]
  __int128 v35; // [rsp+B8h] [rbp+2Fh]
  __int64 v36; // [rsp+C8h] [rbp+3Fh]
  __int64 v37; // [rsp+100h] [rbp+77h] BYREF

  v37 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  if ( (_DWORD)Version == 1 )
  {
LABEL_6:
    if ( !Parameters->FullySpecified.PhysicalDeviceObject )
      return -1073741811;
    if ( !Parameters->FullySpecified.ServiceRoutine )
      return -1073741811;
    Irql = Parameters->FullySpecified.Irql;
    SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
    if ( SynchronizeIrql < Irql )
      return -1073741811;
    if ( SynchronizeIrql || Irql )
    {
      v6 = 0;
      p_SpinLock = &Parameters->FullySpecified.SpinLock;
    }
    else
    {
      p_SpinLock = &Parameters->FullySpecified.SpinLock;
      v6 = 1;
      if ( Parameters->FullySpecified.SpinLock )
        return -1073741811;
    }
    if ( (_DWORD)Version == 4 )
      Group = Parameters->FullySpecified.Group;
    else
      Group = 0;
    if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
    {
      memset_0(v30, 0, 0x5CuLL);
      v9 = 0;
      v29 = 0;
      while ( 1 )
      {
        if ( v9 >= MEMORY[0] )
        {
          ExFreePoolWithTag(0LL, 0);
          return -1073741637;
        }
        if ( *(_DWORD *)(88LL * v9 + 0xC) == Parameters->FullySpecified.Vector )
        {
          v10 = Parameters->FullySpecified.Irql;
          if ( (*(_BYTE *)(88LL * v9 + 0x10) == v10 || !v10)
            && *(_DWORD *)(88LL * v9 + 0x18) == Parameters->FullySpecified.InterruptMode
            && *(_WORD *)(88LL * v9 + 0x28) == Group
            && *(_QWORD *)(88LL * v9 + 0x20) == Parameters->FullySpecified.ProcessorEnableMask )
          {
            break;
          }
        }
        ++v9;
      }
      v11 = *(_OWORD *)(88LL * v9 + 0x18);
      v29 = 1;
      v12 = *(__m128i *)(88LL * v9 + 8);
      v13 = *(_OWORD *)(88LL * v9 + 0x28);
      v32 = v11;
      v14 = *(_OWORD *)(88LL * v9 + 0x38);
      v33 = v13;
      v15 = *(_OWORD *)(88LL * v9 + 0x48);
      v34 = v14;
      v36 = *(_QWORD *)(88LL * v9 + 0x58);
      v31 = v12;
      v35 = v15;
      if ( !_mm_cvtsi128_si32(v12) && (BYTE12(v34) & 1) != 0 )
        Parameters->FullySpecified.ShareVector = 1;
      v16 = IopConnectInterrupt(
              &v37,
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.ServiceRoutine,
              0LL,
              Parameters->FullySpecified.ServiceContext,
              0,
              Parameters->FullySpecified.SpinLock,
              Parameters->FullySpecified.SynchronizeIrql,
              Parameters->FullySpecified.ShareVector);
      if ( v16 >= 0 )
        *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)(v37 + 112);
      ExFreePoolWithTag(0LL, 0);
      return v16;
    }
    if ( !v6 )
    {
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      PhysicalDeviceObject = Parameters->FullySpecified.PhysicalDeviceObject;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v25 = Parameters->FullySpecified.SynchronizeIrql;
      v24 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      BugCheckParameter4 = (ULONG_PTR)*p_SpinLock;
      WORD4(ProcessorEnableMask) = Group;
      return IopConnectInterruptFullySpecified(
               InterruptObject,
               (__int64)PhysicalDeviceObject,
               (__int64)ServiceRoutine,
               (__int64)ServiceContext,
               BugCheckParameter4,
               Vector,
               v24,
               v25,
               InterruptMode,
               ShareVector,
               &ProcessorEnableMask);
    }
    return -1073741637;
  }
  if ( (_DWORD)Version == 2 )
    return IopConnectLineBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             (__int64)Parameters->FullySpecified.ServiceRoutine);
  if ( (_DWORD)Version != 3 )
  {
    if ( (_DWORD)Version == 4 )
      goto LABEL_6;
    if ( (_DWORD)Version != 5 )
    {
      Parameters->Version = 3;
      return -1073741637;
    }
  }
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v17 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              (__int64)Parameters->MessageBased.FallBackServiceRoutine);
      Parameters->Version = 2;
      return v17;
    }
    return -1073741637;
  }
  return result;
}

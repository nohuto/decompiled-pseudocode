/*
 * XREFs of AcpiDeviceResetCompleteResetWorker @ 0x14005DA70
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDeviceResetDereference @ 0x14004D820 (AcpiDeviceResetDereference.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x14005E03C (AcpiResetDeviceAlreadyProcessed.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall AcpiDeviceResetCompleteResetWorker(volatile signed __int32 *P)
{
  volatile signed __int32 *v1; // rdi
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v7; // r15
  char v8; // bl
  KIRQL v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  PIRP Irp; // rax
  IRP *v13; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rbp
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+30h] [rbp-48h]
  void (__fastcall *v22)(_QWORD); // [rsp+40h] [rbp-38h]

  v20 = 0LL;
  v1 = P;
  v21 = 0LL;
  v22 = 0LL;
  _InterlockedAdd(P, 1u);
  LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = *((_QWORD *)v1 + 9);
  if ( !*((_BYTE *)v1 + 18) )
  {
    v5 = *(_QWORD **)(v4 + 48);
    if ( v5 != (_QWORD *)(v4 + 48) )
    {
      do
      {
        v6 = v5 - 5;
        v7 = v5;
        v5 = (_QWORD *)*v5;
        v8 = AcpiResetDeviceAlreadyProcessed(v4, v6, v2, v3, v20);
        KeReleaseSpinLock(&AcpiPowerLock, v9);
        if ( !v8 )
        {
          v10 = *(v7 - 1);
          if ( v10 )
          {
            v11 = *(_QWORD *)(v10 + 768);
            if ( v11 )
            {
              Irp = IoAllocateIrp(*(_BYTE *)(v11 + 76), 0);
              v13 = Irp;
              if ( Irp )
              {
                CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
                Irp->IoStatus.Status = -1073741637;
                Irp->IoStatus.Information = 0LL;
                CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&v20;
                CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
                *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
                CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
                CurrentStackLocation[-1].Parameters.Create.Options = 65576;
                if ( (int)IoSynchronousCallDriver(*(_QWORD *)(*(v7 - 1) + 768LL), Irp) >= 0 )
                {
                  v22(*((_QWORD *)&v20 + 1));
                  (*((void (__fastcall **)(_QWORD))&v21 + 1))(*((_QWORD *)&v20 + 1));
                }
                IoFreeIrp(v13);
              }
            }
          }
        }
        LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      }
      while ( v5 != (_QWORD *)(v4 + 48) );
      v1 = P;
    }
  }
  v15 = (_QWORD *)(v4 + 48);
  v16 = *(_QWORD **)(v4 + 48);
  while ( v16 != v15 )
  {
    v17 = *(v16 - 1);
    v16 = (_QWORD *)*v16;
    v18 = *(_QWORD **)(v17 + 952);
    *(_QWORD *)(v17 + 952) = 0LL;
    KeReleaseSpinLock(&AcpiPowerLock, v3);
    if ( v18 )
      AcpiDeviceResetDereference(v18);
    LOBYTE(v3) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  }
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v19 = *((_QWORD *)v1 + 3);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 48) = *((_DWORD *)v1 + 8);
    IofCompleteRequest(*((PIRP *)v1 + 3), 0);
  }
  *((_QWORD *)v1 + 3) = 0LL;
  _InterlockedAnd(v1 + 22, 0);
  AcpiDeviceResetDereference(v1);
}

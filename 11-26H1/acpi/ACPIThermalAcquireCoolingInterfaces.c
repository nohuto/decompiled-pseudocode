/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x140042A28
 * Callers:
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1400673B0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1400AD970 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1400B9F20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIThermalAssocaiteConstraint @ 0x140069DD4 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x14006A3C8 (ACPIThermalQueryCoolingInterfaces.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  char v5; // bp
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // eax
  KIRQL v11; // al
  __int64 *v12; // rdi
  KIRQL v13; // r14
  __int64 *v14; // rbp
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 664) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  v5 = 0;
LABEL_2:
  v6 = 0LL;
  while ( 1 )
  {
    v7 = v3;
    if ( v3 == &AcpiThermalUnclaimedConstraintList )
      break;
    v9 = v3[2];
    v3 = (__int64 *)*v3;
    v18 = 0LL;
    v10 = AMLIGetNameSpaceObject((_BYTE *)v7 + 40, *(__int64 **)(v9 + 760), &v18, 0);
    v6 = v18;
    if ( v10 >= 0 && v18 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v18 + 104LL) == a1 )
      {
        v5 = 1;
        break;
      }
      AMLIDereferenceHandleEx(v18);
      goto LABEL_2;
    }
  }
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    v6 = 0LL;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  if ( !v5 )
    return 3221225659LL;
  result = ACPIThermalQueryCoolingInterfaces(a1);
  if ( (int)result >= 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v12 = (__int64 *)AcpiThermalUnclaimedConstraintList;
    v13 = v11;
    while ( v12 != &AcpiThermalUnclaimedConstraintList )
    {
      v14 = v12 - 2;
      v18 = 0LL;
      v15 = v12[2];
      v16 = v12 + 5;
      v12 = (__int64 *)*v12;
      v17 = AMLIGetNameSpaceObject(v16, *(__int64 **)(v15 + 760), &v18, 0);
      v6 = v18;
      if ( v17 >= 0 && v18 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v18 + 104LL) == a1 )
        {
          ACPIThermalAssocaiteConstraint(a1, v14);
        }
        else
        {
          AMLIDereferenceHandleEx(v18);
          v6 = 0LL;
        }
      }
    }
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v13);
    return 0LL;
  }
  return result;
}

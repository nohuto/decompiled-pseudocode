/*
 * XREFs of ACPIInternalSetSpare @ 0x1400CA548
 * Callers:
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1400CA430 (ACPIFilterIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1400398B4 (ACPIInternalClearFlags.c)
 *     ACPIQuerySpareDsm @ 0x1400AA5C0 (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIInternalSetSpare(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  unsigned __int8 v4; // r14
  __int64 v5; // r9
  __int64 v6; // rcx
  char Data; // [rsp+80h] [rbp+38h] BYREF
  int v9; // [rsp+88h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+48h] BYREF
  ULONG RequiredSize; // [rsp+98h] [rbp+50h] BYREF

  v1 = 0;
  v2 = (__int64 *)(a1 + 8);
  RequiredSize = 0;
  Data = 0;
  Type = 0;
  v4 = 0;
  ACPIInternalClearFlags((void *)(a1 + 8), 0x4000LL);
  v5 = *v2;
  if ( (*v2 & 0x2000000000LL) != 0 )
  {
    v9 = 0;
    v4 = 1;
    if ( (int)ACPIQuerySpareDsm(a1, &v9) >= 0 && (v9 & 3) == 3 )
      *v2 |= 0x4000uLL;
    v5 = *v2;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 792);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 8) & 0x4000LL) != 0 )
      {
        v5 |= 0x4000uLL;
        *v2 = v5;
      }
      else
      {
        v4 = _bittest64((const signed __int64 *)(v6 + 8), 0x25u);
      }
    }
  }
  if ( (v5 & 0x4000) != 0 )
  {
    Data = -1;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 784),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  if ( v4
    && IoGetDevicePropertyData(
         *(PDEVICE_OBJECT *)(a1 + 784),
         &DEVPKEY_Spare_Device,
         0,
         0,
         1u,
         &Data,
         &RequiredSize,
         &Type) >= 0 )
  {
    Data = 0;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 784),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  return v1;
}

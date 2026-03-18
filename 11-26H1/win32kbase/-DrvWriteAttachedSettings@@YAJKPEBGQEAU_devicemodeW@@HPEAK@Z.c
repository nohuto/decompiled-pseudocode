/*
 * XREFs of ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x1401521D0
 * Callers:
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x140151D0C (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 */

NTSTATUS __fastcall DrvWriteAttachedSettings(
        __int64 a1,
        const unsigned __int16 *a2,
        struct _devicemodeW *const a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v5; // r14
  NTSTATUS v6; // ebx
  int v7; // ebp
  int v10; // edi
  int ValueData; // [rsp+50h] [rbp+8h] BYREF

  ValueData = a1;
  v5 = a5;
  v6 = 0;
  v7 = a4;
  v10 = 11;
  *a5 = 0;
  if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection(a1, (__int64)a2, (__int64)a3, a4) )
    return 0;
  if ( v7 )
  {
    ValueData = 0;
    return RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
  }
  else if ( a3 )
  {
    if ( (a3->dmFields & 0x20) != 0 )
    {
      ValueData = 1;
      v6 = RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
    }
    else
    {
      v10 = 9;
    }
    *v5 = v10;
    return v6;
  }
  else
  {
    return -1073741823;
  }
}

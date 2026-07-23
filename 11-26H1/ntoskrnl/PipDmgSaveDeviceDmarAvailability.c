/*
 * XREFs of PipDmgSaveDeviceDmarAvailability @ 0x14096F1E4
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarAvailability(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // eax
  char v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 )
  {
    return (unsigned int)PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           v4,
                           1,
                           0LL,
                           (__int64)DEVPKEY_Device_DmaRemappingAvailability,
                           17,
                           (__int64)&v7,
                           1,
                           0);
  }
  else
  {
    v5 = PnpSetObjectProperty(PiPnpRtlCtx, v4, 1, 0LL, (__int64)DEVPKEY_Device_DmaRemappingAvailability, 0, 0LL, 0, 0);
    if ( v5 != -1073741275 )
      return v5;
  }
  return v3;
}

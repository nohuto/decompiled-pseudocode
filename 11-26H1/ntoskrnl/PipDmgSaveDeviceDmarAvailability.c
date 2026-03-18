/*
 * XREFs of PipDmgSaveDeviceDmarAvailability @ 0x140914778
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x140915648 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarAvailability(__int64 a1, int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  char v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  if ( a3 )
  {
    return (unsigned int)PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           v5,
                           1,
                           a2,
                           0LL,
                           (__int64)DEVPKEY_Device_DmaRemappingAvailability,
                           17,
                           (__int64)&v8,
                           1,
                           0);
  }
  else
  {
    v6 = PnpSetObjectProperty(
           PiPnpRtlCtx,
           v5,
           1,
           0,
           0LL,
           (__int64)DEVPKEY_Device_DmaRemappingAvailability,
           0,
           0LL,
           0,
           0);
    if ( v6 != -1073741275 )
      return v6;
  }
  return v3;
}

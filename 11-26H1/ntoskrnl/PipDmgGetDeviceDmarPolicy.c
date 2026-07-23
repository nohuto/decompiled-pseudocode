/*
 * XREFs of PipDmgGetDeviceDmarPolicy @ 0x140B3A940
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     PipDmgIsDmaVerifierEnabled @ 0x1407AA5F0 (PipDmgIsDmaVerifierEnabled.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B3A9C8 (PipDmgGetDeviceDmarRegistryValue.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarPolicy(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rbp
  int DeviceDmarRegistryValue; // edi
  __int64 *v7; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v9 = 0;
  v8 = 0;
  DeviceDmarRegistryValue = PipDmgGetDeviceDmarRegistryValue(v2, &v9, &v8);
  if ( DeviceDmarRegistryValue >= 0 )
  {
    if ( v8 )
    {
      if ( (v9 & 1) == 0
        || (v7 = (__int64 *)a1[5]) != 0LL && PipDmgIsDmaVerifierEnabled(*v7)
        || (*(_BYTE *)(*(_QWORD *)(v2 + 720) + 16LL) & 0x24) != 0 )
      {
        *a2 = 2;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      *a2 = 1;
    }
  }
  return (unsigned int)DeviceDmarRegistryValue;
}

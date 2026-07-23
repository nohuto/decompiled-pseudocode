/*
 * XREFs of _CmSetDeviceContainerMappedProperty @ 0x140A3DEE4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140B1FE00 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetDeviceContainerMappedProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r8d
  unsigned int i; // ecx
  __int64 v7; // r10
  __int64 v8; // rdx

  v5 = -1073741802;
  if ( !a4 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v7 = (__int64)*(&off_140004120 + 2 * i);
      if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v7 + 16) )
      {
        v8 = *(_QWORD *)a5 - *(_QWORD *)v7;
        if ( *(_QWORD *)a5 == *(_QWORD *)v7 )
          v8 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v7 + 8);
        if ( !v8 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v5;
}

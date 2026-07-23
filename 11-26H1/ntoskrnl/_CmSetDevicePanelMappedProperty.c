/*
 * XREFs of _CmSetDevicePanelMappedProperty @ 0x1408A1410
 * Callers:
 *     _CmDeleteDevicePanelWorker @ 0x1408A05DC (_CmDeleteDevicePanelWorker.c)
 *     _PnpDispatchDevicePanel @ 0x1408A2B60 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetDevicePanelMappedProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r8d
  unsigned int i; // ecx
  __int64 *v7; // r10
  __int64 v8; // rdx

  v5 = -1073741802;
  if ( !a4 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v7 = (&off_14000F7C8)[2 * i];
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)v7 + 4) )
      {
        v8 = *(_QWORD *)a5 - *v7;
        if ( *(_QWORD *)a5 == *v7 )
          v8 = *(_QWORD *)(a5 + 8) - v7[1];
        if ( !v8 )
          return (unsigned int)-1073741790;
      }
    }
  }
  return v5;
}

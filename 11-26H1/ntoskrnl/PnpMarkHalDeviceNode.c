/*
 * XREFs of PnpMarkHalDeviceNode @ 0x140CC9A24
 * Callers:
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PnpMarkHalDeviceNode(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rcx
  bool v4; // zf
  __int64 v5; // rdx

  result = (__int64)IopRootDeviceNode;
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
  {
    if ( a1 )
    {
      result = *(_QWORD *)(i + 32);
      if ( !result )
        continue;
      v5 = *(_QWORD *)(result + 24);
      if ( !v5 )
        continue;
      v4 = *(_QWORD *)(v5 + 8) == a1;
    }
    else
    {
      result = *(unsigned int *)(i + 300);
      if ( (_DWORD)result != 778 && (_DWORD)result != 777 )
        continue;
      v4 = (*(_DWORD *)(i + 396) & 0x1000) == 0;
    }
    if ( v4 )
    {
      IopInitHalDeviceNode = i;
      return PipSetDevNodeFlags(i, 4u);
    }
  }
  return result;
}

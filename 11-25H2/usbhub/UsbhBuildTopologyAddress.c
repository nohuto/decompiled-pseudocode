/*
 * XREFs of UsbhBuildTopologyAddress @ 0x1400549A8
 * Callers:
 *     UsbhFdoReturnTopologyAddress @ 0x1400414A8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhGetDeviceNodeInfo @ 0x140054D58 (UsbhGetDeviceNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhBuildTopologyAddress(__int64 a1, _OWORD *a2, __int16 a3)
{
  _DWORD *v5; // rax
  unsigned int i; // eax

  v5 = FdoExt(a1);
  *a2 = *(_OWORD *)(v5 + 1298);
  a2[1] = *(_OWORD *)(v5 + 1302);
  if ( *((_WORD *)a2 + 8) )
  {
    for ( i = 0; i < 5; ++i )
    {
      if ( !*((_WORD *)a2 + i + 9) )
      {
        *((_WORD *)a2 + i + 9) = a3;
        return 0LL;
      }
    }
  }
  else
  {
    *((_WORD *)a2 + 8) = a3;
  }
  return 0LL;
}

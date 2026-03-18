/*
 * XREFs of ?fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z @ 0x1401D3E34
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403287C8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fBlockExtEscape(struct XDCOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)a1
    || (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x400) == 0
    || !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
  {
    return *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000;
  }
  return v1;
}

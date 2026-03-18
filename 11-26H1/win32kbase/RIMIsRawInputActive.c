/*
 * XREFs of RIMIsRawInputActive @ 0x1400961C4
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     RIMHidTLCActive @ 0x140096204 (RIMHidTLCActive.c)
 */

__int64 __fastcall RIMIsRawInputActive(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 48) == 2 && (*(_DWORD *)(a1 + 168) & 0x20000) != 0 )
    return (unsigned int)RIMHidTLCActive(*(_QWORD *)(a1 + 448)) != 0;
  return v1;
}

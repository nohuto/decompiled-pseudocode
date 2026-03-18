/*
 * XREFs of RIMIsRawInputActive @ 0x1401172AC
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1401172EC (RIMHidTLCActive.c)
 */

__int64 __fastcall RIMIsRawInputActive(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 48) == 2 && (*(_DWORD *)(a1 + 168) & 0x20000) != 0 )
    return (unsigned int)RIMHidTLCActive(*(_QWORD *)(a1 + 448)) != 0;
  return v1;
}

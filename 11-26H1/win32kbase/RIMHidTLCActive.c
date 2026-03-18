/*
 * XREFs of RIMHidTLCActive @ 0x140096204
 * Callers:
 *     RIMIsRawInputActive @ 0x1400961C4 (RIMIsRawInputActive.c)
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x140096244 (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebx

  v1 = 0;
  if ( a1[7] )
    return 1;
  if ( a1[6] )
    return 1;
  v3 = a1[8];
  if ( v3 > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}

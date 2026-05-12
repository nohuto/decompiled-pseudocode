/*
 * XREFs of NvmeIceInterfaceHasDumpSupport @ 0x140070ECC
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeIceInterfaceHasDumpSupport(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1 && a1[6] && a1[9] && a1[10] && a1[11] && a1[12] )
  {
    if ( a1[13] )
      return a1[14] != 0LL;
  }
  return result;
}

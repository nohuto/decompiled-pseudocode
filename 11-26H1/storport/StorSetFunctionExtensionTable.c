/*
 * XREFs of StorSetFunctionExtensionTable @ 0x14007C8A4
 * Callers:
 *     RaCreateDriver @ 0x140187DF4 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1401730F0 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1401730F0 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_140173100 = StorExtFreePool;
  *((_QWORD *)&xmmword_140173100 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_140173110 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_140173110 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_140173120 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_140173120 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_140173130 = (__int64)StorExtGetOriginalMdl;
  return result;
}

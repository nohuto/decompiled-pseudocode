/*
 * XREFs of ConPrintf @ 0x1400093EC
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     RunContext @ 0x140009490 (RunContext.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     ParseInteger @ 0x140039534 (ParseInteger.c)
 *     ProcessEvalObj @ 0x140039FF0 (ProcessEvalObj.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     CatError @ 0x14006E870 (CatError.c)
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 *     DebugNotify @ 0x14006EC80 (DebugNotify.c)
 *     DebugQuit @ 0x14006EF00 (DebugQuit.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 *     PrintBuffData @ 0x14006F38C (PrintBuffData.c)
 *     RunMethodCallBack @ 0x14006F410 (RunMethodCallBack.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x140070AE0 (BreakPoint.c)
 *     DbgParseOneArg @ 0x140071754 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

ULONG ConPrintf(char *Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  if ( (unsigned int)_vsnprintf(gPrintBuff, 0x3FFuLL, Format, va) > 0x3FE )
    byte_14008F38F = 0;
  if ( qword_14008ED18 )
    return qword_14008ED18(gPrintBuff, qword_14008ED20);
  else
    return DbgPrintEx(0x19u, 3u, gPrintBuff);
}

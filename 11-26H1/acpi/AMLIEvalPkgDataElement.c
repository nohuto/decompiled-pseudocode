/*
 * XREFs of AMLIEvalPkgDataElement @ 0x140015D90
 * Callers:
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1400B0460 (ACPIFanPrepareImpactZoneSupport.c)
 *     ACPIThermalBuildConstraints @ 0x1400BAA20 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1400C0430 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     EvalPackageElement @ 0x140015D4C (EvalPackageElement.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  const void *ObjectTypeName; // rax

  v4 = a2;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(0x31u, KeGetCurrentThread(), (const void *)a1, (const void *)v4, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = EvalPackageElement(*(unsigned int **)(a1 + 32), v4, a3);
    if ( v6 == 32772 )
      return 259;
  }
  else
  {
    v6 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(0x32u, ObjectTypeName, 0LL, 0LL, 0LL);
  }
  return v6;
}

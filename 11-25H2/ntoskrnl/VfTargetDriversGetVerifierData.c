/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140B97E9C
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x140609F08 (CarGetDriverInfoFromViolationStack.c)
 *     DifGetPluginPerDriverData @ 0x14060BA20 (DifGetPluginPerDriverData.c)
 *     DifDllInitializeWrapper @ 0x140698F6C (DifDllInitializeWrapper.c)
 *     DifDllUnloadWrapper @ 0x1406990E0 (DifDllUnloadWrapper.c)
 *     VfUtilCheckRuleEnforcement @ 0x140B73210 (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverFullName @ 0x140B732B0 (VfUtilGetDriverFullName.c)
 *     VfUtilGetDriverName @ 0x140B73300 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140B733E0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140B73400 (VfUtilIsBootDriver.c)
 *     VfTargetDriversIsEnabled @ 0x140B97F50 (VfTargetDriversIsEnabled.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403EA5A4 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140B97EEC (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  bool v6; // zf
  __int64 Node; // rax

  if ( (unsigned int)VfDriverIsKernelImageAddress(a1, a2, a3, a4) )
  {
    v6 = KernelVerifier == 0;
    goto LABEL_6;
  }
  if ( !KernelVerifier )
  {
    v6 = dword_140F04180 == 0;
LABEL_6:
    if ( v6 )
      return 0LL;
    goto LABEL_7;
  }
  if ( dword_140F04180 < 2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v4);
  if ( !Node )
    return 0LL;
  return *(_QWORD *)(Node + 64);
}

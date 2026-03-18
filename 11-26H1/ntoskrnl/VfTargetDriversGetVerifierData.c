/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140C46B58
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x140648F98 (CarGetDriverInfoFromViolationStack.c)
 *     DifSetCallerContext @ 0x14064A9C0 (DifSetCallerContext.c)
 *     DifGetPluginPerDriverData @ 0x14064ABD0 (DifGetPluginPerDriverData.c)
 *     DifDllInitializeWrapper @ 0x1406C0234 (DifDllInitializeWrapper.c)
 *     DifDllUnloadWrapper @ 0x1406C03A8 (DifDllUnloadWrapper.c)
 *     VfUtilCheckRuleEnforcement @ 0x140C216FC (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverFullName @ 0x140C21760 (VfUtilGetDriverFullName.c)
 *     VfUtilGetDriverName @ 0x140C21800 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140C218E0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140C21900 (VfUtilIsBootDriver.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 *     VfTargetDriversIsEnabled @ 0x140C46C9C (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403B7A04 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140C46BA8 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 Node; // rax
  bool v4; // zf

  if ( (unsigned int)VfDriverIsKernelImageAddress(a1) )
  {
    v4 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140F08DA0 < 2 )
        return 0LL;
      goto LABEL_4;
    }
    v4 = dword_140F08DA0 == 0;
  }
  if ( v4 )
    return 0LL;
LABEL_4:
  Node = VfTargetDriversGetNode(v1);
  if ( Node )
    return *(_QWORD *)(Node + 64);
  return 0LL;
}

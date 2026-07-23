/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140C4CB68
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x14064CB78 (CarGetDriverInfoFromViolationStack.c)
 *     DifSetCallerContext @ 0x14064E5A0 (DifSetCallerContext.c)
 *     DifGetPluginPerDriverData @ 0x14064E7B0 (DifGetPluginPerDriverData.c)
 *     DifDllInitializeWrapper @ 0x1406C3E14 (DifDllInitializeWrapper.c)
 *     DifDllUnloadWrapper @ 0x1406C3F88 (DifDllUnloadWrapper.c)
 *     VfUtilCheckRuleEnforcement @ 0x140C2770C (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverFullName @ 0x140C27770 (VfUtilGetDriverFullName.c)
 *     VfUtilGetDriverName @ 0x140C27810 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140C278F0 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140C27910 (VfUtilIsBootDriver.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 *     VfTargetDriversIsEnabled @ 0x140C4CCAC (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
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
      if ( dword_140F09120 < 2 )
        return 0LL;
      goto LABEL_4;
    }
    v4 = dword_140F09120 == 0;
  }
  if ( v4 )
    return 0LL;
LABEL_4:
  Node = VfTargetDriversGetNode(v1);
  if ( Node )
    return *(_QWORD *)(Node + 64);
  return 0LL;
}

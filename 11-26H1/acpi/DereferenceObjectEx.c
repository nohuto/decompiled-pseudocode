/*
 * XREFs of DereferenceObjectEx @ 0x140004EF0
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     DerefOf @ 0x140011F60 (DerefOf.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIGetFieldUnitRegionObj @ 0x14001D2F0 (AMLIGetFieldUnitRegionObj.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 *     AMLIFindNameSpaceObject @ 0x14004B3A4 (AMLIFindNameSpaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     Simulator_NotifyNode @ 0x14006CAC4 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x14006CCB0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNamespaceOverride @ 0x14006DA88 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006DAF8 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006DFE8 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x14006E4EC (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x14006EC80 (DebugNotify.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 *     ParseNestedContext @ 0x1400707F0 (ParseNestedContext.c)
 *     Alias @ 0x140070A30 (Alias.c)
 *     Load @ 0x140070B90 (Load.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 */

__int64 __fastcall DereferenceObjectEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      *(_WORD *)(a1 + 64) |= 4u;
      result = *(unsigned __int16 *)(a1 + 64);
      if ( (result & 0x40) == 0 )
        return FreeNameSpaceObjects();
    }
  }
  return result;
}

/*
 * XREFs of LdrpProcessWork @ 0x180087350
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpWorkCallback @ 0x180086FF0 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpMapDllFullPath @ 0x180084A80 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180086610 (LdrpMapDllRetry.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CE394 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800DBE78 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpMapDllPatchImage @ 0x180111AD0 (LdrpMapDllPatchImage.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 */

__int64 __fastcall LdrpProcessWork(__int64 ArgList, char a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  bool v13; // bl

  result = *(_QWORD *)(ArgList + 40);
  if ( *(int *)result < 0 )
    goto LABEL_22;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(ArgList + 56) + 152LL) + 56LL) )
  {
    result = LdrpSnapModule();
    v7 = result;
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)(ArgList + 56) + 268LL) == 9 )
    {
      v5 = LdrpMapDllPatchImage();
    }
    else
    {
      v6 = *(_DWORD *)(ArgList + 32);
      if ( (v6 & 0x100000) != 0 )
      {
        v5 = LdrpMapDllRetry(ArgList);
      }
      else if ( (v6 & 0x200) != 0 )
      {
        v5 = LdrpMapDllFullPath(ArgList);
      }
      else
      {
        v5 = LdrpMapDllSearchPath(ArgList);
      }
    }
    v7 = v5;
    result = v5 + 0x80000000;
    if ( (int)result < 0 || v7 == -1073741267 )
      goto LABEL_22;
    v8 = *(_QWORD *)(ArgList + 48);
    v9 = v8 + 72;
    if ( !v8 )
      v9 = 0LL;
    result = LdrpLogInternal(
               (int)"minkernel\\ldr\\ldrmap.c",
               2212,
               (__int64)"LdrpProcessWork",
               0,
               "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
               ArgList,
               v9,
               v7);
    if ( v7 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, ArgList);
      LdrpLogDeprecatedDllEtwEvent(ArgList);
      v10 = *(_QWORD *)(ArgList + 48);
      v11 = v10 + 72;
      if ( !v10 )
        v11 = 0;
      LdrpLogLoadFailureEtwEvent(ArgList, v11, -1073741515, (unsigned int)&LoadFailure, 0);
      result = *(_QWORD *)(ArgList + 56);
      if ( (*(_DWORD *)(result + 104) & 0x20) != 0 )
        result = LdrpReportError(ArgList, 0LL, 3221225781LL);
    }
  }
  if ( v7 < 0 )
  {
    result = *(_QWORD *)(ArgList + 40);
    *(_DWORD *)result = v7;
  }
LABEL_22:
  if ( !a2 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v12 = --LdrpWorkInProgress;
    v13 = (__int64 *)LdrpWorkQueue == &LdrpWorkQueue && v12 == 1;
    result = RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( v13 )
      return ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return result;
}

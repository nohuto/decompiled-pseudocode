/*
 * XREFs of LdrpProcessWork @ 0x18007E6C0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpWorkCallback @ 0x18007E360 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpMapDllFullPath @ 0x18007BE20 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x18007D9B0 (LdrpMapDllRetry.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CBB04 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800D8DE8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpMapDllPatchImage @ 0x180111640 (LdrpMapDllPatchImage.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 */

int __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  int *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // bl
  int v15; // [rsp+20h] [rbp-38h]

  v4 = *(int **)(a1 + 40);
  if ( *v4 < 0 )
    goto LABEL_22;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    LODWORD(v4) = LdrpSnapModule();
    v7 = (int)v4;
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 268LL) == 9 )
    {
      v5 = LdrpMapDllPatchImage();
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 32);
      if ( (v6 & 0x100000) != 0 )
      {
        v5 = LdrpMapDllRetry(a1);
      }
      else if ( (v6 & 0x200) != 0 )
      {
        v5 = LdrpMapDllFullPath(a1);
      }
      else
      {
        v5 = LdrpMapDllSearchPath();
      }
    }
    v7 = v5;
    LODWORD(v4) = v5 + 0x80000000;
    if ( (int)v4 < 0 || v7 == -1073741267 )
      goto LABEL_22;
    v8 = *(_QWORD *)(a1 + 48);
    v9 = v8 + 72;
    if ( !v8 )
      v9 = 0LL;
    LODWORD(v4) = LdrpLogInternal(
                    "minkernel\\ldr\\ldrmap.c",
                    2257,
                    (__int64)"LdrpProcessWork",
                    0,
                    "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
                    a1,
                    v9,
                    v7);
    if ( v7 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v10 = *(_QWORD *)(a1 + 48);
      v11 = v10 + 72;
      if ( !v10 )
        v11 = 0LL;
      LOBYTE(v15) = 0;
      LdrpLogLoadFailureEtwEvent(a1, v11, 3221225781LL, &LoadFailure, v15);
      v4 = *(int **)(a1 + 56);
      if ( (v4[26] & 0x20) != 0 )
        LODWORD(v4) = LdrpReportError(a1, 0LL, 3221225781LL);
    }
  }
  if ( v7 < 0 )
  {
    v4 = *(int **)(a1 + 40);
    *v4 = v7;
  }
LABEL_22:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v12 = --LdrpWorkInProgress;
    v13 = (__int64 *)LdrpWorkQueue == &LdrpWorkQueue && v12 == 1;
    LODWORD(v4) = RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v13 )
      LODWORD(v4) = ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
  return (int)v4;
}

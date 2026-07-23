/*
 * XREFs of VfPtGenerateTraceInformation @ 0x140C2FC6C
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlNumberGenericTableElementsAvl @ 0x140487580 (RtlNumberGenericTableElementsAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14064589C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x14064590C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140645968 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406459D4 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfPtGenerateTraceInformation(char a1)
{
  unsigned int v1; // edi
  unsigned int v2; // r15d
  int v3; // ebx
  ULONG v4; // esi
  _QWORD *v5; // rax
  unsigned int v6; // edx
  char *Pool2; // r14
  unsigned int v8; // ebx
  _DWORD *v9; // rdx
  char *v10; // rsi
  _QWORD *v11; // r8
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rcx
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  char *v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  ULONG v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+74h] [rbp-Ch]
  __int64 v22; // [rsp+78h] [rbp-8h]
  ULONG v23; // [rsp+B8h] [rbp+38h]

  v1 = 0;
  v2 = 0;
  v21 = 0;
  v16 = 0LL;
  if ( (VfRuleClasses & 8) == 0 || (VfOptionFlags & 0x1000) == 0 )
    return (unsigned int)-1073738628;
  v3 = 0;
  if ( a1 )
    v3 = 2;
  v23 = RtlNumberGenericTableElementsAvl(&ViPoolInfoAvl);
  v4 = v23;
  ViPtInitializeLockContext((__int64)&v16);
  ViPtRaiseIrqlSafe((__int64)&v16);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v16);
  v5 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 1u);
  if ( !v5 )
    goto LABEL_22;
  do
  {
    v6 = v1 + 1;
    if ( v5[3] <= v5[4] )
      v6 = v1;
    v1 = v6;
    v5 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 0);
  }
  while ( v5 );
  if ( !v1 )
  {
LABEL_22:
    v8 = -1073738637;
    goto LABEL_23;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, 440 * v1, 0x6E496956u);
  if ( !Pool2 )
  {
    v8 = -1073741801;
LABEL_23:
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v16);
    ViPtCleanupLockContext((__int64)&v16);
    return v8;
  }
  v9 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 1u);
  if ( v9 )
  {
    v10 = Pool2 + 8;
    do
    {
      if ( *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) && v2 < v1 )
      {
        *((_DWORD *)v10 - 2) = *v9;
        v11 = v10 + 32;
        *((_DWORD *)v10 - 1) = v9[1];
        *(_DWORD *)v10 = v9[2];
        *((_DWORD *)v10 + 1) = v9[3];
        *((_DWORD *)v10 + 2) = v9[4];
        *((_QWORD *)v10 + 2) = *((_QWORD *)v9 + 3);
        v12 = *((_QWORD *)v9 + 4);
        v13 = (char *)((char *)v9 - (v10 - 8));
        *((_QWORD *)v10 + 3) = v12;
        v14 = 50LL;
        do
        {
          *v11 = *(_QWORD *)&v13[(_QWORD)v11];
          ++v11;
          --v14;
        }
        while ( v14 );
        ++v2;
        v10 += 440;
      }
      v9 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 0);
    }
    while ( v9 );
    v4 = v23;
  }
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v16);
  ViPtCleanupLockContext((__int64)&v16);
  v19 = ViPoolStackInfoAllocCount;
  v17 = Pool2;
  v18 = 440 * v1;
  v20 = v4;
  v22 = 0LL;
  v8 = DbgkWerCaptureLiveKernelDump(
         L"DriverVerifier",
         485LL,
         (__int64)Pool2,
         440 * v1,
         (unsigned int)ViPoolStackInfoAllocCount,
         v4,
         (__int64)&v17,
         (__int64)ViPtCaptureTraceInformationCallBack,
         v3);
  ExFreePoolWithTag(Pool2, 0x6E496956u);
  return v8;
}

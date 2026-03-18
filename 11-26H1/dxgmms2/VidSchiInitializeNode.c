/*
 * XREFs of VidSchiInitializeNode @ 0x1400C3F84
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x14004CF4C (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 Pool2; // rax
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  unsigned int m; // esi
  unsigned int n; // esi
  __int64 ii; // rax
  ADAPTER_RENDER *v15; // rcx
  int v16; // eax
  _DXGKARG_SETUPPRIORITYBANDS v17; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 248);
  *(_DWORD *)(a1 + 192) = v3;
  Pool2 = ExAllocatePool2(64LL, 112 * v3, 828467542LL);
  v5 = 0;
  *(_QWORD *)(a1 + 184) = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2973;
    return 3221225495LL;
  }
  v7 = *(unsigned int *)(v1 + 248);
  *(_DWORD *)(a1 + 208) = v7;
  v8 = ExAllocatePool2(64LL, 96 * v7, 828467542LL);
  *(_QWORD *)(a1 + 200) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2985;
    return 3221225495LL;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 11520));
  for ( i = 0; i < 0x10; ++i )
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 11520), (PSLIST_ENTRY)(a1 + 112 * ((int)i + 103LL)));
  InitializeSListHead((PSLIST_HEADER)(a1 + 3088));
  for ( j = 0; j < 0x40; ++j )
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 3088), (PSLIST_ENTRY)(a1 + ((__int64)(int)j << 7) + 3104));
  if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
    return 0LL;
  ExInitializeResourceLite((PERESOURCE)(a1 + 1784));
  InitializeSListHead((PSLIST_HEADER)(a1 + 11296));
  for ( k = 0;
        k < 2;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 11296), (PSLIST_ENTRY)(a1 + 48LL * (int)k++ + 11312)) )
  {
    ;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 11408));
  for ( m = 0;
        m < 2;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 11408), (PSLIST_ENTRY)(a1 + 48 * ((int)m++ + 238LL))) )
  {
    ;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 13328));
  for ( n = 0;
        n < 0x40;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 13328), (PSLIST_ENTRY)(a1 + 48 * ((int)n++ + 278LL))) )
  {
    ;
  }
  memset(&v17, 0, sizeof(v17));
  for ( ii = 0LL; ii < 2; v17.processGracePeriodForBand[ii++] = 20000LL )
    v17.processQuantumForBand[ii] = 50000LL;
  v17.processQuantumForBand[3] = 20000LL;
  v17.targetNormalBandPercentage = *(_DWORD *)(v1 + 232);
  v17.processGracePeriodForBand[3] = 50000LL;
  v15 = *(ADAPTER_RENDER **)(v1 + 8);
  v17.gracePeriodForBand[2] = 10000LL;
  v17.processQuantumForBand[2] = 10000LL;
  v17.processGracePeriodForBand[2] = 30000LL;
  v16 = ADAPTER_RENDER::DdiSetupPriorityBands(v15, &v17);
  if ( v16 >= 0 )
    return 0LL;
  if ( v16 != -1073741822 )
    return (unsigned int)v16;
  return v5;
}

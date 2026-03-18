/*
 * XREFs of VidSchiSwitchContext @ 0x14001FD00
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1400202A8 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140026504 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSwitchContext(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 216);
  if ( v3 != a1 )
  {
    VidSchiProfilePerformanceTick(3, *(_QWORD *)(v1 + 24), v1, 0, a1, 0LL, 0LL, *(_QWORD *)(v1 + 216));
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 72)) == 1 )
    {
      if ( !*(_BYTE *)(v2 + 916) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 3840LL, v2, 0LL, 0LL);
        WdLogGlobalForLineNumber = 916;
        goto LABEL_29;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 104) + 32LL));
    }
    *(_QWORD *)(v1 + 216) = v2;
    if ( !v3 )
      return;
    v2 = -1LL;
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 72), 0xFFFFFFFF) != 1 )
      return;
    v5 = *(_QWORD *)(v3 + 96);
    if ( *(_QWORD *)(v5 + 224) == v3 )
      *(_QWORD *)(v5 + 224) = 0LL;
    v6 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v6 + 8) != v3 + 8 )
      goto LABEL_17;
    v7 = *(_QWORD **)(v3 + 16);
    if ( *v7 != v3 + 8 )
      goto LABEL_17;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(v3 + 24);
    if ( *(_QWORD *)(v8 + 8) != v3 + 24 )
      goto LABEL_17;
    v9 = *(_QWORD **)(v3 + 32);
    if ( *v9 != v3 + 24 )
      goto LABEL_17;
    *v9 = v8;
    v1 = v4 + 2024;
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v10 = VidSchiInterlockedRemoveHeadListIfExist(v1, v3 + 720, v3 + 736);
      if ( !v10 )
        break;
      ExFreePoolWithTag((PVOID)(v10 - 8), 0);
    }
    if ( (*(_DWORD *)(v3 + 112) & 0x100) == 0 )
    {
LABEL_19:
      if ( bTracingEnabled )
        VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v3);
      v11 = *(void **)(v3 + 1000);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      v12 = *(_QWORD *)(v3 + 104);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 32), v2) != 1 )
        goto LABEL_24;
      v13 = *(_QWORD *)(v12 + 112);
      if ( *(_QWORD *)(v13 + 8) == v12 + 112 )
      {
        v14 = *(_QWORD **)(v12 + 120);
        if ( *v14 == v12 + 112 )
        {
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          ExFreePoolWithTag((PVOID)v12, 0);
LABEL_24:
          ExFreePoolWithTag((PVOID)v3, 0);
          return;
        }
      }
LABEL_17:
      __fastfail(3u);
    }
LABEL_29:
    while ( 1 )
    {
      v15 = VidSchiInterlockedRemoveHeadListIfExist(v1, v3 + 744, v3 + 760);
      if ( !v15 )
        break;
      ExFreePoolWithTag((PVOID)(v15 - 8), 0);
    }
    goto LABEL_19;
  }
}

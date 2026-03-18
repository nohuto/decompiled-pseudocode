/*
 * XREFs of ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x140025FB4
 * Callers:
 *     VidSchTerminateHwQueue @ 0x140005B00 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x140026568 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BE08 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z @ 0x14004CF04 (-DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiDecrementHwQueueReference(char *P)
{
  VIDMM_SCH_LOG *v2; // rbp
  VIDMM_SCH_LOG *v3; // rdi
  __int64 v4; // rsi
  char **v5; // rdx
  PVOID *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  ADAPTER_RENDER *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[10]; // [rsp+50h] [rbp-88h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 16LL) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 30, 0xFFFFFFFF) != 1 )
    goto LABEL_16;
  v5 = (char **)*((_QWORD *)P + 1);
  if ( v5[1] != P + 8 || (v6 = (PVOID *)*((_QWORD *)P + 2), *v6 != P + 8) )
LABEL_26:
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  while ( 1 )
  {
    v7 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 2024, P + 216, P + 232);
    if ( !v7 )
      break;
    ExFreePoolWithTag((PVOID)(v7 - 8), 0);
  }
  v8 = (void *)*((_QWORD *)P + 33);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)P + 33) = 0LL;
  }
  if ( *((_QWORD *)P + 35) )
  {
    if ( !*(_BYTE *)(v4 + 7082) )
    {
      memset(v16, 0, sizeof(v16));
      v14 = *(ADAPTER_RENDER **)(v4 + 8);
      v16[0] = *((_QWORD *)P + 14);
      ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(v14, (struct _DXGKARG_SETNATIVEFENCELOGBUFFER *)v16);
    }
    v2 = (VIDMM_SCH_LOG *)*((_QWORD *)P + 35);
    v3 = (VIDMM_SCH_LOG *)*((_QWORD *)P + 38);
  }
  VidSchiDecrementHwContextReference(*((PVOID *)P + 5), 1);
  if ( *((char **)P + 26) != P + 160 || *((_DWORD *)P + 37) || *((_QWORD *)P + 3) || *((_QWORD *)P + 4) )
  {
    v13 = *((unsigned int *)P + 37);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 12288LL, P, v13, 0LL);
    WdLogGlobalForLineNumber = 916;
    goto LABEL_26;
  }
  if ( !*((_QWORD *)P + 6) && bTracingEnabled )
  {
    v11 = *((_QWORD *)P + 5);
    v12 = *(_QWORD *)(v11 + 24);
    if ( !v12 || (*(_DWORD *)(v11 + 56) & 0x40) != 0 )
      v12 = *((_QWORD *)P + 5);
    if ( (byte_14008A201 & 8) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v11, (unsigned int)&EventDestroyHwQueue, v9, v12, 0, (char)P);
  }
  ExFreePoolWithTag(P, 0);
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v2, v10);
  if ( v3 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v3, v10);
}

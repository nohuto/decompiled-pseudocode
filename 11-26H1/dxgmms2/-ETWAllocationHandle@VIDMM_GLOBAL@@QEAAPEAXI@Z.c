/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x140106A94
 * Callers:
 *     VidMmETWAllocationHandle @ 0x14003A380 (VidMmETWAllocationHandle.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // rbx
  struct DXGPROCESS *Current; // r14
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // rcx

  v3 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v5 = (char *)Current + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v8 = *((_DWORD *)Current + 68);
      if ( v8 != -1 && (byte_14008A201 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventBlockThread, v7, v8);
    }
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)Current + 66);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)Current + 74) )
    goto LABEL_10;
  v10 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8) & 0x60)
    || (v10 & 0x2000) != 0
    || (v10 & 0x1F) == 0 )
  {
    goto LABEL_10;
  }
  v12 = *((_QWORD *)Current + 35);
  if ( (*(_BYTE *)(v12 + 16LL * v9 + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
LABEL_10:
    v11 = 0LL;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v12 + 16LL * v9);
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
    return *(_QWORD *)(v11 + 24);
  return v3;
}

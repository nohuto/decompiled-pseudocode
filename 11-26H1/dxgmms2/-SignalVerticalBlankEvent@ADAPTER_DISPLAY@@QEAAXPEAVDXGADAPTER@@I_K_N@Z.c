/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14001DA10
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14001DC14 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // r8d
  struct _KEVENT *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    v8 = *((_QWORD *)this + 16);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v9 = 4024LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + v8 + 936), &LockHandle);
    if ( bTracingEnabled && (byte_14008A201 & 1) != 0 )
    {
      v16 = (*((_DWORD *)a2 + 754) & 0x10) != 0 ? a3 : 0;
      if ( (unsigned int)v16 >= 0x10 )
        v17 = 0;
      else
        v17 = *((_DWORD *)a2 + v16 + 798);
      McTemplateK0qqqqq_EtwWriteTransfer(
        v17,
        (unsigned int)&EventDWMVsyncSignal,
        v10,
        *(_DWORD *)(v9 + v8 + 920),
        a4,
        *(_BYTE *)(v9 + v8 + 928),
        v17,
        4);
    }
    v11 = *(struct _KEVENT **)(v9 + v8 + 904);
    *(_BYTE *)(v9 + v8 + 944) = a5;
    KePulseEvent(v11, 0, 0);
    if ( *(_QWORD *)(v9 + v8 + 912) )
    {
      *(_DWORD *)(v9 + v8 + 924) = a4;
      if ( *(_DWORD *)(v9 + v8 + 920) <= a4 )
      {
        if ( *(_BYTE *)(v9 + v8 + 928) )
        {
          *(_BYTE *)(v9 + v8 + 928) = 0;
          if ( *((_QWORD *)a2 + 396) )
          {
            v14 = (*((_DWORD *)a2 + 754) & 0x10) != 0 ? a3 : 0;
            if ( (unsigned int)v14 < 0x10 )
            {
              v15 = _InterlockedDecrement((volatile signed __int32 *)a2 + v14 + 798);
              if ( v15 < 0 )
              {
                WdLogSingleEntry5(0LL, 275LL, 37LL, a2, *((unsigned int *)a2 + v14 + 798), 0LL);
                WdLogGlobalForLineNumber = 2783;
              }
              if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              {
                LODWORD(v19) = v15;
                LODWORD(v18) = v14;
                McTemplateK0pqq_EtwWriteTransfer(v12, &VSyncWaiterChange, v13, a2, v18, v19);
              }
            }
          }
        }
        KeSetEvent(*(PRKEVENT *)(v9 + v8 + 912), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}

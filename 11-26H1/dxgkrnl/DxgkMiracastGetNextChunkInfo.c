/*
 * XREFs of DxgkMiracastGetNextChunkInfo @ 0x140089444
 * Callers:
 *     DxgkNetDispGetNextChunkInfo @ 0x1401B7180 (DxgkNetDispGetNextChunkInfo.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x140087A48 (-ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRA.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x140087D1C (DpiMiracastGetDeviceContextFromLuid.c)
 */

__int64 __fastcall DxgkMiracastGetNextChunkInfo(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a5,
        unsigned int *a6)
{
  __int64 v6; // r12
  __int64 *DeviceContextFromLuid; // rax
  __int64 *v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  union _LARGE_INTEGER *Timeout; // rdx
  int v16; // ecx
  __int64 v17; // rdx
  bool v18; // zf
  struct _FDO_CONTEXT *v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a1, 1);
  v11 = DeviceContextFromLuid;
  if ( DeviceContextFromLuid )
  {
    v13 = DeviceContextFromLuid[54];
    if ( v13 )
    {
      if ( DeviceContextFromLuid[62] )
      {
        v12 = -1073741811;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 8752;
      }
      else
      {
        v14 = *((_DWORD *)DeviceContextFromLuid + 102);
        if ( v14 == 2 || v14 == 1 )
        {
          v12 = ProcessMiracastAPIChunk(
                  (struct _MIRACAST_DEVICE_CONTEXT *)v11,
                  *(struct _FDO_CONTEXT **)(v13 + 64),
                  a4,
                  a5,
                  a6);
          if ( v12 == -1073741762 )
          {
            memset(&Event, 0, sizeof(Event));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v11[62] = (__int64)&Event;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            Timeout = 0LL;
            v21 = 0LL;
            if ( (_DWORD)v6 != -1 )
            {
              Timeout = (union _LARGE_INTEGER *)&v21;
              v21 = -10000 * v6;
            }
            v16 = *(_DWORD *)(a3 + 280);
            *(_QWORD *)a3 = &Event;
            v12 = KeWaitForMultipleObjects(
                    v16 + 1,
                    (PVOID *)a3,
                    WaitAny,
                    Executive,
                    0,
                    0,
                    Timeout,
                    (PKWAIT_BLOCK)(a3 + 40));
            KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
            v17 = v11[54];
            if ( v17 )
            {
              v18 = *((_DWORD *)v11 + 102) == 2;
              v19 = *(struct _FDO_CONTEXT **)(v17 + 64);
              v11[62] = 0LL;
              if ( v18 )
              {
                if ( v12 )
                {
                  if ( v12 >= 1 && v12 < *(_DWORD *)(a3 + 280) + 1 )
                    --v12;
                  *a4 = 0;
                }
                else
                {
                  v12 = ProcessMiracastAPIChunk((struct _MIRACAST_DEVICE_CONTEXT *)v11, v19, a4, a5, a6);
                }
              }
              else
              {
                v12 = -1073741653;
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 8860;
              }
            }
            else
            {
              v12 = -1073741811;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 8838;
            }
          }
        }
        else
        {
          v12 = -1073741653;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 8765;
        }
      }
    }
    else
    {
      v12 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 8739;
    }
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8730;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 )
    DpiMiracastReleaseMiracastDeviceContext((int *)v11, (unsigned int)v11);
  return (unsigned int)v12;
}

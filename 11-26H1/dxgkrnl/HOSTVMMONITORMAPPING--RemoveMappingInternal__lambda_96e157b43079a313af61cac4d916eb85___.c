/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x14005BB88
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BB04 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140061018 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140081D18 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401FD5D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___(
        _QWORD *a1,
        _DWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // r15d
  _QWORD *v6; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v7; // rbx
  _DWORD *v9; // r14
  _QWORD *v10; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v11; // r12
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rbx
  int v13; // r8d
  __int64 v14; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v19; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v20; // rdi
  volatile __int32 *v21; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v22; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v23; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v24; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v25[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v28; // [rsp+78h] [rbp-8h]

  v2 = a1 + 2;
  v28 = 0;
  v26 = a1 + 2;
  v25[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v25;
  v25[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v25;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v6 = (_QWORD *)*a1;
  v28 = 1;
  if ( v6 == a1 )
    goto LABEL_2;
  v9 = *a2;
  do
  {
    v10 = v6;
    v11 = (HOST_VMMONITOR_MAPPING_ENTRY **)v6;
    v12 = (HOST_VMMONITOR_MAPPING_ENTRY *)v6;
    v6 = (_QWORD *)*v6;
    if ( *((_DWORD *)v10 + 4) == *v9 && *((_DWORD *)v10 + 5) == v9[1] )
    {
      v13 = *((_DWORD *)v10 + 6);
      if ( v13 == *a2[1] )
      {
        v14 = v10[6];
        if ( v14 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              (_DWORD)v10,
              (unsigned int)&RemoteMonitorRemoveMapping,
              v13,
              v10[2],
              v13,
              v14,
              v10[4]);
          v15 = *v11;
          if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)*v11 + 1) != v12
            || (v16 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v12 + 1), *v16 != v12)
            || (*v16 = v15,
                *((_QWORD *)v15 + 1) = v16,
                v17 = v25[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v25[0] + 1) != v25) )
          {
LABEL_29:
            __fastfail(3u);
          }
          *v11 = v25[0];
          *((_QWORD *)v12 + 1) = v25;
          v5 = 0;
          *((_QWORD *)v17 + 1) = v12;
          v25[0] = v12;
        }
      }
    }
  }
  while ( v6 != a1 );
  if ( v28 )
  {
LABEL_2:
    v28 = 0;
    v26[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v7 = v25[0];
  while ( v7 != (HOST_VMMONITOR_MAPPING_ENTRY *)v25 )
  {
    v18 = v7;
    v19 = v7;
    v20 = v7;
    v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v7;
    if ( *((_QWORD *)v18 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v18 + 9), *((_DWORD *)v18 + 16));
    }
    else
    {
      v21 = (volatile __int32 *)*((_QWORD *)v18 + 7);
      if ( v21 )
      {
        _InterlockedExchange(v21, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v18 + 7) + 8LL), 0LL);
      }
    }
    v22 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v19;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v19 + 8LL) != v20 )
      goto LABEL_29;
    v23 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v20 + 1);
    if ( *v23 != v20 )
      goto LABEL_29;
    *v23 = v22;
    *((_QWORD *)v22 + 1) = v23;
    v24 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v20 + 11);
    if ( v24 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v24);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v20, (unsigned int)v21);
  }
  return v5;
}

/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___ @ 0x140080F5C
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140061018 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140081D18 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401FD5D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0c150cc48e274b7aa1002551270ee584___(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY **v8; // r12
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rdi
  int v10; // r8d
  __int64 v11; // r10
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rbx
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rdi
  volatile __int32 *v19; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v21; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v22; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v24[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v25[48]; // [rsp+50h] [rbp-30h] BYREF

  v24[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v24;
  v24[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v24;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v25, a1 + 2, 1);
  v5 = (_QWORD *)*a1;
  while ( v5 != a1 )
  {
    v6 = *a2;
    v7 = v5;
    v8 = (HOST_VMMONITOR_MAPPING_ENTRY **)v5;
    v9 = (HOST_VMMONITOR_MAPPING_ENTRY *)v5;
    v5 = (_QWORD *)*v5;
    if ( *((_DWORD *)v7 + 4) == *(_DWORD *)(*a2 + 16) && *((_DWORD *)v7 + 5) == *(_DWORD *)(v6 + 20) )
    {
      v10 = *((_DWORD *)v7 + 6);
      if ( v10 == *(_DWORD *)(v6 + 24) && v7[4] == *(_QWORD *)(v6 + 32) )
      {
        v11 = v7[6];
        if ( v11 == *(_QWORD *)(v6 + 48) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v6,
              (unsigned int)&RemoteMonitorRemoveMapping,
              v10,
              v7[2],
              v10,
              v11,
              v7[4]);
          v12 = *v8;
          if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)*v8 + 1) != v9
            || (v13 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v9 + 1), *v13 != v9)
            || (*v13 = v12,
                *((_QWORD *)v12 + 1) = v13,
                v14 = v24[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v24[0] + 1) != v24) )
          {
LABEL_26:
            __fastfail(3u);
          }
          *v8 = v24[0];
          *((_QWORD *)v9 + 1) = v24;
          v4 = 0;
          *((_QWORD *)v14 + 1) = v9;
          v24[0] = v9;
        }
      }
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v25);
  v15 = v24[0];
  while ( v15 != (HOST_VMMONITOR_MAPPING_ENTRY *)v24 )
  {
    v16 = v15;
    v17 = v15;
    v18 = v15;
    v15 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *((_QWORD *)v16 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v16 + 9), *((_DWORD *)v16 + 16));
    }
    else
    {
      v19 = (volatile __int32 *)*((_QWORD *)v16 + 7);
      if ( v19 )
      {
        _InterlockedExchange(v19, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v16 + 7) + 8LL), 0LL);
      }
    }
    v20 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v17;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v17 + 8LL) != v18 )
      goto LABEL_26;
    v21 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v18 + 1);
    if ( *v21 != v18 )
      goto LABEL_26;
    *v21 = v20;
    *((_QWORD *)v20 + 1) = v21;
    v22 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v18 + 11);
    if ( v22 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v22);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v18, (unsigned int)v19);
  }
  return v4;
}

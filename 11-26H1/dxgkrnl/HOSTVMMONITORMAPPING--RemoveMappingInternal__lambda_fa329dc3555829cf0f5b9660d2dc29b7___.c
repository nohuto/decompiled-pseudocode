/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1400812D4
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z @ 0x140081C84 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140061018 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140081D18 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401FD5D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // r15d
  int v5; // r8d
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v8; // r12
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v10; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v11; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rbx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rdi
  volatile __int32 *v17; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v19; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[48]; // [rsp+50h] [rbp-30h] BYREF

  v22[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v23, a1 + 2, 1);
  v6 = (_QWORD *)*a1;
  while ( v6 != a1 )
  {
    v7 = v6;
    v8 = (HOST_VMMONITOR_MAPPING_ENTRY **)v6;
    v9 = (HOST_VMMONITOR_MAPPING_ENTRY *)v6;
    v6 = (_QWORD *)*v6;
    if ( v7[4] == *a2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v7,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v5,
          v7[2],
          *((_DWORD *)v7 + 6),
          v7[6],
          v7[4]);
      v10 = *v8;
      if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)*v8 + 1) != v9
        || (v11 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v9 + 1), *v11 != v9)
        || (*v11 = v10, *((_QWORD *)v10 + 1) = v11, v12 = v22[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v22[0] + 1) != v22) )
      {
LABEL_22:
        __fastfail(3u);
      }
      *v8 = v22[0];
      *((_QWORD *)v9 + 1) = v22;
      v4 = 0;
      *((_QWORD *)v12 + 1) = v9;
      v22[0] = v9;
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v23);
  v13 = v22[0];
  while ( v13 != (HOST_VMMONITOR_MAPPING_ENTRY *)v22 )
  {
    v14 = v13;
    v15 = v13;
    v16 = v13;
    v13 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v13;
    if ( *((_QWORD *)v14 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v14 + 9), *((_DWORD *)v14 + 16));
    }
    else
    {
      v17 = (volatile __int32 *)*((_QWORD *)v14 + 7);
      if ( v17 )
      {
        _InterlockedExchange(v17, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v14 + 7) + 8LL), 0LL);
      }
    }
    v18 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v16 )
      goto LABEL_22;
    v19 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v16 + 1);
    if ( *v19 != v16 )
      goto LABEL_22;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    v20 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v16 + 11);
    if ( v20 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v20);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v16, (unsigned int)v17);
  }
  return v4;
}

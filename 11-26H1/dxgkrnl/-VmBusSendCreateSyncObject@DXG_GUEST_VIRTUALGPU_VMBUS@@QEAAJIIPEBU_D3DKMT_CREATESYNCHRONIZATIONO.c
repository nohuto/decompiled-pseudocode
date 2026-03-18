/*
 * XREFs of ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x14022DBB8
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        int a3,
        __int128 *a4,
        int a5,
        _OWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v15; // xmm1
  unsigned int v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-90h]
  _OWORD v19[2]; // [rsp+180h] [rbp+80h] BYREF

  v6 = 0;
  v18 = 0;
  v17 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v17, a1, 0x80u, 0LL, 0LL, 0LL);
  v11 = v17;
  if ( (_QWORD)v17 )
  {
    *(_BYTE *)(v17 + 12) = 0;
    *(_DWORD *)(v11 + 12) &= 0x1FFu;
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 8) = a2;
    *(_QWORD *)(v11 + 16) = 8LL;
    v12 = *a4;
    v16[0] = 32;
    *(_OWORD *)(v11 + 24) = v12;
    *(_OWORD *)(v11 + 40) = a4[1];
    *(_OWORD *)(v11 + 56) = a4[2];
    *(_OWORD *)(v11 + 72) = a4[3];
    *(_OWORD *)(v11 + 88) = a4[4];
    v13 = a4[5];
    *(_DWORD *)(v11 + 120) = a5;
    *(_OWORD *)(v11 + 104) = v13;
    *(_DWORD *)(v11 + 24) = a3;
    if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(a1, (struct DXGVMBUSMESSAGE *)&v17, v19, v16) < 0
      || v16[0] < 0x20 )
    {
      goto LABEL_7;
    }
    if ( a3 )
    {
      if ( !LODWORD(v19[0]) )
      {
LABEL_7:
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9246;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendCreateSyncObject failed: 0x%I64x",
          -1073741823LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741823;
        goto LABEL_8;
      }
    }
    else if ( !DWORD1(v19[0]) )
    {
      goto LABEL_7;
    }
    v15 = v19[1];
    *a6 = v19[0];
    a6[1] = v15;
    goto LABEL_8;
  }
  v6 = -1073741801;
LABEL_8:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v17);
  return v6;
}

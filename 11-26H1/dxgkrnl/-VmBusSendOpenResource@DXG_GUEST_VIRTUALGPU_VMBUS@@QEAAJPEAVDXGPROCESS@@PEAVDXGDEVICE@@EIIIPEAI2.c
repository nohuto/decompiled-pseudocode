/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x14031276C
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int *v9; // r14
  _DWORD *v14; // rbx
  int v16; // edi
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rdx
  unsigned int v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+70h] [rbp-90h]
  char v23; // [rsp+74h] [rbp-8Ch] BYREF

  v9 = a9;
  v22 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x30u, 0LL, 0LL, 0LL);
  v14 = P[0];
  if ( P[0] )
  {
    v14[2] = DXGPROCESS::GetHostProcess(a2);
    *((_BYTE *)v14 + 12) = 0;
    v14[3] &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 2) = 32LL;
    v14[6] = *((_DWORD *)a3 + 118);
    v14[8] = a5;
    v14[10] = a7;
    *((_BYTE *)v14 + 28) = a4;
    v14[9] = a6;
    if ( a6 < 0x8000 )
    {
      v17 = (unsigned int *)operator new[]((4 * a6 + 15) & 0xFFFFFFF8, 0x4B677844u, 64LL);
      v18 = v17;
      if ( v17 )
      {
        v20[0] = (4 * a6 + 15) & 0xFFFFFFF8;
        v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v17, v20);
        if ( v16 < 0 || (v16 = -1073741823, v20[0] < ((4 * a6 + 15) & 0xFFFFFFF8)) || (v16 = v18[1], v16 < 0) )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 10810;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"VmBusSendOpenResource failed: 0x%I64x",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *a8 = *v18;
          if ( a6 )
          {
            v19 = a6;
            do
            {
              *v9 = *(unsigned int *)((char *)v9 + (char *)(v18 + 2) - (char *)a9);
              ++v9;
              --v19;
            }
            while ( v19 );
          }
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
      }
      else
      {
        v16 = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10776;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocatoins is invalid", 10776LL, 0LL, 0LL, 0LL, 0LL);
      v16 = -1073741811;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v16;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v23 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}

/*
 * XREFs of ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x14018B0B8
 * Callers:
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x14018B1F4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const void **a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int HostHandle; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r15d
  struct DXGKVMB_COMMAND_BASE *v12; // rdi
  unsigned int v13; // ebx
  int v14; // ebx
  struct _MDL *v16; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v17[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-148h]

  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  v10 = *((_DWORD *)a3 + 42) + 48;
  *(_OWORD *)v17 = 0LL;
  v18 = 0;
  v11 = HostHandle;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v17, this, v10, 0LL, 0LL, 0LL);
  v12 = v17[0];
  if ( v17[0] )
  {
    v14 = *((_DWORD *)a3 + 8);
    *((_DWORD *)v12 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_QWORD *)v12 + 4) = a5;
    *((_BYTE *)v12 + 12) = 1;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *((_QWORD *)v12 + 5) = a6;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 2) = 1015LL;
    *((_DWORD *)v12 + 6) = v14;
    *((_DWORD *)v12 + 7) = v11;
    memmove((char *)v12 + 48, a3[20], *((unsigned int *)a3 + 42));
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v17[1], v17[0], v18, v16);
  }
  else
  {
    v13 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v17);
  return v13;
}

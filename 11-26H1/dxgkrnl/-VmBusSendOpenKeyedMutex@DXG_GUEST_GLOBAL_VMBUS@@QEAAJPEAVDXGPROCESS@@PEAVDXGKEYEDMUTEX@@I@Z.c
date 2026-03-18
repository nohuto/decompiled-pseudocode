/*
 * XREFs of ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140230F54
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1401FE66C (-SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGKEYEDMUTEX *a3,
        int a4)
{
  unsigned int v6; // r8d
  struct DXGKVMB_COMMAND_BASE *v10; // r9
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // [rsp+20h] [rbp-E0h]
  struct _MDL *v16; // [rsp+30h] [rbp-D0h]
  unsigned int v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+70h] [rbp-90h]
  unsigned int v20; // [rsp+180h] [rbp+80h] BYREF
  int v21; // [rsp+184h] [rbp+84h]

  v6 = *((_DWORD *)a3 + 42);
  if ( v6 > 0x1FFE0 )
  {
    WdLogSingleEntry1(2LL);
    v15 = (unsigned int *)(*((unsigned int *)a3 + 42) + 32LL);
    WdLogGlobalForLineNumber = 14255;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VM bus message size: 0x%I64x",
      (__int64)v15,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  *(_OWORD *)v18 = 0LL;
  v19 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, v6 + 32, 0LL, 0LL, 0LL);
  v10 = v18[0];
  if ( v18[0] )
  {
    v12 = *((_DWORD *)a3 + 42);
    v13 = *((_DWORD *)a3 + 8);
    v14 = *((_DWORD *)a2 + 122);
    *((_BYTE *)v18[0] + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *((_DWORD *)v10 + 6) = v13;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = v14;
    *((_QWORD *)v10 + 2) = 1012LL;
    *((_DWORD *)v10 + 7) = v12;
    memmove((char *)v10 + 32, *((const void **)a3 + 20), *((unsigned int *)a3 + 42));
    v17[0] = 8;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v18[1], v18[0], v19, &v20, v17, v16);
    if ( v11 >= 0 )
    {
      if ( v17[0] < 8 )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = v21;
        if ( v21 >= 0 )
        {
          DXGKEYEDMUTEX::SetHostHandle(a3, a4, v20);
          goto LABEL_11;
        }
      }
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14293;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbusSendOpenSyncObject failed: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  v11 = -1073741801;
LABEL_11:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return (unsigned int)v11;
}

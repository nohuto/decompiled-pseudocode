/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402BF28C
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x14018B1F4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        void **a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  LONGLONG QuadPart; // r14
  _DWORD *v12; // rdi
  int v14; // ebx
  int v15; // eax
  size_t v16; // r14
  unsigned int v17; // edi
  _QWORD *v18; // rbx
  int v19; // esi
  struct _MDL *v20; // [rsp+30h] [rbp-D0h]
  unsigned int HostHandle; // [rsp+50h] [rbp-B0h] BYREF
  DXGPROCESS *v22; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v23; // [rsp+60h] [rbp-A0h]
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+84h] [rbp-7Ch] BYREF

  v22 = a2;
  v23 = a8;
  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v25 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x40u, 0LL, 0LL, 0LL);
  v12 = P[0];
  if ( !P[0] )
  {
    if ( P[1] )
    {
      if ( P[1] != &v26 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
  v14 = *((_DWORD *)a3 + 8);
  v12[2] = DXGPROCESS::GetHostProcess(v22);
  v12[7] = HostHandle;
  *((_QWORD *)v12 + 4) = a5;
  v12[10] = a6;
  v15 = v12[14];
  *((_BYTE *)v12 + 12) = 1;
  v12[3] &= 0x1FFu;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 2) = 1014LL;
  v12[6] = v14;
  *((_QWORD *)v12 + 6) = QuadPart;
  v12[14] = v15 & 0xFFFFFFFE | (a7 == 0LL);
  v16 = *((unsigned int *)a3 + 42);
  v17 = (v16 + 31) & 0xFFFFFFF8;
  if ( v17 > 0x20000 || v17 < (unsigned int)v16 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 14338;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return 2147483653LL;
  }
  else
  {
    v18 = (_QWORD *)operator new[](v17, 0x4B677844u, 64LL);
    if ( !v18 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14345;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate output buffer for VmBusSendAcquireKeyedMutexSync",
        14345LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return 3221225495LL;
    }
    HostHandle = (v16 + 31) & 0xFFFFFFF8;
    v19 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v25,
            v18,
            &HostHandle,
            v20);
    if ( v19 >= 0 )
    {
      if ( HostHandle < v17 )
      {
        v19 = -1073741823;
      }
      else
      {
        v19 = *(_DWORD *)v18;
        if ( (_DWORD)v16 )
          memmove(a3[20], v18 + 3, v16);
        *v23 = v18[2];
        if ( a9 )
          *a9 = v18[1];
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v19;
  }
}

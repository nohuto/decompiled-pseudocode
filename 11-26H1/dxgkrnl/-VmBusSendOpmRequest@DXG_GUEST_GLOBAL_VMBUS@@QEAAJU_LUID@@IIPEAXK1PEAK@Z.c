/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1402311B0
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403BCA7C (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int Size,
        void *a7,
        unsigned int *a8)
{
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  struct DXGKVMB_COMMAND_BASE *v13; // rcx
  int v15; // eax
  void *v16; // rdx
  int v17; // r8d
  int *v18; // r14
  int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rdi
  struct _MDL *v24; // [rsp+30h] [rbp-D0h]
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGKVMB_COMMAND_BASE *v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-90h]

  Src = a5;
  v10 = *a8 + 19;
  v26 = a4;
  v11 = v10 & 0xFFFFFFF8;
  v25 = a3;
  v12 = Size + 56;
  if ( Size + 56 > 0x20000 || v11 > 0x20000 )
  {
    v21 = v11;
    v22 = v11;
    v23 = v12;
    WdLogSingleEntry2(2LL, v12, v22);
    WdLogGlobalForLineNumber = 14648;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either input buffer size (0x%I64x) or output buffer size (0x%I64x) is too big to go over VmBus",
      v23,
      v21,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *(_OWORD *)v28 = 0LL;
    v29 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v28, this, v12, 0LL, 0LL, 0LL);
    v13 = v28[0];
    if ( v28[0] )
    {
      v15 = *a8;
      v16 = Src;
      *((_DWORD *)v28[0] + 8) = v25;
      v17 = v26;
      *((_BYTE *)v13 + 12) = 1;
      *((_DWORD *)v13 + 3) &= 0x1FFu;
      *((_DWORD *)v13 + 9) = v17;
      *(_QWORD *)v13 = 0LL;
      *((_DWORD *)v13 + 2) = 0;
      *((_QWORD *)v13 + 2) = 1017LL;
      *((struct _LUID *)v13 + 3) = a2;
      *((_DWORD *)v13 + 10) = Size;
      *((_DWORD *)v13 + 11) = v15;
      memmove((char *)v13 + 48, v16, Size);
      v18 = (int *)operator new[](v11, 0x4B677844u, 64LL);
      Src = v18;
      v25 = v11;
      v19 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v28[1], v28[0], v29, v18, &v25, v24);
      if ( v19 >= 0 )
      {
        v19 = -1073741823;
        if ( v25 >= 8 )
        {
          v19 = *v18;
          if ( *v18 >= 0 )
          {
            v20 = v18[1];
            if ( v20 <= *a8 )
            {
              memmove(a7, v18 + 2, v20);
              *a8 = v18[1];
            }
          }
        }
      }
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
      return (unsigned int)v19;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14656;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        14656LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
      return 3221225495LL;
    }
  }
}

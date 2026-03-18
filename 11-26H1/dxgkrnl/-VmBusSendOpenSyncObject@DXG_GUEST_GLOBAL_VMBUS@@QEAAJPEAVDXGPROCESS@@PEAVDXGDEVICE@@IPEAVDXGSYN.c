/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402BF53C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401FE770 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140221014 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a8)
{
  struct DXGKVMB_COMMAND_BASE *v12; // rcx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  struct _MDL *v19; // [rsp+38h] [rbp-D0h]
  unsigned int v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v21[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+78h] [rbp-90h]
  char v23; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v24; // [rsp+188h] [rbp+80h] BYREF
  int v25; // [rsp+18Ch] [rbp+84h]
  __int64 v26; // [rsp+190h] [rbp+88h]
  unsigned __int64 v27; // [rsp+198h] [rbp+90h]

  v22 = 0;
  *(_OWORD *)v21 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v21, this, 0x28u, 0LL, 0LL, 0LL);
  v12 = v21[0];
  if ( v21[0] )
  {
    v14 = *((_DWORD *)a5 + 21);
    if ( a3 )
      v15 = *((_DWORD *)a3 + 118);
    else
      v15 = 0;
    *((_DWORD *)v21[0] + 2) = *((_DWORD *)a2 + 122);
    *((_DWORD *)v12 + 8) = a7;
    *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v12 + 9) = a8;
    *((_BYTE *)v12 + 12) = 1;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 2) = 1002LL;
    *((_DWORD *)v12 + 6) = v15;
    *((_DWORD *)v12 + 7) = v14;
    v20 = 24;
    LODWORD(v16) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                     this,
                     (unsigned __int8 *)v21[1],
                     v21[0],
                     v22,
                     &v24,
                     &v20,
                     v19);
    if ( (int)v16 >= 0 )
    {
      if ( v20 < 0x18 )
      {
        LODWORD(v16) = -1073741823;
      }
      else
      {
        LODWORD(v16) = v25;
        if ( v25 >= 0 )
        {
          if ( a6 )
          {
            v17 = v27;
            *((_DWORD *)a6 + 11) = v24;
            *((_QWORD *)a6 + 6) = v26;
            v18 = MapGuestFenceCpuVaToHost(v17, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
            v16 = v18;
            if ( v18 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 14220;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"MapCpuVaForParavirtualization failed: 0x%I64x",
                v16,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else
          {
            DXGSYNCOBJECT::SetHostHandle(a5, a4, v24);
          }
          goto LABEL_18;
        }
      }
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14230;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmbusSendOpenSyncObject failed: 0x%I64x",
      (int)v16,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v21);
    return (unsigned int)v16;
  }
  if ( v21[1] )
  {
    if ( (char *)v21[1] != &v23 )
      ExFreePoolWithTag(v21[1], 0x4D767844u);
  }
  return 3221225495LL;
}

/*
 * XREFs of ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402BF9E8
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  UINT OutputDataSize; // edi
  unsigned int v5; // edx
  UINT InputDataSize; // ebx
  __int64 v7; // rbx
  _DWORD *v8; // r14
  _DWORD *v10; // rbx
  int v11; // ebp
  unsigned int v12[4]; // [rsp+30h] [rbp-158h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-148h] BYREF
  int v14; // [rsp+50h] [rbp-138h]
  char v15; // [rsp+54h] [rbp-134h] BYREF

  OutputDataSize = a2->OutputDataSize;
  v5 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 438);
  if ( a2->Type == DXGKQAITYPE_DRIVERCAPS )
  {
    if ( (v5 < 0x28 ? 584 : 592) < OutputDataSize )
      OutputDataSize = v5 < 0x28 ? 584 : 592;
  }
  else if ( a2->Type == DXGKQAITYPE_PHYSICALADAPTERCAPS && (v5 < 0x1B ? 24 : 32) < OutputDataSize )
  {
    OutputDataSize = v5 < 0x1B ? 24 : 32;
  }
  InputDataSize = a2->InputDataSize;
  v12[0] = (OutputDataSize + 7) & 0xFFFFFFF8;
  v7 = InputDataSize + 40;
  *(_OWORD *)P = 0LL;
  v14 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, v12[0] + v7, 0LL, 0LL, 0LL);
  v8 = P[0];
  if ( P[0] )
  {
    *((_BYTE *)P[0] + 12) = 0;
    v8[3] &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    v8[2] = 0;
    *((_QWORD *)v8 + 2) = 3LL;
    v8[6] = a2->Type;
    v8[7] = a2->InputDataSize;
    v8[8] = OutputDataSize;
    memmove(v8 + 9, a2->pInputData, a2->InputDataSize);
    v10 = (_DWORD *)((char *)v8 + v7);
    v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v10, v12);
    if ( v11 >= 0 )
    {
      if ( v12[0] >= OutputDataSize )
      {
        switch ( v8[6] )
        {
          case 1:
            v10[12] &= 0x3Fu;
            v10[13] &= ~0x80000000;
            v10[15] &= 0x7Fu;
            v10[16] &= 0x1FFFu;
            v10[17] &= 0x3FFFFu;
            v10[144] &= 0x3FFu;
            if ( (int)v10[84] > 12800 )
              v10[84] = 12800;
            break;
          case 0xD:
            *v10 &= 0x7FFFu;
            v10[5] &= 1u;
            break;
          case 0xF:
            v10[4] &= 0x1FFu;
            break;
        }
        if ( OutputDataSize >= a2->OutputDataSize )
          OutputDataSize = a2->OutputDataSize;
        memmove(a2->pOutputData, v10, OutputDataSize);
      }
      else
      {
        v11 = -1073741823;
      }
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v11;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v15 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}

/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x14042E594
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v8; // rax
  UINT v9; // r14d
  unsigned int v10; // edi
  struct DXGKVMB_COMMAND_BASE *v11; // rbx
  unsigned int v12; // ebx
  int HostProcess; // eax
  D3DKMT_HANDLE v14; // edx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r12d
  int Ptr_high; // r15d
  UINT i; // r14d
  unsigned __int64 v24; // rdi
  int v25; // eax
  unsigned int v26; // r8d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  struct _EX_RUNDOWN_REF *v29; // [rsp+50h] [rbp-1A8h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+58h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v31; // [rsp+60h] [rbp-198h]
  _BYTE v32[8]; // [rsp+68h] [rbp-190h] BYREF
  __int64 v33; // [rsp+70h] [rbp-188h]
  char v34; // [rsp+78h] [rbp-180h]
  _BYTE v35[32]; // [rsp+80h] [rbp-178h] BYREF
  struct DXGKVMB_COMMAND_BASE *v36[2]; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp-148h]

  LODWORD(v30) = a3;
  v31 = a2;
  v33 = *((_QWORD *)this + 9);
  v34 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) == 1 )
  {
    v8 = (unsigned __int64)a5->NumOperations << 6;
    v9 = -1;
    if ( v8 <= 0xFFFFFFFF )
      v9 = a5->NumOperations << 6;
    v10 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v29) = v10;
    if ( v9 >= 0x20000 || v9 + 56 > 0x20000 )
    {
      v12 = -1073741637;
      goto LABEL_33;
    }
    *(_OWORD *)v36 = 0LL;
    v37 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v36, this, v9 + 56, 0LL, 0LL, 0LL);
    v11 = v36[0];
    if ( !v36[0] )
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v36);
      v12 = -1073741801;
LABEL_33:
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      return v12;
    }
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = HostProcess;
    *((_BYTE *)v11 + 12) = 0;
    *((_DWORD *)v11 + 3) &= 0x1FFu;
    *((_QWORD *)v11 + 2) = 19LL;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v35, (struct _KTHREAD **)a2);
    v14 = (a5->hFenceObject >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)a2 + 74) )
    {
      v16 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v14 + 8);
      if ( a5->hFenceObject >> 30 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        v17 = 2LL * v14;
        v18 = *((_QWORD *)a2 + 35);
        if ( (*(_BYTE *)(v18 + 8 * v17 + 8) & 0x1F) == 0xB )
        {
          v19 = *(_QWORD *)(v18 + 8 * v17);
          if ( v19 )
          {
            v20 = *(_DWORD *)(v19 + 44);
            *((_QWORD *)v11 + 3) = a5->FenceValue;
            *((_DWORD *)v11 + 12) = a5->Flags.Value;
            *((_DWORD *)v11 + 9) = a4;
            *((_DWORD *)v11 + 8) = (_DWORD)v30;
            *((_DWORD *)v11 + 10) = v20;
            *((_DWORD *)v11 + 11) = a5->NumOperations;
            RtlCopyFromUser((char *)v11 + 56, a5->Operations, v9);
            v21 = 0;
            Ptr_high = 0;
            for ( i = 0; i < a5->NumOperations; ++i )
            {
              v24 = (unsigned __int64)i << 6;
              v25 = *(_DWORD *)((char *)v11 + v24 + 56);
              if ( !v25 || v25 == 3 )
              {
                v26 = *(_DWORD *)((char *)v11 + v24 + 80);
                if ( v26 == v21 )
                {
                  *(_DWORD *)((char *)v11 + v24 + 80) = Ptr_high;
                }
                else
                {
                  v29 = 0LL;
                  AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                                  (__int64)v31,
                                                                  (DXGALLOCATIONREFERENCE *)&v30,
                                                                  v26);
                  DXGALLOCATIONREFERENCE::MoveAssign(&v29, AllocationUnsafe);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
                  if ( !v29 )
                  {
                    v10 = -1073741811;
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
                    goto LABEL_30;
                  }
                  v21 = *(_DWORD *)((char *)v11 + v24 + 80);
                  Ptr_high = HIDWORD(v29[2].Ptr);
                  *(_DWORD *)((char *)v11 + v24 + 80) = Ptr_high;
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
                }
              }
            }
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35);
            v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v36[1], v36[0], v37);
            goto LABEL_31;
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry2(3LL, a5->hFenceObject, -1073741811LL);
    WdLogGlobalForLineNumber = 12983;
LABEL_30:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v35);
LABEL_31:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v36);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return v10;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  return 3221226166LL;
}

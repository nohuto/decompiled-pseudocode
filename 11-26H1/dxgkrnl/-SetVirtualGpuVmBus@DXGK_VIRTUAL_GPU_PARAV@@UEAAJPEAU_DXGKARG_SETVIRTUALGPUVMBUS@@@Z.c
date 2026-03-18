/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x140083AF8 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140083B2C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401F6944 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1401F7A64 (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1402202A0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  __int64 *v2; // rdi
  int VmBusChannel; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _EPROCESS *v10; // r14
  struct DXGVIRTUALMACHINE *v11; // r15
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 ProcessDxgProcess; // rbx
  int v16; // ecx
  int DxgProcess; // eax
  __int64 v18; // rdi
  const wchar_t *v19; // r9
  int v20; // edx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  DXGPROCESSVMWP *v27; // rdi
  unsigned __int8 v28; // bl
  __int64 v29; // rcx
  struct _EPROCESS *v30; // rax
  int v31; // eax
  struct DXGPROCESSVMWP **v32; // rcx
  __int64 v33; // rax
  _BYTE v34[32]; // [rsp+50h] [rbp-20h] BYREF
  struct DXGPROCESS *v35; // [rsp+B0h] [rbp+40h] BYREF
  struct _EPROCESS *v36; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  VmBusChannel = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 22, a2->VmBusHandle, this);
  if ( VmBusChannel < 0 )
    return (unsigned int)VmBusChannel;
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v34, (struct _KTHREAD **)Global + 58);
  v7 = *((_QWORD *)this + 12);
  if ( !v7 )
  {
    v8 = *v2;
    v36 = 0LL;
    if ( g_VgpuDisableVaBackedVm
      || (int)((__int64 (__fastcall *)(__int64, struct _EPROCESS **))qword_140168698)(v8, &v36) < 0 )
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    else
    {
      v10 = v36;
      v11 = 0LL;
      if ( v36 )
      {
        CurrentProcess = PsGetCurrentProcess(v9);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( ProcessDxgProcess )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = ProcessDxgProcess;
          v16 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
          WdLogGlobalForLineNumber = 311;
          if ( (v16 & 1) == 0 )
          {
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            goto LABEL_13;
          }
          *((_QWORD *)this + 12) = ProcessDxgProcess;
          v11 = *(struct DXGVIRTUALMACHINE **)(ProcessDxgProcess + 592);
          if ( !v11 )
            goto LABEL_11;
          if ( !*((_QWORD *)v11 + 34) )
          {
            *(_QWORD *)(ProcessDxgProcess + 592) = 0LL;
            *((_QWORD *)v11 + 7) = 0LL;
LABEL_11:
            DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)ProcessDxgProcess);
            *((_QWORD *)this + 12) = 0LL;
          }
        }
LABEL_13:
        if ( !*((_QWORD *)this + 12) )
        {
          DxgProcess = DXGPROCESS::CreateDxgProcess(
                         (struct DXGPROCESS **)this + 12,
                         0LL,
                         0LL,
                         a2->VmBusHandle != 0LL,
                         v10);
          v18 = DxgProcess;
          if ( DxgProcess < 0 )
          {
            WdLogSingleEntry1(6LL);
            WdLogGlobalForLineNumber = 362;
LABEL_16:
            v19 = L"Failed to create DXGPROCESS for VMWP process: 0x%I64x";
            v20 = 262145;
LABEL_17:
            DxgkLogInternalTriageEvent(0LL, v20, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
            return (unsigned int)v18;
          }
        }
        goto LABEL_29;
      }
    }
    Current = DXGPROCESS::GetCurrent();
    v35 = Current;
    v23 = Current;
    if ( Current )
    {
      if ( (*((_DWORD *)Current + 102) & 0x80) != 0 )
      {
LABEL_25:
        v25 = *((_DWORD *)v23 + 102);
        if ( (v25 & 0x100) != 0 )
          v26 = *((_QWORD *)v23 + 74);
        else
          v26 = (unsigned __int64)v23 & -(__int64)((v25 & 0x80u) != 0);
        *((_QWORD *)this + 12) = v26;
LABEL_29:
        DXGPROCESS::AcquireReference(*((DXGPROCESS **)this + 12));
        v27 = (DXGPROCESSVMWP *)*((_QWORD *)this + 12);
        v28 = *((_BYTE *)this + 153);
        v30 = (struct _EPROCESS *)PsGetCurrentProcess(v29);
        v31 = DXGPROCESSVMWP::InitializeVmwpProcess(
                v27,
                a2->VmBusHandle,
                *((struct DXGPROCESS **)this + 11),
                v30,
                v10,
                v28,
                v11);
        v18 = v31;
        if ( v31 < 0 )
        {
          WdLogSingleEntry1(2LL);
          v19 = L"Failed to setup VM worker process: 0x%I64x";
          WdLogGlobalForLineNumber = 399;
          v20 = 0x40000;
          goto LABEL_17;
        }
        v32 = *(struct DXGPROCESSVMWP ***)(*((_QWORD *)this + 12) + 592LL);
        *((_QWORD *)this + 13) = v32;
        VmBusChannel = DXGVIRTUALMACHINE::InitializeVirtualMachine(v32, a2->VmBusHandle, 1);
        if ( VmBusChannel < 0 )
        {
          WdLogSingleEntry0(2LL);
          v33 = 411LL;
LABEL_38:
          WdLogGlobalForLineNumber = v33;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to initalize virtual machine",
            v33,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_41;
        }
        DXGVIRTUALMACHINE::SetVmGuid(*((struct _GUID **)this + 13), (const struct _GUID *)this + 22);
        DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
        goto LABEL_40;
      }
      DXGPROCESS::DestroyDxgProcess(Current);
      v35 = 0LL;
    }
    v24 = DXGPROCESS::CreateDxgProcess(&v35, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL);
    v18 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 380;
      goto LABEL_16;
    }
    v23 = v35;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v7 + 616) )
  {
    VmBusChannel = DXGVIRTUALMACHINE::InitializeVirtualMachine(
                     *((struct DXGPROCESSVMWP ***)this + 13),
                     a2->VmBusHandle,
                     1);
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry0(2LL);
      v33 = 438LL;
      goto LABEL_38;
    }
    DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
LABEL_40:
    *((_BYTE *)this + 156) = 0;
    goto LABEL_41;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 426;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VMWP process failed to reset", 426LL, 0LL, 0LL, 0LL, 0LL);
  VmBusChannel = -1073741823;
LABEL_41:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
  return (unsigned int)VmBusChannel;
}

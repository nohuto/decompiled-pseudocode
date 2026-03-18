/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400837F4 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140083820 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ?ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x140083AF8 (-ActivateVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140083B2C (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     DpiGetGpuVirtualizationLock @ 0x1400856B0 (DpiGetGpuVirtualizationLock.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401F6944 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021B81C (-DdiSetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  DXGPROCESS *v11; // rax
  DXGPROCESSVMWP *v12; // rbx
  __int64 v13; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v15; // eax
  const wchar_t *v16; // r9
  struct DXGPROCESSVMWP **v17; // rcx
  __int64 v18; // rax
  ULONG v19; // eax
  struct _EX_PUSH_LOCK *GpuVirtualizationLock; // rax
  struct _EPROCESS *v22; // [rsp+20h] [rbp-E0h]
  struct DXGPROCESS *v23; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[144]; // [rsp+90h] [rbp-70h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, (struct _KTHREAD **)Global + 58);
  v5 = *((_QWORD *)this + 12);
  if ( !v5 )
  {
    Current = DXGPROCESS::GetCurrent();
    v23 = Current;
    v7 = Current;
    if ( Current )
    {
      if ( (*((_DWORD *)Current + 102) & 0x80) != 0 )
      {
LABEL_8:
        v10 = *((_DWORD *)v7 + 102);
        if ( (v10 & 0x100) != 0 )
          v11 = (DXGPROCESS *)*((_QWORD *)v7 + 74);
        else
          v11 = (DXGPROCESS *)((unsigned __int64)v7 & -(__int64)((v10 & 0x80u) != 0));
        *((_QWORD *)this + 12) = v11;
        DXGPROCESS::AcquireReference(v11);
        v12 = (DXGPROCESSVMWP *)*((_QWORD *)this + 12);
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13);
        v15 = DXGPROCESSVMWP::InitializeVmwpProcess(
                v12,
                a2->VmBusHandle,
                *((struct DXGPROCESS **)this + 11),
                CurrentProcess,
                0LL,
                0,
                0LL);
        v9 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL);
          v16 = L"Failed to setup VM worker process: 0x%I64x";
          v22 = (struct _EPROCESS *)v9;
          WdLogGlobalForLineNumber = 223;
LABEL_13:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, (__int64)v22, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_27;
        }
        v17 = *(struct DXGPROCESSVMWP ***)(*((_QWORD *)this + 12) + 592LL);
        *((_QWORD *)this + 13) = v17;
        LODWORD(v9) = DXGVIRTUALMACHINE::InitializeVirtualMachine(v17, 0LL, 0);
        if ( (int)v9 < 0 )
        {
          WdLogSingleEntry0(2LL);
          v18 = 235LL;
LABEL_17:
          v16 = L"Failed to initalize virtual machine";
          v22 = (struct _EPROCESS *)v18;
          WdLogGlobalForLineNumber = v18;
          goto LABEL_13;
        }
        DXGVIRTUALMACHINE::AddVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
        goto LABEL_24;
      }
      DXGPROCESS::DestroyDxgProcess(Current);
      v23 = 0LL;
    }
    v8 = DXGPROCESS::CreateDxgProcess(&v23, 0LL, 0LL, a2->VmBusHandle != 0LL, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 204;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to create DXGPROCESS for VMWP process: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_27;
    }
    v7 = v23;
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v5 + 616) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 249;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VMWP process failed to reset", 249LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v9) = -1073741823;
    goto LABEL_27;
  }
  LODWORD(v9) = DXGVIRTUALMACHINE::InitializeVirtualMachine(*((struct DXGPROCESSVMWP ***)this + 13), 0LL, 0);
  if ( (int)v9 < 0 )
  {
    WdLogSingleEntry0(2LL);
    v18 = 260LL;
    goto LABEL_17;
  }
  DXGVIRTUALMACHINE::ActivateVirtualGpu(*((struct _KTHREAD ***)this + 13));
LABEL_24:
  v19 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 156) = 0;
  a2->VirtualGpuIndex = v19;
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v26,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 1) + 16LL),
    0LL);
  LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
  if ( (int)v9 >= 0 )
  {
    GpuVirtualizationLock = (struct _EX_PUSH_LOCK *)DpiGetGpuVirtualizationLock(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                                          + 216LL));
    DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE((DXGAUTOEXPUSHLOCKEXCLUSIVE *)v24, GpuVirtualizationLock);
    LODWORD(v9) = ADAPTER_RENDER::DdiSetVirtualGpuVmBus(*((ADAPTER_RENDER **)this + 1), a2);
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v24);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
LABEL_27:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  return (unsigned int)v9;
}

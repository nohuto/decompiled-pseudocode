/*
 * XREFs of ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F5250
 * Callers:
 *     ?DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ @ 0x1400805F0 (-DestroyVmWpProcess@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1400805C8 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x140080814 (McTemplateK0pppj_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401F6FD4 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(DXGVIRTUALMACHINE *this)
{
  char *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 VirtualGpuManager; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v13[24]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v16[64]; // [rsp+90h] [rbp-58h] BYREF

  v2 = (char *)this + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 96));
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 == v2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v5 = v3 - 136;
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305636) )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 176LL))(v5);
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (struct _KTHREAD **)this + 8);
      COREACCESS::COREACCESS((COREACCESS *)v16, *((struct DXGADAPTER *const *)v5 + 2));
      COREACCESS::AcquireShared((COREACCESS *)v16, 0LL);
      VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(*((_QWORD *)v5 + 1), v5[152] != 0, v6, v7);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
        (struct _KTHREAD **)(VirtualGpuManager + 40));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)v5 + 7);
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(char *, _QWORD, __int64))(*(_QWORD *)v5 + 16LL))(v5, 0LL, v9);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
      COREACCESS::~COREACCESS((COREACCESS *)v16, v10);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    }
  }
  DXGVIRTUALMACHINE::ResetVirtualMachine(this, 1u);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppj_EtwWriteTransfer(
      v11,
      &EventDestroyVirtualMachine,
      v12,
      this,
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 34),
      (char *)this + 288);
  if ( this )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(this);
}

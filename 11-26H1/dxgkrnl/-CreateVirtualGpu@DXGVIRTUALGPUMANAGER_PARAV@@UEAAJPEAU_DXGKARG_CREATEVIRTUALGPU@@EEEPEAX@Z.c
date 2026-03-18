/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1403D9410
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x14018B568 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1402159E4 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1403D9950 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        void *a6)
{
  char v8; // r12
  __int64 v9; // rcx
  int TargetPartitionId; // ebx
  struct DXGPROCESS *Current; // r15
  ULONG PartitionId; // edx
  NTSTATUS v14; // eax
  __int64 v15; // rdi
  _DWORD *v16; // rsi
  NTSTATUS v17; // eax
  _QWORD *v18; // rdi
  DXGK_VIRTUAL_GPU_PARAV *v19; // rax
  DXGK_VIRTUAL_GPU_PARAV *v20; // rax
  DXGK_VIRTUAL_GPU_PARAV *v21; // rbx
  ULONG v22; // r12d
  char *v23; // r15
  char *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID Luid; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v36; // [rsp+78h] [rbp-88h]
  _BYTE v37[32]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A8h] [rbp-58h]
  const wchar_t *v40; // [rsp+B0h] [rbp-50h]
  unsigned int *v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+C0h] [rbp-40h]
  unsigned int *v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int128 v48; // [rsp+F0h] [rbp-10h]
  __int128 v49; // [rsp+100h] [rbp+0h]
  _BYTE v50[144]; // [rsp+110h] [rbp+10h] BYREF

  Handle = a6;
  v8 = 0;
  v36 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v36, 0LL);
  TargetPartitionId = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  if ( TargetPartitionId < 0 )
    goto LABEL_6;
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 907;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 907LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v37, (struct _KTHREAD **)this + 5);
  PartitionId = a2->PartitionId;
  v32 = 0xFFFF;
  TargetPartitionId = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v32);
  if ( TargetPartitionId < 0 )
  {
LABEL_5:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
LABEL_6:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    return (unsigned int)TargetPartitionId;
  }
  Luid = 0LL;
  v14 = ZwAllocateLocallyUniqueId(&Luid);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 922;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate LUID for virtual GPU, Status: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_11:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    return (unsigned int)v15;
  }
  *((_DWORD *)Current + 102) |= 0x40u;
  v16 = (_DWORD *)operator new(0x10uLL, 0x4B677844u, 256LL);
  if ( !v16 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 943;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
      943LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741801;
    goto LABEL_11;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v18 = Object;
  TargetPartitionId = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 952;
    goto LABEL_24;
  }
  v8 = 1;
  if ( *((_QWORD *)Object + 4) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 961;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
      961LL,
      0LL,
      0LL,
      0LL,
      0LL);
    TargetPartitionId = -1073741816;
    goto LABEL_24;
  }
  v19 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x188uLL, 0x4B677844u, 64LL);
  if ( !v19
    || (v20 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v19, *((struct ADAPTER_RENDER **)this + 4)),
        (v21 = v20) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 969;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Not enough memory to allocate the DXGK_VIRTUAL_GPU_PARAV for vGPU tracking.",
      969LL,
      0LL,
      0LL,
      0LL,
      0LL);
    TargetPartitionId = -1073741801;
LABEL_24:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
    if ( v8 )
      ObfDereferenceObject(v18);
    goto LABEL_5;
  }
  v22 = v32;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v32) = v20;
  *((_QWORD *)v20 + 11) = Current;
  v23 = (char *)this + 72;
  *((_BYTE *)v20 + 152) = 1;
  *((_BYTE *)v20 + 153) = a3;
  *((_BYTE *)v20 + 154) = a4;
  *((_BYTE *)v20 + 155) = a5;
  *((_DWORD *)v20 + 6) = v22;
  *(_OWORD *)((char *)v20 + 36) = DXGK_VRD_UMED_CLASID;
  *(struct _LUID *)((char *)v20 + 28) = Luid;
  *(_QWORD *)v16 = v36;
  v16[2] = v22;
  ++*((_DWORD *)this + 4);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_PARAV *)((char *)this + 72));
  v24 = (char *)this + 104;
  v25 = (_QWORD *)((char *)v21 + 120);
  v26 = *(_QWORD *)v24;
  if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 )
    __fastfail(3u);
  *v25 = v26;
  *((_QWORD *)v21 + 16) = v24;
  *(_QWORD *)(v26 + 8) = v25;
  *(_QWORD *)v24 = v25;
  *((_QWORD *)v23 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v23, 0LL);
  KeLeaveCriticalRegion();
  v31 = 0x2000;
  v38 = 0LL;
  v40 = L"GuestIoSpaceSizeInMb";
  v39 = 288;
  v41 = &v31;
  v42 = 67108868;
  v43 = &v31;
  v44 = 4;
  v45 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v38, 0LL, 0LL) >= 0 )
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 218) = (unsigned __int64)v31 << 20;
  a2->PartitionId = v22;
  v18[4] = v16;
  *((_QWORD *)v21 + 20) = v18;
  ObfDereferenceObject(v18);
  DXGK_VIRTUAL_GPU::ReportState(v21, v27, v28);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  return 0LL;
}

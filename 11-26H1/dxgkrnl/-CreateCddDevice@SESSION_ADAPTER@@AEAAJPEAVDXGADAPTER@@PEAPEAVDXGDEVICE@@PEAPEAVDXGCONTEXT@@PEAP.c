/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1403670F4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x140054CC8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140059D74 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x140395BC4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1403986D4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A19D8 (-DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A1ADC (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1403B3974 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        ADAPTER_RENDER **a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v6; // rcx
  struct DXGADAPTER *v8; // rbx
  struct _KPROCESS *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // eax
  ADAPTER_RENDER **v19; // r14
  struct DXGDEVICE **v20; // r13
  int Device; // eax
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // kr00_8
  __int64 v30; // rax
  __int64 i; // r12
  unsigned int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // ebx
  bool v35; // al
  unsigned int v36; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v37; // ebx
  struct DXGCONTEXT **v38; // r13
  unsigned int v39; // r8d
  unsigned __int8 v40; // al
  int Context; // eax
  DXGCONTEXT *v42; // rcx
  struct DXGHWQUEUE **v43; // r9
  int v44; // eax
  bool IsCoreResourceSharedOwner; // al
  struct DXGDEVICE *v46; // rdx
  ADAPTER_RENDER *v47; // rcx
  volatile signed __int64 **v48; // rax
  volatile signed __int64 *v49; // rax
  struct DXGHWQUEUE **v50; // rax
  struct DXGHWQUEUE *v51; // rcx
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  char v55; // [rsp+80h] [rbp-80h]
  struct _DXGKARG_QUERYADAPTERINFO v56; // [rsp+88h] [rbp-78h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v57; // [rsp+B8h] [rbp-48h] BYREF
  int v58; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v59; // [rsp+ECh] [rbp-14h]
  unsigned int v60; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v62; // [rsp+128h] [rbp+28h]
  _BYTE v63[88]; // [rsp+130h] [rbp+30h] BYREF
  DXGADAPTER *v64; // [rsp+188h] [rbp+88h]

  v6 = *((_QWORD *)this + 2);
  v62 = 0;
  v8 = (struct DXGADAPTER *)(v6 & -(__int64)(*(_QWORD *)(v6 + 3160) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, (struct DXGADAPTER *const)a2, v8);
  v9 = *(struct _KPROCESS **)(*(_QWORD *)this + 18656LL);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v62 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( Current )
  {
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    LODWORD(v19) = v18;
    if ( v18 < 0 )
    {
      if ( a2 == (ADAPTER_RENDER **)v8 || *((_DWORD *)a2 + 50) == 1 && !*((_BYTE *)a2 + 3057) )
      {
        WdLogSingleEntry4(3LL, a2, v8, Current, v18);
        WdLogGlobalForLineNumber = 2417;
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 2408;
        LODWORD(v19) = -1073741267;
      }
      goto LABEL_61;
    }
    v20 = (struct DXGDEVICE **)((char *)this + 56);
    Device = ADAPTER_RENDER::CreateDevice(a2[396], (char *)this + 56, 0LL, 2LL, v8, 0, 0, 1, 0LL, 0LL, 0);
    v19 = (ADAPTER_RENDER **)Device;
    if ( Device < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v22);
      WdLogSingleEntry3(2LL, a2, CurrentProcess, v19);
      WdLogGlobalForLineNumber = 2442;
      v25 = PsGetCurrentProcess(v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v25,
        (__int64)v19,
        0LL,
        0LL);
      goto LABEL_61;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v63);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v54, *v20);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    v19 = (ADAPTER_RENDER **)v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry3(4LL, a2, Current, v26);
      WdLogGlobalForLineNumber = 2568;
    }
    else
    {
      *((_DWORD *)this + 13) = 1;
      if ( !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
        goto LABEL_76;
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)a2);
      *((_DWORD *)this + 13) = NumDifferentPhysicalAdapters;
      if ( NumDifferentPhysicalAdapters <= 1 )
        goto LABEL_76;
      v29 = NumDifferentPhysicalAdapters;
      v28 = 8LL * NumDifferentPhysicalAdapters;
      if ( !is_mul_ok(v29, 8uLL) )
        v28 = -1LL;
      v30 = operator new[](v28, 0x4B677844u, 256LL);
      *((_QWORD *)this + 8) = v30;
      if ( v30 )
      {
LABEL_76:
        if ( PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v32 = *((_DWORD *)this + 13);
            if ( (unsigned int)i >= v32 )
              break;
            v33 = *((_DWORD *)a2 + 796);
            v59 = v33;
            v58 = 0;
            if ( v32 == 1 )
              v34 = *((_DWORD *)a2 + 797);
            else
              v34 = i;
            v60 = 1 << v34;
            if ( (*((_DWORD *)a2 + 111) & 0x10) != 0 )
            {
              memset(&v56, 0, 24);
              v56.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v56.OutputDataSize = 0LL;
              v56.pOutputData = &v58;
              v56.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v56) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2515;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2515LL, 0LL, 0LL, 0LL, 0LL);
              }
              v33 = v59;
            }
            v35 = ADAPTER_RENDER::NodeSupportsContextScheduling(a2[396], v34, v33);
            v37.0 = 0;
            if ( v35 )
              v37.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            v38 = (struct DXGCONTEXT **)((char *)this + 64);
            if ( *((_DWORD *)this + 13) != 1 )
              v38 = (struct DXGCONTEXT **)((char *)*v38 + 8 * i);
            v19 = (ADAPTER_RENDER **)*((_QWORD *)this + 7);
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(v19[2], 0, v36) || (v40 = 1, *((_BYTE *)a2 + 3080)) )
              v40 = 0;
            Context = DXGDEVICE::CreateContext((DXGDEVICE *)v19, v38, v39, v60, v37, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v40);
            LODWORD(v19) = Context;
            if ( Context < 0 )
            {
              WdLogSingleEntry3(4LL, a2, Current, Context);
              WdLogGlobalForLineNumber = 2541;
              break;
            }
            if ( v37.0 == 16 )
            {
              v42 = *v38;
              v43 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v57, 0, sizeof(v57));
              if ( (unsigned int)i < *((_DWORD *)this + 24) )
                v43 += i;
              v44 = DXGCONTEXT::CreateHwQueue(v42, &v57, 0LL, v43);
              LODWORD(v19) = v44;
              if ( v44 < 0 )
              {
                WdLogSingleEntry4(4LL, *v38, a2, Current, v44);
                WdLogGlobalForLineNumber = 2556;
                break;
              }
            }
          }
          v20 = (struct DXGDEVICE **)((char *)this + 56);
          goto LABEL_49;
        }
        WdLogSingleEntry2(4LL, a2, Current);
        WdLogGlobalForLineNumber = 2490;
      }
      else
      {
        WdLogSingleEntry3(4LL, a2, Current, v19);
        WdLogGlobalForLineNumber = 2478;
      }
      LODWORD(v19) = -1073741801;
    }
LABEL_49:
    if ( v55 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v54 + 136));
      KeLeaveCriticalRegion();
    }
    if ( (int)v19 >= 0 || !*v20 )
    {
      if ( a3 )
      {
        *a3 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 7) + 64LL));
      }
      if ( a4 )
      {
        v48 = (volatile signed __int64 **)((char *)this + 64);
        if ( *((_DWORD *)this + 13) != 1 )
          v48 = (volatile signed __int64 **)*v48;
        v49 = *v48;
        *a4 = (struct DXGCONTEXT *)v49;
        _InterlockedIncrement64(v49 + 4);
      }
      if ( a5 )
      {
        v50 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
        v51 = *v50;
        *a5 = *v50;
        if ( v51 )
          _InterlockedIncrement64((volatile signed __int64 *)v51 + 14);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
      if ( v62 )
        KeUnstackDetachProcess(&ApcState);
      return (unsigned int)v19;
    }
    IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(v64);
    v46 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    v47 = a2[396];
    if ( IsCoreResourceSharedOwner )
    {
      ADAPTER_RENDER::DestroyDevice(v47, v46, 0LL);
      if ( *((_DWORD *)this + 13) > 1u )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
        *((_QWORD *)this + 8) = 0LL;
      }
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
    }
    else
    {
      ADAPTER_RENDER::DestroyDeviceNoCoreAccess(v47, v46);
    }
    *((_QWORD *)this + 7) = 0LL;
LABEL_61:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return (unsigned int)v19;
  }
  v14 = PsGetCurrentProcess(v12);
  WdLogSingleEntry2(2LL, v14, -1073741823LL);
  WdLogGlobalForLineNumber = 2390;
  v16 = PsGetCurrentProcess(v15);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get DXGPROCESS for current CSRSS process 0x%I64x, returning 0x%I64x.",
    v16,
    -1073741823LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
  if ( v62 )
    KeUnstackDetachProcess(&ApcState);
  return 3221225473LL;
}

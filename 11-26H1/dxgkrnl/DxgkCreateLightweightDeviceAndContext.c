/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1401B5348
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x140054CC8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140059D74 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  struct DXGDEVICE *v4; // r15
  struct DXGDEVICE *v5; // r14
  struct DXGPROCESS *v6; // rbx
  struct DXGADAPTER *v8; // rsi
  char *v9; // r13
  struct DXGADAPTER **v10; // rax
  __int64 v11; // rdi
  struct DXGADAPTER *v12; // rdx
  __int64 v13; // rdi
  struct DXGADAPTER *v14; // rdx
  struct DXGADAPTER **v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int i; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 CurrentProcess; // rax
  __int64 v23; // rax
  int v24; // eax
  struct DXGADAPTER *v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  ADAPTER_RENDER *v28; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v29; // ebx
  unsigned __int8 v30; // al
  unsigned int v31; // r8d
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+30h] [rbp-D0h]
  int v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  _DWORD *v42; // [rsp+80h] [rbp-80h]
  struct DXGDEVICE *v43; // [rsp+88h] [rbp-78h] BYREF
  struct DXGCONTEXT *v44; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v45[2]; // [rsp+98h] [rbp-68h] BYREF
  struct DXGPROCESS *Current; // [rsp+A8h] [rbp-58h]
  _DWORD *v47; // [rsp+B0h] [rbp-50h]
  _BYTE v48[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v49; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v50[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v51[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v52[144]; // [rsp+110h] [rbp+10h] BYREF

  v42 = a3;
  *a2 = 0;
  *a3 = 0;
  v4 = 0LL;
  v47 = a2;
  v5 = 0LL;
  v44 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12850;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v45[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v45, a1);
  v8 = v45[0];
  if ( !v45[0] )
  {
    WdLogSingleEntry3(3LL, a1->HighPart, a1->LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 12864;
    goto LABEL_48;
  }
  if ( (*((_DWORD *)v45[0] + 111) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v45[0], -1073741811LL);
    WdLogGlobalForLineNumber = 12877;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_48:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v45, 0LL);
    return 3221225711LL;
  }
  v40 = 0LL;
  v9 = (char *)v6 + 216;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v6 + 216, 0LL);
    *((_QWORD *)v6 + 28) = KeGetCurrentThread();
    v38 = 0LL;
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v38);
    LODWORD(v11) = DxgkpGetPairingAdapters(v8, 0, v10, &v39, 0LL, 0LL, 0);
    if ( (int)v11 < 0 )
      goto LABEL_19;
    v12 = v38;
    if ( !v38 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12898;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 12898LL, 0LL, 0LL, 0LL, 0LL);
      v12 = v38;
    }
    if ( v40 == v12 )
    {
      LODWORD(v11) = -1073741275;
      WdLogSingleEntry3(1LL, v12, v8, -1073741275LL);
      WdLogGlobalForLineNumber = 12911;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v38,
        (__int64)v8,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v38, 0LL);
      *((_QWORD *)v6 + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v6 + 216, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_26;
    }
    v41 = *((_QWORD *)v12 + 396);
    v13 = v41 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v14 = v38;
    if ( v38 == v8 )
      goto LABEL_15;
    *(_QWORD *)v50 = 0LL;
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(v50);
    LODWORD(v11) = DxgkpGetPairingAdapters(v8, 0, v15, (unsigned __int64 *)v51, 0LL, 0LL, 0);
    if ( (int)v11 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v50, 0LL);
      goto LABEL_18;
    }
    v40 = v38;
    if ( v38 == *(struct DXGADAPTER **)v50 )
      break;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12939;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v50, 0LL);
    v16 = v41 + 24;
    *(_QWORD *)(v41 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v38, 0LL);
    *((_QWORD *)v6 + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 216, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v50, 0LL);
  v14 = v38;
LABEL_15:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v14, v8);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
  LODWORD(v11) = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(3LL, v38, v8, v17);
    WdLogGlobalForLineNumber = 12951;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
LABEL_18:
    v18 = v41 + 24;
    *(_QWORD *)(v41 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
LABEL_19:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v38, 0LL);
    *((_QWORD *)v6 + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 216, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_20;
  }
  for ( i = 0; ; i = (_DWORD)v40 + 1 )
  {
    LODWORD(v40) = i;
    if ( i > 1 )
      break;
    LOBYTE(v37) = 0;
    v20 = *((_QWORD *)v38 + 396);
    LOBYTE(v36) = i == 0;
    v5 = v4;
    LOBYTE(v35) = 0;
    LOBYTE(v34) = 0;
    v43 = 0LL;
    v21 = ADAPTER_RENDER::CreateDevice(v20, &v43, 0LL, 1LL, v8, v34, v35, v36, 0LL, 0LL, v37);
    v4 = v43;
    v11 = v21;
    if ( v21 >= 0 )
    {
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v52);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v4);
      v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52, 0LL);
      LODWORD(v11) = v24;
      if ( v24 < 0 )
      {
        WdLogSingleEntry3(3LL, v38, v8, v24);
        WdLogGlobalForLineNumber = 13023;
LABEL_42:
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
        break;
      }
      v25 = v38;
      *(_QWORD *)v50 = 0LL;
      v51[0] = 0;
      v26 = *((_DWORD *)v38 + 796);
      v50[1] = v26;
      v51[0] = 1;
      if ( (*((_DWORD *)v38 + 111) & 0x10) != 0 )
      {
        memset(&v49, 0, 24);
        v49.Type = DXGKQAITYPE_PREFERREDGPUNODE;
        *(_OWORD *)&v49.OutputDataSize = 0LL;
        v49.pOutputData = v50;
        v49.OutputDataSize = 12;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v38, &v49) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 13046;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 13046LL, 0LL, 0LL, 0LL, 0LL);
        }
        v26 = v50[1];
        v25 = v38;
      }
      v29.0 = 0;
      if ( ADAPTER_RENDER::NodeSupportsContextScheduling(*((ADAPTER_RENDER **)v25 + 396), 0, v26) )
        v29.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
      v30 = ADAPTER_RENDER::NodeSupportsGpuVa(v28, 0, v27);
      v32 = DXGDEVICE::CreateContext(v4, &v44, v31, v51[0], v29, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v30);
      LODWORD(v11) = v32;
      if ( v32 >= 0 )
        goto LABEL_42;
      WdLogSingleEntry2(4LL, v38, v32);
      WdLogGlobalForLineNumber = 13067;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess();
      WdLogSingleEntry3(2LL, v38, CurrentProcess, v11);
      WdLogGlobalForLineNumber = 12995;
      v23 = PsGetCurrentProcess();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)v38,
        v23,
        v11,
        0LL,
        0LL);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  v33 = v41 + 24;
  *(_QWORD *)(v41 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v33, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v38, 0LL);
  *((_QWORD *)Current + 28) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v11 >= 0 )
  {
    *v47 = *((_DWORD *)v4 + 117);
    *v42 = *((_DWORD *)v44 + 6);
    goto LABEL_23;
  }
LABEL_20:
  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v4 + 2), v4);
LABEL_23:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
  }
LABEL_26:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v45, 0LL);
  return (unsigned int)v11;
}

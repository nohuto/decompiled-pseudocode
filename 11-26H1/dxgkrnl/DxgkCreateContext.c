/*
 * XREFs of DxgkCreateContext @ 0x1403A3C90
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1403A61F0 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1403A76CC (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(struct DXGCONTEXT *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  unsigned int v4; // edi
  struct DXGDEVICE *v5; // r14
  unsigned int v6; // r8d
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rcx
  void *v14; // rdi
  __int64 v15; // rcx
  void *v16; // rax
  int v17; // edx
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // r13
  ADAPTER_RENDER **v21; // rcx
  int v22; // [rsp+50h] [rbp-198h] BYREF
  __int64 v23; // [rsp+58h] [rbp-190h]
  char v24; // [rsp+60h] [rbp-188h]
  struct DXGDEVICE *v25; // [rsp+68h] [rbp-180h] BYREF
  struct DXGCONTEXT *v26; // [rsp+70h] [rbp-178h] BYREF
  struct DXGDEVICE *v27; // [rsp+78h] [rbp-170h] BYREF
  int v28; // [rsp+80h] [rbp-168h]
  void *v29; // [rsp+88h] [rbp-160h]
  __int64 v30; // [rsp+90h] [rbp-158h]
  _BYTE v31[24]; // [rsp+98h] [rbp-150h] BYREF
  unsigned int v32[24]; // [rsp+B0h] [rbp-138h] BYREF
  _BYTE v33[160]; // [rsp+110h] [rbp-D8h] BYREF

  v26 = Src;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 28;
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
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    }
    return v4;
  }
  memset(v32, 0, sizeof(v32));
  RtlCopyFromUser(v32, Src, 0x60uLL);
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v32[0], Current, &v27);
  v5 = v27;
  if ( !v27 )
  {
    v4 = -1073741811;
    WdLogSingleEntry2(2LL, v32[0], -1073741811LL);
    WdLogGlobalForLineNumber = 53;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v32[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v25);
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 2504LL) & 1) != 0 )
  {
    GetHighestBitPos(v32[2]);
    if ( GetBitCount(v6) > 1 )
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, (unsigned int)v7, -1073741811LL);
      WdLogGlobalForLineNumber = 77;
      goto LABEL_31;
    }
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 296) )
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 85;
      goto LABEL_31;
    }
    if ( v32[1] >= *(unsigned __int16 *)(352 * v9 + *(_QWORD *)(v8 + 3032)) )
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, v32[1], -1073741811LL);
      WdLogGlobalForLineNumber = 93;
      goto LABEL_31;
    }
  }
  else if ( v32[1] || v32[2] )
  {
    v4 = -1073741811;
    WdLogSingleEntry3(3LL, v32[1], v32[2], -1073741811LL);
    WdLogGlobalForLineNumber = 65;
    goto LABEL_31;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v5);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v5, 0, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
  if ( v11 >= 0 )
  {
    v14 = 0LL;
    v29 = 0LL;
    if ( *(_QWORD *)&v32[4] )
    {
      if ( v32[6] )
      {
        v16 = (void *)operator new[](v32[6], 0x4B677844u, 256LL);
        v14 = v16;
        v29 = v16;
        if ( !v16 )
        {
          v4 = -1073741801;
          WdLogSingleEntry3(3LL, v5, v32[6], -1073741801LL);
          WdLogGlobalForLineNumber = 131;
          goto LABEL_30;
        }
        RtlCopyFromUser(v16, *(void **)&v32[4], v32[6]);
LABEL_40:
        v26 = 0LL;
        v11 = DXGDEVICE::CreateContext(
                v5,
                &v26,
                v32[1],
                v32[2],
                (struct _D3DDDI_CREATECONTEXTFLAGS)v32[3],
                v14,
                v32[6],
                (enum _D3DKMT_CLIENTHINT)v32[7],
                0);
        if ( v11 >= 0 )
        {
          v17 = *((_DWORD *)v26 + 6);
          v18 = *((_QWORD *)v26 + 7);
          v19 = *((_QWORD *)v26 + 6);
          v20 = *((_QWORD *)v26 + 11);
          v28 = *((_DWORD *)v26 + 18);
          v30 = *((_QWORD *)v26 + 15);
          LODWORD(v26) = *((_DWORD *)v26 + 26);
          RtlWriteULongToUser((_DWORD *)Src + 8, v17);
          RtlWriteULong64ToUser((_QWORD *)Src + 5, v18);
          RtlWriteULongToUser((_DWORD *)Src + 12, v19);
          RtlWriteULong64ToUser((_QWORD *)Src + 7, v20);
          RtlWriteULongToUser((_DWORD *)Src + 16, v28);
          RtlWriteULong64ToUser((_QWORD *)Src + 9, v30);
          RtlWriteULongToUser((_DWORD *)Src + 20, (int)v26);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
        v21 = (ADAPTER_RENDER **)v25;
        if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(v21[2], (struct DXGDEVICE *)v21);
        goto LABEL_21;
      }
    }
    else if ( !v32[6] )
    {
      goto LABEL_40;
    }
    v4 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)&v32[4], v32[6], -1073741811LL);
    WdLogGlobalForLineNumber = 119;
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    goto LABEL_31;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v25);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return (unsigned int)v11;
}

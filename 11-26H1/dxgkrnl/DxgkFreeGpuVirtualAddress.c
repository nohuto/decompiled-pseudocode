/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1403D1110
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226AA0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x140058FD8 (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x14018DB04 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(struct _D3DKMT_FREEGPUVIRTUALADDRESS *Src)
{
  char CurrentThreadPreviousMode; // di
  __int64 v3; // rcx
  struct _KTHREAD **Current; // r15
  struct _D3DKMT_FREEGPUVIRTUALADDRESS *v5; // rdi
  struct DXGADAPTER *v6; // rbx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  DXG_GUEST_VIRTUALGPU_VMBUS *v11; // r14
  unsigned __int64 Size; // rbx
  __int64 BaseAddress; // rdi
  int v14; // esi
  int HostProcess; // eax
  struct DXGADAPTER **v16; // rax
  int PairingAdapters; // esi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-118h] BYREF
  __int64 v21; // [rsp+58h] [rbp-110h]
  char v22; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v23; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v25; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v26[2]; // [rsp+80h] [rbp-E8h] BYREF
  struct _D3DKMT_FREEGPUVIRTUALADDRESS v27; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v28[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2099);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13486;
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
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v7;
  }
  memset(&v27, 0, sizeof(v27));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v5 = &v27;
    RtlCopyFromUser(&v27, Src, 0x18uLL);
  }
  else
  {
    v5 = Src;
  }
  v25 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v26, v5->hAdapter, Current, &v25, 1);
  v6 = v25;
  if ( !v25 )
  {
    v7 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v5->hAdapter);
    WdLogGlobalForLineNumber = 13521;
LABEL_18:
    if ( v26[0] )
      DXGADAPTER::ReleaseReference(v26[0]);
    goto LABEL_20;
  }
  v23 = 0LL;
  if ( *((_QWORD *)v25 + 396) )
  {
    v23 = v25;
    _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
    v24 = -1LL;
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v23, 0LL);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
    if ( v7 >= 0 )
    {
      if ( *((_BYTE *)v23 + 209) )
      {
        v11 = (struct DXGADAPTER *)((char *)v23 + 4712);
        Size = v5->Size;
        BaseAddress = v5->BaseAddress;
        v14 = *((_DWORD *)v23 + 1200);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
        v8 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(v11, HostProcess, v14, BaseAddress, Size);
      }
      else
      {
        v8 = VIDMM_EXPORT::VidMmFreeGpuVirtualAddress(
               *(VIDMM_EXPORT **)(*((_QWORD *)v23 + 396) + 760LL),
               *(struct VIDMM_GLOBAL **)(*((_QWORD *)v23 + 396) + 768LL),
               (struct DXGPROCESS *)Current,
               v5);
      }
      v7 = v8;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
    if ( v23 )
      DXGADAPTER::ReleaseReference(v23);
    v23 = 0LL;
    goto LABEL_18;
  }
  v16 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v23);
  PairingAdapters = DxgkpGetPairingAdapters(v6, 0, v16, &v24, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
    goto LABEL_11;
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 13534;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v23, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v26, v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
  return (unsigned int)PairingAdapters;
}

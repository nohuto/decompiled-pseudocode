/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x14002C758
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1400FC140 (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x14011B4A0 (VidSchCreateHwContext.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U-$_tlgWrapperByVal@$00@@U-$.c)
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140008F64 (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140008F80 (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     VidSchTerminateHwContext @ 0x140026780 (VidSchTerminateHwContext.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14002CD84 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140043428 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x14004CABC (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x14005623C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x14011C670 (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r14
  __int64 Pool2; // rax
  char v8; // di
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r13
  struct DXGPROCESS *Current; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  struct _VIDSCH_DEVICE **v19; // rdx
  struct _VIDSCH_DEVICE *v20; // rax
  __int64 v21; // rax
  void *v22; // r15
  struct _RTL_BALANCED_NODE *v23; // rsi
  __int64 v24; // r8
  struct _RTL_BALANCED_NODE *v25; // rax
  __int64 v26; // r8
  struct _RTL_BALANCED_NODE *v27; // r15
  struct _RTL_BALANCED_NODE *v28; // rsi
  struct _RTL_BALANCED_NODE *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // r9d
  __int64 v34; // rax
  bool v35; // cf
  __int64 v36; // rax
  __int64 v37; // rax
  ADAPTER_RENDER *v38; // rcx
  void *v39; // rdx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r10d
  __int64 v45; // rdx
  KSPIN_LOCK_QUEUE v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // rcx
  __int64 v51; // r11
  _BYTE v52[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v53; // [rsp+82h] [rbp-7Eh] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+94h] [rbp-6Ch] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  void *v59; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  _DXGKARG_CREATECONTEXT v61; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+110h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  Pool2 = ExAllocatePool2(64LL, 424LL, 1667328342LL);
  v8 = 0;
  v9 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2823;
    return 0LL;
  }
  v10 = *(_OWORD *)a2;
  v11 = *(__int64 **)(v3 + 696);
  v12 = *((_OWORD *)a2 + 1);
  *(_DWORD *)Pool2 = 1667328342;
  *(_OWORD *)(Pool2 + 56) = v10;
  *(_QWORD *)(Pool2 + 24) = a3;
  *(_OWORD *)(Pool2 + 72) = v12;
  *(_QWORD *)(Pool2 + 8) = a1;
  *(_DWORD *)(Pool2 + 88) = *((_DWORD *)a2 + 8);
  v13 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v13 < *(_DWORD *)(v3 + 768) )
    v11 += v13;
  v14 = *v11;
  *(_QWORD *)(v9 + 16) = *v11;
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(v9 + 320) = 0LL;
  *(_BYTE *)(v9 + 149) = BYTE1(*((_DWORD *)Current + 102)) & 1;
  *(_OWORD *)(v9 + 344) = 0LL;
  *(_OWORD *)(v9 + 360) = 0LL;
  *(_OWORD *)(v9 + 376) = 0LL;
  *(_QWORD *)(v9 + 392) = 0LL;
  KeInitializeEvent((PRKEVENT)(v9 + 344), SynchronizationEvent, 0);
  *(_QWORD *)(v9 + 408) = v9 + 400;
  *(_QWORD *)(v9 + 400) = v9 + 400;
  *(_QWORD *)(v9 + 304) = v9 + 296;
  *(_QWORD *)(v9 + 296) = v9 + 296;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v9);
  SpinLock = (PKSPIN_LOCK)(v3 + 2016);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 2016), &LockHandle);
  v16 = *(_QWORD **)(v14 + 1720);
  v17 = (_QWORD *)(v9 + 280);
  if ( *v16 != v14 + 1712
    || (*v17 = v14 + 1712,
        *(_QWORD *)(v9 + 288) = v16,
        *v16 = v17,
        *(_QWORD *)(v14 + 1720) = v17,
        v19 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 13),
        v20 = (struct _VIDSCH_DEVICE *)(v9 + 264),
        *v19 != (struct _VIDSCH_DEVICE *)((char *)a1 + 96)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v20 = (char *)a1 + 96;
  *(_QWORD *)(v9 + 272) = v19;
  *v19 = v20;
  *((_QWORD *)a1 + 13) = v20;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(v9 + 48) = *((_QWORD *)a3 + 23);
    v21 = *((_QWORD *)a3 + 59);
    *(_QWORD *)(v9 + 32) = v21;
    *(_QWORD *)(v21 + 8) = v9;
    goto LABEL_13;
  }
  v30 = ExAllocatePool2(64LL, 16LL, 1265072196LL);
  *(_QWORD *)(v9 + 32) = v30;
  if ( !v30 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2901;
LABEL_36:
    VidSchTerminateHwContext((PVOID)v9);
    return 0LL;
  }
  *(_BYTE *)(v9 + 150) = 1;
  *(_QWORD *)(v30 + 8) = v9;
  memset(&v61, 0, sizeof(v61));
  v31 = *(_QWORD *)(v9 + 16);
  v32 = *(_QWORD *)(v3 + 696);
  v33 = *(_DWORD *)(v3 + 768);
  v61.hContext = *(HANDLE *)(v9 + 32);
  v34 = *(unsigned __int16 *)(v31 + 4);
  v35 = (unsigned int)v34 < v33;
  v36 = v32 + 8 * v34;
  if ( !v35 )
    v36 = v32;
  v61.NodeOrdinal = *(unsigned __int16 *)(*(_QWORD *)v36 + 8LL);
  v37 = *(unsigned __int16 *)(v31 + 4);
  if ( (unsigned int)v37 < v33 )
    v32 += 8 * v37;
  v38 = *(ADAPTER_RENDER **)(v3 + 8);
  v61.EngineAffinity = 1 << *(_BYTE *)(*(_QWORD *)v32 + 6LL);
  v39 = (void *)*((_QWORD *)a1 + 3);
  v61.Flags.Value = (v61.Flags.Value & 0xFFFFFFF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2)) ^ ((*(_BYTE *)&v61.Flags.0 & 0xF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2)) ^ (unsigned __int8)(4 * *(_BYTE *)(352LL * *(unsigned __int16 *)(v14 + 6) + *(_QWORD *)(*((_QWORD *)v38 + 2) + 3032LL) + 48))) & 4;
  if ( (int)ADAPTER_RENDER::DdiCreateContext(v38, v39, &v61) < 0 )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + 412LL);
    if ( (unsigned int)dword_14008A048 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14008A048, 0x400000000000LL) )
      {
        v45 = *(_QWORD *)(v9 + 24);
        v53 = 0;
        v46 = *(KSPIN_LOCK_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 40LL) + 64LL) + 144LL);
        p_LockHandle = &LockHandle;
        v47 = *(_QWORD *)(v9 + 8);
        LockHandle.LockQueue = v46;
        v48 = *(_QWORD *)(v47 + 48);
        v59 = *(void **)(v48 + 2648);
        v52[0] = *(_BYTE *)(v45 + 144);
        v60 = v54;
        v55 = *(_DWORD *)(v43 + 424);
        v56 = *(_DWORD *)(v43 + 420);
        LODWORD(v54) = v44;
        SpinLock = (PKSPIN_LOCK)0x1000000;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
          v48,
          (__int64)&unk_14007E595,
          v42,
          v43,
          (__int64)&SpinLock,
          (__int64)&v54,
          (__int64)&v56,
          (__int64)&v55,
          (__int64)&v60,
          (__int64)v52,
          &v59,
          (__int64 *)&p_LockHandle,
          (__int64)&v53);
      }
    }
    goto LABEL_36;
  }
  v49 = bTracingEnabled == 0;
  LODWORD(v50) = v61.hContext;
  *(_QWORD *)(v9 + 48) = v61.hContext;
  if ( v49 )
    goto LABEL_42;
  v51 = *((_QWORD *)a1 + 1);
  if ( !v51 )
    LODWORD(v51) = (_DWORD)a1;
  if ( (byte_14008A201 & 8) != 0 )
  {
    McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
      v61.ContextInfo.AllocationListSize,
      (unsigned int)&EventCreateContext,
      v61.ContextInfo.DmaBufferPrivateDataSize,
      v51,
      v61.NodeOrdinal,
      v61.EngineAffinity,
      v61.ContextInfo.DmaBufferSize,
      v61.ContextInfo.DmaBufferSegmentSet,
      v61.ContextInfo.DmaBufferPrivateDataSize,
      v61.ContextInfo.AllocationListSize,
      v61.ContextInfo.PatchLocationListSize,
      (2 * ((*(_DWORD *)(*(_QWORD *)(v9 + 8) + 56LL) & 0x10) != 0)) | 1,
      v9);
    v50 = *(_QWORD *)(v9 + 48);
LABEL_42:
    if ( (byte_14008A201 & 8) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v50, v40, v41, v9, v9, v50, *(_QWORD *)(v9 + 32));
  }
LABEL_13:
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v22 = *(void **)(v9 + 32);
  v23 = *(struct _RTL_BALANCED_NODE **)(v14 + 1752);
  LOBYTE(v24) = 0;
  if ( !v23 )
    goto LABEL_20;
  while ( (int)DxgkrnlContextHandleCompareFunction(v22, v23) < 0 )
  {
    v25 = v23->Children[0];
    if ( !v23->Children[0] )
    {
      LOBYTE(v24) = 0;
      goto LABEL_20;
    }
LABEL_16:
    v23 = v25;
  }
  v25 = v23->Children[1];
  if ( v25 )
    goto LABEL_16;
  LOBYTE(v24) = 1;
LABEL_20:
  RtlAvlInsertNodeEx(v14 + 1752, v23, v24, v9 + 160);
  v27 = *(struct _RTL_BALANCED_NODE **)(v9 + 48);
  v28 = *(struct _RTL_BALANCED_NODE **)(v14 + 1760);
  if ( v28 )
  {
    while ( 1 )
    {
      if ( (int)KmdContextHandleCompareFunction(v27, v28) < 0 )
      {
        v29 = v28->Children[0];
        if ( !v28->Children[0] )
          break;
      }
      else
      {
        v29 = v28->Children[1];
        if ( !v29 )
        {
          v8 = 1;
          break;
        }
      }
      v28 = v29;
    }
  }
  LOBYTE(v26) = v8;
  RtlAvlInsertNodeEx(v14 + 1760, v28, v26, v9 + 184);
  *(_BYTE *)(v9 + 151) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiUpdateDdiHwContextPriority((struct VIDSCH_HW_CONTEXT *)v9);
  return (struct VIDSCH_HW_CONTEXT *)v9;
}

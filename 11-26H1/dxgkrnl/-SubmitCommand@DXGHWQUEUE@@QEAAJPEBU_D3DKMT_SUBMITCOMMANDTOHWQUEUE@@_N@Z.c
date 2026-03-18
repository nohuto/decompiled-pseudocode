/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402F9E60
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x14007C840 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x140192CDC (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402FA8D0 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        DXGHWQUEUE *this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  __int64 v5; // rcx
  int v6; // r13d
  __int64 PrivateDriverDataSize; // rax
  __int64 v8; // r15
  unsigned int *v9; // rdi
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // r8d
  bool v16; // al
  int v17; // eax
  unsigned __int64 NumPrimaries; // r12
  struct _LOOKASIDE_LIST_EX *v19; // r12
  _DWORD *v20; // rax
  _DWORD *v21; // rcx
  UINT v22; // eax
  void *pPrivateDriverData; // rdx
  size_t v24; // r8
  void *v25; // rcx
  UINT v26; // r12d
  ADAPTER_RENDER *v27; // r13
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  char *Pool2; // rax
  void *WrittenPrimaries; // rax
  void *v36; // rcx
  UINT i; // r13d
  struct VIDMM_ALLOC *v38; // r9
  __int64 v39; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v41; // r8
  bool v42; // [rsp+20h] [rbp-2E8h]
  __int64 v44; // [rsp+58h] [rbp-2B0h]
  void *v45; // [rsp+58h] [rbp-2B0h]
  PVOID Entry; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-298h]
  DXGHWQUEUE *v48; // [rsp+78h] [rbp-290h]
  void *v49; // [rsp+80h] [rbp-288h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v50; // [rsp+90h] [rbp-278h] BYREF
  PVOID P; // [rsp+2C0h] [rbp-48h]
  char v52[8]; // [rsp+2C8h] [rbp-40h] BYREF
  int v53; // [rsp+2D0h] [rbp-38h]

  v48 = this;
  LODWORD(v44) = 0x8000000;
  v5 = *((_QWORD *)this + 2);
  v6 = 4 * (*(_DWORD *)(v5 + 392) & 0x20);
  HIDWORD(v44) = v6;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize > *(_DWORD *)(v5 + 208) )
  {
    WdLogSingleEntry2(1LL, PrivateDriverDataSize, *(unsigned int *)(v5 + 208));
    WdLogGlobalForLineNumber = 1619;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PrivateDriverDataSize > m_ContextInfo.DmaBufferPrivateDataSize 0x%I64x, 0x%I64x",
      a2->PrivateDriverDataSize,
      *(unsigned int *)(*((_QWORD *)this + 2) + 208LL),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v47 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL);
  v8 = v47;
  v9 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v47 + 1424));
  Entry = v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v47 + 16);
    v11 = *(int *)(v10 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v10 + 296);
    v12 = *(int *)(v10 + 2776) >= 0x2000 || *(_BYTE *)(v10 + 3076)
        ? *(_DWORD *)(v10 + 2984) * (72 * v11 + 224) + 8 * v11 + 624
        : 1304;
    memset(v9, 0, v12);
    v13 = *(_QWORD *)(v47 + 16);
    v14 = *(int *)(v13 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v13 + 296);
    v15 = *(_DWORD *)(v13 + 2984);
    v16 = *(int *)(v13 + 2776) >= 0x2000 || *(_BYTE *)(v13 + 3076);
    *((_BYTE *)v9 + 356) = v16;
    if ( v16 )
    {
      v9[151] = v15;
      v9[152] = v14;
      v9[153] = v15 * (72 * v14 + 224) + 24;
      v17 = v15 * (72 * v14 + 224) + 624;
      v9[138] = v17;
      v9[139] = v17 + 8 * v14;
    }
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1626;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      1626LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
    return 3221225495LL;
  }
  *(_QWORD *)v9 = v44;
  P = 0LL;
  v53 = 0;
  v45 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( (_DWORD)NumPrimaries )
  {
    if ( !a3 )
    {
      WrittenPrimaries = (void *)a2->WrittenPrimaries;
      goto LABEL_52;
    }
    if ( (unsigned int)NumPrimaries > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / NumPrimaries < 4 )
        goto LABEL_47;
      Pool2 = (char *)ExAllocatePool2(256LL, 4 * NumPrimaries, 1265072196LL);
      P = Pool2;
    }
    else
    {
      P = v52;
      memset(v52, 0, 4 * NumPrimaries);
      Pool2 = v52;
    }
    v53 = NumPrimaries;
    if ( Pool2 )
    {
      RtlCopyFromUser(Pool2, (void *)a2->WrittenPrimaries, 4 * NumPrimaries);
      WrittenPrimaries = P;
LABEL_52:
      v49 = WrittenPrimaries;
      v45 = WrittenPrimaries;
      goto LABEL_15;
    }
LABEL_47:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1643;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate WrittenPrimariesLocal",
      1643LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_50;
  }
LABEL_15:
  if ( !a2->PrivateDriverDataSize )
    goto LABEL_20;
  v19 = *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)this + 2) + 488LL);
  v20 = ExAllocateFromLookasideListEx(v19);
  v21 = v20;
  if ( !v20 )
  {
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
LABEL_50:
    P = 0LL;
    v53 = 0;
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&Entry);
    return 3221225495LL;
  }
  *((_QWORD *)v9 + 2) = v20;
  v22 = a2->PrivateDriverDataSize;
  *(_QWORD *)v21 = v19;
  v21[2] = v22;
  v21[3] = 1;
  pPrivateDriverData = a2->pPrivateDriverData;
  v24 = a2->PrivateDriverDataSize;
  v25 = (void *)(*((_QWORD *)v9 + 2) + 16LL);
  if ( a3 )
    RtlCopyFromUser(v25, pPrivateDriverData, v24);
  else
    memmove(v25, pPrivateDriverData, v24);
LABEL_20:
  if ( (v6 & 0x80u) != 0 )
  {
    LODWORD(v28) = CheckNoKmdAccessPrivateData(
                     a2->PrivateDriverDataSize,
                     (_DWORD *)(*((_QWORD *)v9 + 2) + 16LL),
                     0xFF000002);
    if ( (int)v28 >= 0 )
      goto LABEL_24;
  }
  else
  {
    v26 = a2->PrivateDriverDataSize;
    if ( !v26 )
      goto LABEL_24;
    v27 = *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( !*(_QWORD *)(*((_QWORD *)v27 + 2) + 1360LL) )
      goto LABEL_24;
    *(&v50.ContextCount + 1) = 0;
    memset(&v50.Context[1], 0, 0x1F8uLL);
    v50.Flags.Value = 1;
    v50.Commands = a2->CommandBuffer;
    v50.CommandLength = a2->CommandLength;
    v50.ContextCount = 1;
    v50.Context[0] = (HANDLE)*((_QWORD *)this + 4);
    v50.pPrivateDriverData = (void *)(*((_QWORD *)v9 + 2) + 16LL);
    v50.PrivateDriverDataSize = v26;
    v50.UmdPrivateDataSize = v26;
    v50.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
    LODWORD(v28) = ADAPTER_RENDER::DdiValidateSubmitCommand(v27, &v50);
    if ( (int)v28 >= 0 )
    {
LABEL_24:
      *((_QWORD *)v9 + 5) = a2->CommandBuffer;
      v9[13] = a2->CommandLength;
      v9[20] = a2->PrivateDriverDataSize;
      *((_QWORD *)v9 + 62) = a2->HwQueueProgressFenceId;
      v9[126] = 1;
      *((_QWORD *)v9 + 65) = *((_QWORD *)this + 8);
      *((_QWORD *)v9 + 64) = *((_QWORD *)this + 9);
      v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      v42 = 1;
      LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(v29 + 760) + 8LL)
                                                                               + 816LL))(
                       *(_QWORD *)(v29 + 768),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                       a2->NumPrimaries,
                       v45);
      if ( (int)v28 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1751;
      }
      else
      {
        v30 = *((_QWORD *)v9 + 2);
        if ( v30 )
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 12));
        *((_QWORD *)v9 + 68) = ++*((_QWORD *)this + 11);
        v31 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                                                        + 736LL)
                                                                            + 8LL)
                                                                + 456LL))(
                *((_QWORD *)this + 6),
                v9);
        v28 = v31;
        if ( v31 < 0 )
        {
          v36 = (void *)*((_QWORD *)v9 + 2);
          if ( v36 )
            CRefCountedBuffer::RefCountedBufferRelease(v36);
          for ( i = 0; i < a2->NumPrimaries; ++i )
          {
            v38 = *(struct VIDMM_ALLOC **)&v9[2 * i + 52];
            if ( v38 )
            {
              v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                *(VIDMM_EXPORT **)(v39 + 760),
                *(struct VIDMM_GLOBAL **)(v39 + 768),
                0,
                v38,
                v42,
                v9 + 84);
            }
          }
          WdLogSingleEntry2(3LL, this, v28);
          WdLogGlobalForLineNumber = 1804;
        }
      }
      goto LABEL_28;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1727;
  }
LABEL_28:
  v32 = *((_QWORD *)v9 + 2);
  if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)v32 )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v32, (PVOID)v32);
    else
      ExFreePoolWithTag((PVOID)v32, 0);
  }
  if ( P != v52 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v53 = 0;
  if ( *((_BYTE *)v9 + 356) && (v9[84] || v9[154]) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
    v41 = v9[84];
    if ( IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry5(0LL, 275LL, 57LL, v9, v41, v9[154]);
      WdLogGlobalForLineNumber = 8482;
    }
    else
    {
      WdLogSingleEntry3(2LL, v9, v41, v9[154]);
      WdLogGlobalForLineNumber = 8490;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"dxgkrnl has detected a present queue reference leak.",
        (__int64)v9,
        v9[84],
        v9[154],
        0LL,
        0LL);
    }
  }
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v8 + 1424), v9);
  return (unsigned int)v28;
}

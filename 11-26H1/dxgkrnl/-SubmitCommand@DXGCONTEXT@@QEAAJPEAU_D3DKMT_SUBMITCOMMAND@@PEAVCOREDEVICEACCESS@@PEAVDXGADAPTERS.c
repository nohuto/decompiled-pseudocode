/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1400135C8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x14007C840 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140080418 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402970A4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402FA8D0 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        PLOOKASIDE_LIST_EX *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        char a8)
{
  UINT v10; // r15d
  __int64 Flags; // rdx
  int v12; // r12d
  __int64 BroadcastContextCount; // r13
  __int64 v14; // rax
  __int64 PrivateDriverDataSize; // rcx
  __int64 v16; // rdi
  unsigned int *v17; // rsi
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // r8d
  bool v24; // al
  int v25; // eax
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  int v28; // ecx
  __int64 v29; // r12
  __int64 i; // rdi
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 k; // rdx
  __int64 v36; // rax
  UINT v37; // ecx
  int v38; // eax
  unsigned int v39; // edi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdi
  void *v43; // rcx
  __int64 j; // rdi
  struct VIDMM_ALLOC *v45; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v47; // r8
  bool v48; // [rsp+20h] [rbp-558h]
  int v49; // [rsp+A0h] [rbp-4D8h]
  __int64 v50; // [rsp+A8h] [rbp-4D0h]
  __int64 v51; // [rsp+A8h] [rbp-4D0h]
  __int64 v52; // [rsp+B0h] [rbp-4C8h]
  PVOID Entry[2]; // [rsp+C8h] [rbp-4B0h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v54; // [rsp+D8h] [rbp-4A0h]
  struct COREDEVICEACCESS *v55; // [rsp+E0h] [rbp-498h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v56; // [rsp+F0h] [rbp-488h] BYREF

  v54 = a4;
  v55 = a3;
  v10 = 0;
  Flags = (unsigned int)a2->Flags;
  v12 = (Flags & 1 | 0x1000) << 15;
  LODWORD(v50) = v12;
  HIDWORD(v50) = 32 * (Flags & 4);
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v14 = *((unsigned int *)this + 52);
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize > (unsigned int)v14 )
  {
    WdLogSingleEntry2(3LL, a2->PrivateDriverDataSize, v14);
    WdLogGlobalForLineNumber = 2137;
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v12 |= 0xA0u;
    LODWORD(v50) = v12;
    v38 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1u, a3);
    v39 = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v38);
      WdLogGlobalForLineNumber = 2156;
      return v39;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(PrivateDriverDataSize, Flags, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventRender);
    }
  }
  v16 = *(_QWORD *)&this[2]->L.Depth;
  v52 = v16;
  Entry[1] = (PVOID)v16;
  v17 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v16 + 1424));
  Entry[0] = v17;
  if ( v17 )
  {
    v18 = *(_QWORD *)(v16 + 16);
    v19 = *(int *)(v18 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v18 + 296);
    v20 = *(int *)(v18 + 2776) >= 0x2000 || *(_BYTE *)(v18 + 3076)
        ? *(_DWORD *)(v18 + 2984) * (72 * v19 + 224) + 8 * v19 + 624
        : 1304;
    memset(v17, 0, v20);
    v21 = *(_QWORD *)(v16 + 16);
    v22 = *(int *)(v21 + 2776) < 0x2000 ? 1 : *(_DWORD *)(v21 + 296);
    v23 = *(_DWORD *)(v21 + 2984);
    v24 = *(int *)(v21 + 2776) >= 0x2000 || *(_BYTE *)(v21 + 3076);
    *((_BYTE *)v17 + 356) = v24;
    if ( v24 )
    {
      v17[151] = v23;
      v17[152] = v22;
      v17[153] = v23 * (72 * v22 + 224) + 24;
      v25 = v23 * (72 * v22 + 224) + 624;
      v17[138] = v25;
      v17[139] = v25 + 8 * v22;
    }
  }
  if ( !v17 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2199;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      2199LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  *(_QWORD *)v17 = v50;
  if ( (v12 & 0x20) != 0 )
  {
    v40 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v40 = 3072;
    *v17 = v12 & 0xFFFFFBFF | v40;
    if ( this[2][19].L.ListEntry.Blink != *(struct _LIST_ENTRY **)(*(_QWORD *)&this[2]->L.Depth + 16LL) )
      v17[29] = 0;
  }
  if ( *((_DWORD *)this + 52) )
  {
    v26 = *(_DWORD **)(*(_QWORD *)&this[2]->L.Depth + 16LL);
    if ( !a2->PrivateDriverDataSize && v26[580] < 0x8000u && (v26[105] == 4318 || (v26[111] & 0x10) != 0) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2233;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
      return 3221225485LL;
    }
    v27 = ExAllocateFromLookasideListEx(this[61]);
    if ( v27 )
    {
      *((_QWORD *)v17 + 2) = v27;
      v28 = *((_DWORD *)this + 52);
      *(_QWORD *)v27 = this[61];
      v27[2] = v28;
      v27[3] = 1;
      if ( a8 )
        RtlCopyFromUser((void *)(*((_QWORD *)v17 + 2) + 16LL), a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      else
        memmove((void *)(*((_QWORD *)v17 + 2) + 16LL), a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      goto LABEL_25;
    }
LABEL_46:
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
    return 3221225495LL;
  }
LABEL_25:
  *((_QWORD *)v17 + 5) = a2->Commands;
  v17[13] = a2->CommandLength;
  v17[19] = *((_DWORD *)this + 52);
  v17[20] = a2->PrivateDriverDataSize;
  v29 = BroadcastContextCount;
  v51 = BroadcastContextCount;
  if ( (*(_DWORD *)&a2->Flags & 4) == 0 )
  {
    if ( !*((_DWORD *)this + 52) || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 16LL) + 1360LL) )
    {
LABEL_28:
      v48 = BroadcastContextCount;
      LODWORD(BroadcastContextCount) = (*(__int64 (__fastcall **)(_QWORD, PLOOKASIDE_LIST_EX, _QWORD, D3DKMT_HANDLE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 760LL) + 8LL) + 816LL))(
                                         *(_QWORD *)(*(_QWORD *)&this[2]->L.Depth + 768LL),
                                         this[2],
                                         a2->NumPrimaries,
                                         a2->WrittenPrimaries);
      if ( (int)BroadcastContextCount < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2319;
      }
      else
      {
        *((_QWORD *)v17 + 43) = a6;
        v17[88] = a7;
        v49 = 0;
        for ( i = 0LL; i < v29; ++i )
        {
          v31 = *((_QWORD *)v17 + 2);
          if ( v31 )
            _InterlockedIncrement((volatile signed __int32 *)(v31 + 12));
          if ( *((struct _KTHREAD **)a5[i] + 56) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2343;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              2343LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2]->L.Depth
                                                                                          + 736LL)
                                                                              + 8LL)
                                                                  + 448LL))(
                  *((_QWORD *)a5[i] + 32),
                  v17);
          BroadcastContextCount = v32;
          if ( v32 < 0 )
          {
            v43 = (void *)*((_QWORD *)v17 + 2);
            if ( v43 )
              CRefCountedBuffer::RefCountedBufferRelease(v43);
            j = v49;
            if ( v49 >= 0 )
            {
              do
                VIDSCH_EXPORT::VidSchFlushPendingCommand(
                  *(VIDSCH_EXPORT **)(*(_QWORD *)&this[2]->L.Depth + 736LL),
                  *((struct _VIDSCH_CONTEXT **)a5[j--] + 32));
              while ( j >= 0 );
              v29 = v51;
              LODWORD(j) = v49;
            }
            for ( j = (int)j; j < v29; ++j )
            {
              if ( a2->NumPrimaries )
              {
                do
                {
                  v45 = *(struct VIDMM_ALLOC **)&v17[2 * v10 + 52];
                  if ( v45 )
                    VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                      *(VIDMM_EXPORT **)(*(_QWORD *)&this[2]->L.Depth + 760LL),
                      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)a5[j] + 2) + 16LL) + 768LL),
                      0,
                      v45,
                      v48,
                      v17 + 84);
                  ++v10;
                }
                while ( v10 < a2->NumPrimaries );
                v10 = 0;
                v29 = v51;
              }
            }
            WdLogSingleEntry2(3LL, this, BroadcastContextCount);
            WdLogGlobalForLineNumber = 2397;
            goto LABEL_38;
          }
          *v17 &= ~0x800u;
          ++v49;
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(&v56, 0, sizeof(v56));
          v56.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v56.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v41 = SubmitPresentHistoryToken(&v56, v55, v54, 0LL, 0, 0LL, 0LL, 0LL, (struct DXGCONTEXT *)this, 0LL, 0LL);
          LODWORD(BroadcastContextCount) = v41;
          if ( (int)(v41 + 0x80000000) >= 0 && v41 != -1073741130 )
          {
            WdLogSingleEntry2(3LL, this, v41);
            WdLogGlobalForLineNumber = 2436;
            LODWORD(BroadcastContextCount) = 0;
          }
        }
LABEL_38:
        v16 = v52;
      }
      goto LABEL_39;
    }
    HIDWORD(v56.CompositionBindingId) = 0;
    memset((char *)&v56.Token.Gdi.hLogicalSurface + 4, 0, 0x21CuLL);
    *(_QWORD *)&v56.Model = a2->Commands;
    LODWORD(v56.CompositionBindingId) = a2->CommandLength;
    LODWORD(v56.Token.Flip.FenceValue) = BroadcastContextCount;
    if ( (int)BroadcastContextCount > 0 )
    {
      for ( k = 0LL; k < BroadcastContextCount; ++k )
        *(&v56.Token.Flip.hLogicalSurface + k) = *((_QWORD *)a5[k] + 23);
    }
    *((_QWORD *)&v56.Token.SurfaceComplete + 65) = *((_QWORD *)v17 + 2) + 16LL;
    *((_DWORD *)&v56.Token.SurfaceComplete + 132) = *((_DWORD *)this + 52);
    *((_DWORD *)&v56.Token.SurfaceComplete + 133) = a2->PrivateDriverDataSize;
    LODWORD(BroadcastContextCount) = ADAPTER_RENDER::DdiValidateSubmitCommand(
                                       *(ADAPTER_RENDER **)&this[2]->L.Depth,
                                       (struct _DXGKARG_VALIDATESUBMITCOMMAND *)&v56);
    if ( (int)BroadcastContextCount >= 0 )
    {
      LOBYTE(BroadcastContextCount) = v29;
      goto LABEL_28;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2304;
    goto LABEL_39;
  }
  v36 = *((_QWORD *)v17 + 2);
  v37 = a2->PrivateDriverDataSize;
  if ( !v37 )
    goto LABEL_56;
  if ( v37 >= 0x108 )
  {
    if ( *(_DWORD *)(v36 + 16) == -16777214 && *(_DWORD *)(v36 + 276) == -16777213 )
    {
LABEL_56:
      LODWORD(BroadcastContextCount) = 0;
      goto LABEL_57;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 396;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid private driver data tag for NoKmdAccess: %I64d",
      4278190082LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(BroadcastContextCount) = -1073741811;
  }
  else
  {
    v42 = a2->PrivateDriverDataSize;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 390;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid private driver data size for NoKmdAccess: %I64d",
      v42,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(BroadcastContextCount) = -1073741811;
    v16 = v52;
  }
LABEL_57:
  if ( (int)BroadcastContextCount >= 0 )
  {
    LOBYTE(BroadcastContextCount) = v29;
    goto LABEL_28;
  }
LABEL_39:
  v33 = *((_QWORD *)v17 + 2);
  if ( v33 && _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 12), 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)v33 )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v33, (PVOID)v33);
    else
      ExFreePoolWithTag((PVOID)v33, 0);
  }
  if ( *((_BYTE *)v17 + 356) && (v17[84] || v17[154]) )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
    v47 = v17[84];
    if ( IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry5(0LL, 275LL, 57LL, v17, v47, v17[154]);
      WdLogGlobalForLineNumber = 8482;
    }
    else
    {
      WdLogSingleEntry3(2LL, v17, v47, v17[154]);
      WdLogGlobalForLineNumber = 8490;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"dxgkrnl has detected a present queue reference leak.",
        (__int64)v17,
        v17[84],
        v17[154],
        0LL,
        0LL);
    }
  }
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v16 + 1424), v17);
  return (unsigned int)BroadcastContextCount;
}

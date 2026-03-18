/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1402FF7F4
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402FF670 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x14005C194 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqddpqqqqq_EtwWriteTransfer @ 0x14005C3E0 (McTemplateK0pqddpqqqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1402FFC3C (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1402FFE44 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v6; // r13
  BOOL bGlobalMetaData; // eax
  BOOL bProducer; // ecx
  __int64 *v11; // rsi
  char *v12; // r12
  char *v13; // r14
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rcx
  BOOL *p_bSetMetaData; // rsi
  struct AUTOEXPANDALLOCATION *v18; // rdx
  int MetaDataInternal; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  UINT BufferSize; // r8d
  DXGSWAPCHAIN *v24; // rcx
  unsigned int v25; // edi
  size_t Size; // [rsp+20h] [rbp-81h]
  size_t Sizea; // [rsp+20h] [rbp-81h]
  void *Src; // [rsp+28h] [rbp-79h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v30; // [rsp+30h] [rbp-71h]
  __int64 v31; // [rsp+40h] [rbp-61h]
  int v32; // [rsp+70h] [rbp-31h] BYREF
  BOOL v33; // [rsp+78h] [rbp-29h] BYREF
  BOOL v34; // [rsp+7Ch] [rbp-25h]
  __int128 v35; // [rsp+80h] [rbp-21h]
  __int128 v36; // [rsp+90h] [rbp-11h]

  v6 = a3;
  if ( !DXGFASTMUTEX::IsOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3572;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3572LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->pBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3577;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pGetSetMetaData->pBuffer == nullptr",
      3577LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v6 && !a2->bSetMetaData )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3582;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Getting meta data with non-zero offset (0x%I64x) is not supported",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  bGlobalMetaData = a2->bGlobalMetaData;
  bProducer = a2->bProducer;
  v33 = bProducer;
  v34 = bGlobalMetaData;
  v35 = 0LL;
  v36 = 0LL;
  if ( bGlobalMetaData )
  {
    BufferSize = a2->BufferSize;
    p_bSetMetaData = &a2->bSetMetaData;
    v18 = (DXGSWAPCHAIN *)((char *)this + 80);
    v24 = this;
    if ( a2->bSetMetaData )
    {
      LODWORD(Size) = a2->BufferSize;
      v32 = 1;
      MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                           this,
                           v18,
                           &v32,
                           v6,
                           Size,
                           a4,
                           (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                           a5);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( bProducer )
  {
    v11 = (__int64 *)((char *)this + 160);
    v12 = (char *)this + 172;
    v13 = (char *)this + 184;
  }
  else
  {
    v11 = (__int64 *)((char *)this + 112);
    v12 = (char *)this + 124;
    v13 = (char *)this + 136;
  }
  v14 = *(unsigned int *)v13;
  if ( (_DWORD)v14 == -1 )
  {
    WdLogSingleEntry2(2LL, *v11, this);
    WdLogGlobalForLineNumber = 3611;
    goto LABEL_32;
  }
  if ( (unsigned int)v14 >= *((_DWORD *)this + 14) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"SurfaceIdx < m_SurfaceTableSize", 460LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = *((_QWORD *)this + 8);
  v16 = 160 * v14;
  if ( *(_DWORD *)(160 * v14 + v15) != 1 || *(_DWORD *)(v16 + v15 + 4) != *(_DWORD *)v12 )
  {
    WdLogSingleEntry2(2LL, *v11, this);
    WdLogGlobalForLineNumber = 3623;
LABEL_32:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      *v11,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  p_bSetMetaData = &a2->bSetMetaData;
  v18 = *(struct AUTOEXPANDALLOCATION **)(v16 + v15 + 16);
  if ( !a2->bSetMetaData )
  {
    BufferSize = a2->BufferSize;
    v24 = this;
LABEL_17:
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v24,
                         v18,
                         BufferSize,
                         a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                         a5,
                         &a2->DataCopied);
    goto LABEL_18;
  }
  LODWORD(Size) = a2->BufferSize;
  MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       v18,
                       (int *)(v16 + v15 + 24),
                       v6,
                       Size,
                       a4,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v33,
                       a5);
LABEL_18:
  v25 = MetaDataInternal;
  if ( *p_bSetMetaData )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
    {
      LODWORD(v31) = DWORD2(v35);
      LODWORD(v30) = v34;
      LODWORD(Src) = v33;
      LODWORD(Sizea) = MetaDataInternal;
      McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
        v21,
        v20,
        v22,
        this,
        Sizea,
        Src,
        v30,
        (_QWORD)v35,
        v31,
        HIDWORD(v35),
        (_DWORD)v36,
        DWORD1(v36),
        DWORD2(v36),
        HIDWORD(v36));
    }
  }
  else if ( a4 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000000LL) != 0 )
    {
      LODWORD(v31) = HIDWORD(v35);
      LODWORD(v30) = v34;
      LODWORD(Src) = v33;
      LODWORD(Sizea) = MetaDataInternal;
      McTemplateK0pqddpqqqqq_EtwWriteTransfer(
        v21,
        v20,
        v22,
        this,
        Sizea,
        Src,
        v30,
        (_QWORD)v35,
        v31,
        (_DWORD)v36,
        DWORD1(v36),
        DWORD2(v36),
        HIDWORD(v36));
    }
  }
  return v25;
}

/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402FF158 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1403C2D54 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140030A30 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003BB1C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x140054458 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0xqdiiiiid_EtwWriteTransfer @ 0x14005F8B0 (McTemplateK0xqdiiiiid_EtwWriteTransfer.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402FF670 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z @ 0x1403F1C30 (-SwapChainIsNonSequential@@YA_NPEAVDXGSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rsi
  struct DXGSWAPCHAIN *v8; // rbx
  int SetMetaDataInternal; // eax
  int v10; // esi
  __int64 v11; // r8
  LONGLONG v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  LONGLONG QuadPart; // rax
  __int64 v16; // rdx
  struct DXGSWAPCHAIN **v17; // rcx
  struct DXGSWAPCHAIN *v18; // rcx
  struct DXGPROCESS *Current; // rax
  int v20; // eax
  LONGLONG v22; // [rsp+60h] [rbp-A0h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v23; // [rsp+68h] [rbp-98h] BYREF
  char v24; // [rsp+90h] [rbp-70h]
  _BYTE v25[24]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v26[24]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  LODWORD(v7) = 0;
  if ( !v3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1747;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1747LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v8 = *v3;
  if ( !SwapChainIsNonSequential(*v3) )
  {
    memset(v26, 0, 0x54uLL);
    v23.hNtSwapChain = 0LL;
    v23.pBuffer = v26;
    *(_QWORD *)&v23.DataCopied = 0LL;
    *(_QWORD *)&v23.bProducer = 1LL;
    v23.bSetMetaData = 0;
    v23.BufferSize = 84;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v23, 0, 0);
    v10 = 0;
    if ( SetMetaDataInternal != -2147483643 )
      v10 = SetMetaDataInternal;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 53, 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v25);
    v24 = 0;
    *(_QWORD *)&v23.bSetMetaData = (char *)this + 456;
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)&v23);
    }
    v11 = v26[2];
    v12 = 0LL;
    if ( v10 >= 0 && (v26[0] & 2) != 0 )
    {
      v13 = *((_QWORD *)this + 59);
      if ( v26[2] > v13 )
      {
        v14 = 0LL;
        v12 = *((_QWORD *)this + 62) * (v26[2] - v13) + *((_QWORD *)this + 60);
        QuadPart = v12;
        v22 = v12;
LABEL_17:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v16 = 0LL;
          if ( v10 >= 0 )
            v16 = (unsigned int)v11;
          McTemplateK0xqdiiiiid_EtwWriteTransfer(
            v12 - *((_QWORD *)a2 + 67),
            v16,
            v11,
            *((_QWORD *)this + 31),
            *((_DWORD *)this + 65),
            v26[3],
            QuadPart,
            v12,
            *((_QWORD *)a2 + 67),
            v12 - *((_QWORD *)a2 + 67),
            v14,
            v16,
            v22);
        }
        DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)&v23);
        DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v25);
        *((_DWORD *)a2 + 17) = v26[2];
        v17 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
        v23.hNtSwapChain = 0LL;
        *(_QWORD *)&v23.bProducer = 1LL;
        *(_QWORD *)&v23.DataCopied = 0LL;
        v18 = *v17;
        v23.bSetMetaData = 1;
        v23.pBuffer = &v22;
        v23.BufferSize = 8;
        if ( (int)SwapChainGetSetMetaDataInternal(v18, &v23, 0x18u, 0) < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1709;
        }
        ObfReferenceObject(*((PVOID *)this + 354));
        Current = DXGPROCESS::GetCurrent();
        v20 = DXGWORKQUEUE::QueueWork(
                (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
                (struct _LIST_ENTRY *)lambda_17a115d69c7e62e0213bebc34b201504_::_lambda_invoker_cdecl_,
                *((struct _LIST_ENTRY **)this + 354));
        v7 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1742;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Indirect display present failed to queue the buffer release: 0x%I64x",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
        return (unsigned int)v7;
      }
      v12 = *((_QWORD *)this + 60) + *((_QWORD *)this + 62) * (v26[2] - v13);
    }
    if ( a3 )
    {
      QuadPart = a3->QuadPart;
      v14 = 1LL;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = v26[2];
      v14 = 2LL;
    }
    v22 = QuadPart;
    goto LABEL_17;
  }
  return (unsigned int)v7;
}

/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1402FEDE4
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400589E0 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 *     McTemplateK0ttddii_EtwWriteTransfer @ 0x14005D5E4 (McTemplateK0ttddii_EtwWriteTransfer.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402FF670 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  __int64 v5; // r14
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdi
  struct DXGSWAPCHAIN **v10; // rcx
  struct DXGSWAPCHAIN *v11; // rcx
  char v12; // r9
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r8
  LONGLONG v17; // r14
  unsigned __int8 v18; // r12
  __int64 v19; // rax
  __int64 QuadPart; // [rsp+78h] [rbp-51h] BYREF
  int v21; // [rsp+80h] [rbp-49h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp-41h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v23; // [rsp+90h] [rbp-39h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v24; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v25[8]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-1h]
  int v27; // [rsp+D0h] [rbp+7h]
  __int128 v28; // [rsp+D8h] [rbp+Fh] BYREF

  v23 = a3;
  PerformanceFrequency.QuadPart = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 53, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v25);
  QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  v5 = QuadPart;
  BLTQUEUE::QuantizeVSync(this, 1, (__int64 *)&PerformanceFrequency, &QuadPart);
  v6 = *((_DWORD *)this + 118);
  v7 = v26;
  v8 = *((unsigned int *)a2 + 15);
  v9 = *((_QWORD *)this + 60);
  v27 = 0;
  *(_QWORD *)(v26 + 8) = 0LL;
  v21 = v6;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
  v10 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( !v10 || (*((_DWORD *)a2 + 16) & 8) != 0 )
  {
    v12 = 0;
    goto LABEL_5;
  }
  v24.hNtSwapChain = 0LL;
  v24.bGlobalMetaData = 1;
  v24.bProducer = 1;
  *(_QWORD *)&v24.DataCopied = 0LL;
  v28 = 0LL;
  v11 = *v10;
  v24.pBuffer = &v28;
  v24.bSetMetaData = 0;
  v24.BufferSize = 16;
  if ( (int)SwapChainGetSetMetaDataInternal(v11, &v24, 0, 0) < 0
    || v24.DataCopied != 16
    || (v16 = DWORD1(v28), !DWORD1(v28)) )
  {
    v12 = 0;
LABEL_5:
    v13 = 1;
    goto LABEL_6;
  }
  *((_BYTE *)this + 352) = 1;
  QuadPart = v5 - *((_QWORD *)a2 + 67);
  v17 = PerformanceFrequency.QuadPart / 10;
  v18 = 0;
  if ( (unsigned int)v16 >= (unsigned int)v8 )
  {
    v19 = *((unsigned int *)a2 + 17);
    if ( !(_DWORD)v19 || v19 <= *((_QWORD *)this + 59) )
      v18 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0ttddii_EtwWriteTransfer(
      v18,
      (unsigned __int128)(PerformanceFrequency.QuadPart * (__int128)0x6666666666666667LL) >> 64,
      v16,
      QuadPart > v17,
      v18,
      v16,
      v8,
      *((_QWORD *)this + 59),
      *((_DWORD *)a2 + 17));
    v16 = DWORD1(v28);
  }
  if ( QuadPart > v17 )
  {
    WdLogSingleEntry2(3LL, v8, v16);
    WdLogGlobalForLineNumber = 4040;
  }
  else if ( !v18 )
  {
    LODWORD(v8) = *((_DWORD *)this + 80);
    v6 = *((_DWORD *)this + 81);
    *(_DWORD *)v23 |= 2u;
    v13 = 0;
    v12 = 0;
    goto LABEL_6;
  }
  v6 = v21;
  v12 = 1;
  v13 = 1;
LABEL_6:
  v14 = *((unsigned int *)this + 118);
  v15 = *((_QWORD *)this + 60);
  *((_QWORD *)this + 42) = v15;
  *((_DWORD *)this + 80) = v8;
  *((_DWORD *)this + 81) = v6;
  *((_DWORD *)this + 82) = v14;
  *((_DWORD *)this + 744) = v14;
  if ( v13 )
  {
    *((_QWORD *)this + 45) = *((_QWORD *)a2 + 67);
    *((_QWORD *)this + 46) = v9;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v14,
      1,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      v8,
      v6,
      v14,
      v15,
      v12,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
}

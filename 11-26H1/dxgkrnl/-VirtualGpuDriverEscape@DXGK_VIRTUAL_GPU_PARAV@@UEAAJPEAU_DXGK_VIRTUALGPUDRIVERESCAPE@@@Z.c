/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x14018BA60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x14005ED50 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x14018BFB8 (-ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 *     ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x14018C034 (-ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?PauseVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F6C88 (-PauseVirtualGpu@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x14022126C (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1403F3388 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ @ 0x14040C1FC (-VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140410014 (-SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned __int64 InputBufferSize; // r8
  unsigned int v5; // r14d
  const wchar_t *v6; // r9
  __int64 OutputBufferSize; // rax
  _DWORD *pInputBuffer; // rsi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  PVOID pOutputBuffer; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]
  int v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+64h] [rbp-Ch]

  InputBufferSize = a2->InputBufferSize;
  v5 = 0;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    WdLogSingleEntry1(2LL);
    v6 = L"Invalid input buffer size: 0x%I64x";
    WdLogGlobalForLineNumber = 456;
LABEL_3:
    OutputBufferSize = a2->InputBufferSize;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, OutputBufferSize, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  pInputBuffer = a2->pInputBuffer;
  v10 = pInputBuffer[2];
  if ( !v10 )
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      WdLogSingleEntry1(2LL);
      v6 = L"Invalid input buffer size to read PCI config: 0x%I64x";
      WdLogGlobalForLineNumber = 466;
      goto LABEL_3;
    }
    if ( a2->OutputBufferSize < pInputBuffer[4] )
    {
      WdLogSingleEntry1(2LL);
      OutputBufferSize = a2->OutputBufferSize;
      v6 = L"Invalid output buffer size to read PCI config: 0x%I64x";
      WdLogGlobalForLineNumber = 472;
      goto LABEL_4;
    }
    pOutputBuffer = a2->pOutputBuffer;
    v22 = *((_DWORD *)this + 6);
    v25 = 0;
    v23 = pInputBuffer[3];
    v24 = pInputBuffer[4];
    v20 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(this, &pOutputBuffer);
    v5 = v20;
    if ( bTracingEnabled )
      VgpuTraceFrequentRead(
        1u,
        v20,
        this,
        L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
        (wchar_t *)L"(offset, size) %d %d",
        pInputBuffer[3],
        pInputBuffer[4]);
    return v5;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (unsigned int)InputBufferSize >= 0x14 )
    {
      v19 = (unsigned int)pInputBuffer[4];
      if ( (unsigned int)v19 < 0xFFFF && InputBufferSize >= v19 + 20 )
      {
        v25 = 0;
        pOutputBuffer = pInputBuffer + 5;
        v22 = *((_DWORD *)this + 6);
        v23 = pInputBuffer[3];
        v24 = pInputBuffer[4];
        v5 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 56LL))(
               this,
               &pOutputBuffer);
        if ( bTracingEnabled )
          VgpuTraceFrequentWrite(
            1u,
            v5,
            this,
            L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
            (wchar_t *)L"(offset, size)  %d %d",
            pInputBuffer[3],
            pInputBuffer[4]);
        return v5;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 497;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 491;
    }
    v6 = L"Invalid input buffer size to write PCI config: 0x%I64x";
    goto LABEL_3;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (unsigned int)InputBufferSize >= 0x1C )
    {
      if ( *((_BYTE *)this + 172) )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 531;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE called twice for vGPU 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
      *((_BYTE *)this + 172) = 1;
      *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
      return v5;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 526;
LABEL_33:
    v6 = L"Invalid input/output buffer size: 0x%I64x";
    goto LABEL_3;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( bTracingEnabled )
      VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
    *((_BYTE *)this + 172) = 0;
    return v5;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2->OutputBufferSize == 4 )
    {
      *(_DWORD *)a2->pOutputBuffer = 1;
      return v5;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 516;
    goto LABEL_33;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (unsigned int)InputBufferSize >= 0x10 )
    {
      v17 = bTracingEnabled == 0;
      v18 = pInputBuffer[3];
      *((_DWORD *)this + 42) = v18;
      if ( !v17 )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v18);
      return v5;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 564;
    goto LABEL_33;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      WdLogSingleEntry1(2LL);
      OutputBufferSize = (int)pInputBuffer[2];
      v6 = L"Invalid escape type: 0x%I64x";
      WdLogGlobalForLineNumber = 647;
      goto LABEL_4;
    }
    if ( (unsigned int)InputBufferSize < 0x18 )
    {
      WdLogSingleEntry1(2LL);
      v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_RESUME: 0x%I64x";
      WdLogGlobalForLineNumber = 634;
      goto LABEL_3;
    }
    if ( bTracingEnabled )
      VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RESUME", 0LL);
    DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)this + 13) + 160LL));
    DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
    DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(this);
  }
  else
  {
    if ( (unsigned int)InputBufferSize < 0x18 )
    {
      WdLogSingleEntry1(2LL);
      v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_PAUSE: 0x%I64x";
      WdLogGlobalForLineNumber = 578;
      goto LABEL_3;
    }
    if ( bTracingEnabled )
      VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_PAUSE", 0LL);
    if ( (pInputBuffer[5] & 1) == 0 )
    {
      DXGK_VIRTUAL_GPU_PARAV::SuspendDevices(this);
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176), 0);
      DXGVIRTUALMACHINE::PauseVirtualGpu(*((DXGVIRTUALMACHINE **)this + 13));
    }
  }
  return v5;
}

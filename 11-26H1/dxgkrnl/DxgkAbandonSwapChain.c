/*
 * XREFs of DxgkAbandonSwapChain @ 0x140208040
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x140193088 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(void *Src)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  PVOID v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v9 = -1;
  v10 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2113);
  Handle = 0LL;
  RtlCopyFromUser(&Handle, Src, 8uLL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = Object;
    v7 = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
    if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    return v7;
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle, v2);
    WdLogGlobalForLineNumber = 1659;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
    if ( v11 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return v3;
  }
}

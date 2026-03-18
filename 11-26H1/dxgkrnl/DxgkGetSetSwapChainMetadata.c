/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1402FF450
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402FF670 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(char *Src)
{
  NTSTATUS v2; // eax
  int SetMetaDataInternal; // esi
  PVOID v4; // r14
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h]
  char v9; // [rsp+40h] [rbp-38h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2121);
  memset(&Handle, 0, sizeof(Handle));
  RtlCopyFromUser(&Handle, Src, 0x28uLL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  SetMetaDataInternal = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v2);
    WdLogGlobalForLineNumber = 1492;
  }
  else
  {
    v4 = Object;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
    if ( SetMetaDataInternal >= 0 )
      RtlCopyToUser(Src + 32, &Handle.DataCopied, 4uLL);
    ObfDereferenceObject(v4);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
  return (unsigned int)SetMetaDataInternal;
}

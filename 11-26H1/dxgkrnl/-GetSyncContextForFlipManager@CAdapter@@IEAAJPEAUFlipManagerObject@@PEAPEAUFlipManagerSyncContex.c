/*
 * XREFs of ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400A206C
 * Callers:
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A2288 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z @ 0x1400A2384 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z.c)
 * Callees:
 *     DxgkCreateContextVirtualInternal @ 0x1401C1694 (DxgkCreateContextVirtualInternal.c)
 */

__int64 __fastcall CAdapter::GetSyncContextForFlipManager(
        CAdapter *this,
        struct FlipManagerObject *a2,
        struct CAdapter::FlipManagerSyncContext **a3)
{
  int ContextVirtualInternal; // ebx
  _DWORD *inserted; // rdi
  int v7; // eax
  struct FlipManagerObject *Buffer; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  char v11; // [rsp+2Ch] [rbp-34h]
  _OWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  unsigned __int8 NewElement; // [rsp+80h] [rbp+20h] BYREF

  ContextVirtualInternal = 0;
  Buffer = a2;
  v10 = 0;
  v11 = 0;
  NewElement = 0;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), &Buffer, 0x10u, &NewElement);
  if ( !inserted )
    return (unsigned int)-1073741801;
  if ( NewElement )
  {
    v13 = 0LL;
    v7 = *((_DWORD *)this + 11);
    memset(v12, 0, sizeof(v12));
    HIDWORD(v12[0]) = 8;
    LODWORD(v12[0]) = v7;
    ContextVirtualInternal = DxgkCreateContextVirtualInternal(v12);
    if ( ContextVirtualInternal < 0 )
    {
      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), inserted);
      return (unsigned int)ContextVirtualInternal;
    }
    inserted[2] = v13;
  }
  *a3 = (struct CAdapter::FlipManagerSyncContext *)inserted;
  return (unsigned int)ContextVirtualInternal;
}

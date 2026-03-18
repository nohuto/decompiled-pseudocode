/*
 * XREFs of ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402B32A4
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B34CC (-ProcessNewMoveRegions@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B4D44 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1403FBF7C (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 */

__int64 __fastcall DDAMetaData::CombineNewMetaData(
        DDAMetaData *this,
        struct _D3DKMT_PRESENT_RGNS *a2,
        union _LARGE_INTEGER *a3,
        int a4,
        int *a5)
{
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rcx
  const wchar_t *v13; // r9
  int v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  char v16; // [rsp+60h] [rbp-28h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 11000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 11000);
  v9 = DDAMetaData::ProcessNewMoveRegions(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    v13 = L"Failed to process new move regions, this = 0x%I64x";
    WdLogGlobalForLineNumber = 375;
    goto LABEL_21;
  }
  v9 = DDAMetaData::ProcessNewDirtyRects(this, a2);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    v13 = L"Failed to process new dirty rects, this = 0x%I64x";
    WdLogGlobalForLineNumber = 383;
    goto LABEL_21;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v9 = DDAMetaData::ConvertGdiRgnToRects(this);
    if ( v9 )
    {
      v10 = 1;
      goto LABEL_9;
    }
    WdLogSingleEntry1(2LL);
    v13 = L"Failed to get dirty rect from Gdi region, this = 0x%I64x";
    WdLogGlobalForLineNumber = 393;
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_12;
  }
  v10 = 0;
LABEL_9:
  *a5 = v10;
  *((union _LARGE_INTEGER *)this + 1) = *a3;
  if ( a4 )
    *(_DWORD *)this = 1;
  ++*((_DWORD *)this + 1);
LABEL_12:
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 7) + 128LL))();
    *((_QWORD *)this + 9) = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return v9;
}

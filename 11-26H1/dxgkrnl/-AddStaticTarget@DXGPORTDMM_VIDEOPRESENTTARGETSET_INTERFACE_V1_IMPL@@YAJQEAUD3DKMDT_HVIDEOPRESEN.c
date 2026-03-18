/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x140267E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1400968CC (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x140097064 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14025FA98 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260374 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1402607D0 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  DMMVIDEOPRESENTTARGETSET *v7; // rdi
  DMMVIDEOPRESENTTARGET *v8; // rax
  DMMVIDEOPRESENTTARGET *v9; // rax
  DMMVIDEOPRESENTTARGET *v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  WdLogGlobalForLineNumber = 420;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    result = 3223192325LL;
    WdLogGlobalForLineNumber = 426;
    return result;
  }
  v7 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192342LL;
    WdLogGlobalForLineNumber = 440;
    return result;
  }
  v8 = (DMMVIDEOPRESENTTARGET *)operator new(0x270uLL, 0x4E506456u, 256LL);
  if ( v8
    && (v9 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
               v8,
               v7,
               a2->Id,
               a2->VideoOutputTechnology,
               a2->VideoOutputHpdAwareness,
               a2->MonitorOrientationAwareness,
               a2->SupportsSdtvModes),
        (v10 = v9) != 0LL) )
  {
    v11 = DMMVIDEOPRESENTTARGET::Initialize(v9);
    LODWORD(v12) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(2LL, a2->Id, v11);
      WdLogGlobalForLineNumber = 474;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v10 + 64));
      return (unsigned int)v12;
    }
    v12 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v7, v10);
    ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v10 + 64));
    if ( (int)v12 < 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v15[3] = a2->Id;
      v15[4] = v7;
      v15[5] = v12;
      WdLogGlobalForLineNumber = 493;
      return (unsigned int)v12;
    }
    return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v7, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 462;
  }
  return result;
}

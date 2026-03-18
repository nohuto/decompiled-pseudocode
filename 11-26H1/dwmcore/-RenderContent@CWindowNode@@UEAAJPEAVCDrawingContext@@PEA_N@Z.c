/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800777B0 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetOcclusionId@CDrawingContext@@QEBAIXZ @ 0x1800780D0 (-GetOcclusionId@CDrawingContext@@QEBAIXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x1800CB6D0 (-GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z.c)
 *     ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1800CB7D0 (-GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801A5BAC (-NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801BD674 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Enter@CContentZScope@CDrawingContext@@QEAAXPEAV2@H@Z @ 0x180200EB0 (-Enter@CContentZScope@CDrawingContext@@QEAAXPEAV2@H@Z.c)
 *     ??1CContentZScope@CDrawingContext@@QEAA@XZ @ 0x1802013A0 (--1CContentZScope@CDrawingContext@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, const struct CVisualTree **a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  const struct CVisualTree *v9; // r14
  struct CWindowOcclusionInfo *WindowOcclusionInfo; // rdi
  unsigned int OcclusionId; // eax
  int SpriteBitmapZ; // eax
  int v13; // eax
  __int64 CurrentFrameId; // rax
  const char *v15; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v21; // [rsp+28h] [rbp-D8h]
  _BYTE v22[4496]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+11F8h] [rbp+10F8h]

  if ( (*((_BYTE *)this + 102) & 0x40) != 0
    && (CDrawingContext::NotifyFrameContainsProtectedContent((CDrawingContext *)a2), *((_BYTE *)g_pComposition + 6458)) )
  {
    *a3 = 1;
    v6 = CWindowNode::RenderBlackContent(this, (struct CDrawingContext *)a2);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v6,
        v20[0]);
    return v7;
  }
  else
  {
    v9 = a2[993];
    WindowOcclusionInfo = 0LL;
    OcclusionId = CDrawingContext::GetOcclusionId((CDrawingContext *)a2);
    if ( OcclusionId )
      WindowOcclusionInfo = CWindowNode::GetWindowOcclusionInfo(this, v9, OcclusionId);
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v22);
    *(_QWORD *)v20 = 0LL;
    if ( WindowOcclusionInfo )
    {
      SpriteBitmapZ = CWindowOcclusionInfo::GetSpriteBitmapZ(WindowOcclusionInfo, v9);
      CDrawingContext::CContentZScope::Enter(
        (CDrawingContext::CContentZScope *)v20,
        (struct CDrawingContext *)a2,
        SpriteBitmapZ);
    }
    v13 = CWindowNode::RenderSpriteContent(this, (struct CDrawingContext *)a2, (struct CDrawListEntryBuilder *)v22);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x439,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v13,
        v20[0]);
    CDrawingContext::CContentZScope::~CContentZScope((CDrawingContext::CContentZScope *)v20);
    *(_QWORD *)v20 = 0LL;
    if ( WindowOcclusionInfo )
    {
      CurrentFrameId = GetCurrentFrameId();
      if ( *((_QWORD *)WindowOcclusionInfo + 2) != CurrentFrameId )
      {
        COcclusionInfo::UpdateZFromValidParent(WindowOcclusionInfo, v9, CurrentFrameId);
        v16 = *((_DWORD *)WindowOcclusionInfo + 9);
        *((_DWORD *)WindowOcclusionInfo + 12) = v16;
        *((_DWORD *)WindowOcclusionInfo + 13) = v16;
      }
      if ( *((_BYTE *)a2 + 8069) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1A12,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          v15);
      v17 = *((_DWORD *)a2 + 1994);
      *((_DWORD *)a2 + 1994) = *((_DWORD *)WindowOcclusionInfo + 13);
      *((_BYTE *)a2 + 8069) = 1;
      *(_QWORD *)v20 = a2;
      v21 = v17;
    }
    v18 = CWindowNode::RenderFlipExContent(this, (struct CDrawingContext *)a2, (struct CDrawListEntryBuilder *)v22);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x444,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v18,
        v20[0]);
    CDrawingContext::CContentZScope::~CContentZScope((CDrawingContext::CContentZScope *)v20);
    v19 = CVisual::RenderContent(this, (struct CDrawingContext *)a2, a3);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x447,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v19,
        v20[0]);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v22);
    return 0LL;
  }
}

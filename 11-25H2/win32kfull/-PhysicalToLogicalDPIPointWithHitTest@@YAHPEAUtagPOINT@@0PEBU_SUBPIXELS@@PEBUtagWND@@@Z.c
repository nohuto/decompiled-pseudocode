/*
 * XREFs of ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1402841D0 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140154B88 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        struct tagPOINT *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        const struct tagWND *a4)
{
  unsigned int v7; // ebp
  const struct _D3DMATRIX *v9; // rsi
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  bool v11; // al
  struct tagPOINT v12; // r8
  struct tagPOINT v13; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v9 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a4);
  if ( TopLevelOrDpiBoundaryWindow )
    v9 = (const struct _D3DMATRIX *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
  v13 = *a2;
  if ( v9 )
  {
    v11 = DCEHitTestWindow((const struct tagRECT *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v9, &v13, a3);
    v12 = v13;
  }
  else
  {
    if ( !TopLevelOrDpiBoundaryWindow )
      return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
    v11 = (unsigned int)PtInRect(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL) != 0;
  }
  if ( v11 )
  {
    *a1 = v12;
    return 1LL;
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
}

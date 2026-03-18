/*
 * XREFs of ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8
 * Callers:
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14008C000 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
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
  struct tagPOINT v11; // r8
  struct tagPOINT v12; // r8
  struct tagPOINT v13; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v9 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a4, (__int64)a2, (__int64)a3);
  if ( TopLevelOrDpiBoundaryWindow )
    v9 = (const struct _D3DMATRIX *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
  v11 = *a2;
  v13 = *a2;
  if ( v9 )
  {
    if ( !DCEHitTestWindow((const struct tagRECT *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v9, &v13, a3) )
      return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
    v12 = v13;
  }
  else if ( !TopLevelOrDpiBoundaryWindow
         || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(
                             *((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL,
                             v11) )
  {
    return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
  }
  *a1 = v12;
  return 1LL;
}

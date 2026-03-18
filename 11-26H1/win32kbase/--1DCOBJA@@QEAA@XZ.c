/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4
 * Callers:
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C3724 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C37DC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1400C4CC0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1400C4E60 (GreGetDCOrgEx.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall DCOBJA::~DCOBJA(unsigned int **this)
{
  __int64 SessionState; // rax
  char *v3; // rax
  __int64 v4; // rcx
  char **v5; // rdx

  if ( *this )
  {
    SessionState = W32GetSessionState(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *this);
    *this = 0LL;
  }
  v3 = (char *)(this + 4);
  if ( this != (unsigned int **)-32LL )
  {
    v4 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)this[5], *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    this[5] = (unsigned int *)(this + 4);
    *(_QWORD *)v3 = v3;
  }
}

/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C3724 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C37DC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1400C4CC0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1400C4E60 (GreGetDCOrgEx.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = 0LL;
  v3 = (unsigned int)a2;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v5 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 2) = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  if ( this != (DCOBJA *)-32LL )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7, v6);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *((_QWORD *)this + 6) = (unsigned __int64)this & -(__int64)((DCOBJA *)((char *)this + 32) != 0LL);
    *((_QWORD *)this + 7) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v9 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v10 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v10 + 8) != v9 )
        __fastfail(3u);
      *v5 = v10;
      *((_QWORD *)this + 5) = v9;
      *(_QWORD *)(v10 + 8) = v5;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = v5;
    }
    else
    {
      *((_QWORD *)this + 5) = (char *)this + 32;
      *v5 = v5;
    }
  }
  *(_QWORD *)this = HmgShareLock(*((_QWORD *)this + 2), v3, 1, 1);
  return this;
}

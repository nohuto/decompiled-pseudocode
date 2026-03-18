/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1400C4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x1400C5370 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     GreLockVisRgnShared @ 0x1400C5430 (GreLockVisRgnShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2, _DWORD *a3)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 SessionState; // rax
  __int64 v8; // rdx
  int v9; // r8d
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v10, a2);
    if ( !v10[0] )
    {
      DCOBJA::~DCOBJA((DCOBJA *)v10);
      return 0LL;
    }
    v11 = *(_QWORD *)(v10[0] + 48LL);
    v4 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11)
      && ((*(_DWORD *)(v10[0] + 36LL) & 0x200) == 0
       || (**(_BYTE **)(v10[0] + 976LL) & 1) != 0
       || (*(_DWORD *)(v10[0] + 36LL) & 0x8000) != 0);
    DCOBJA::~DCOBJA((DCOBJA *)v10);
  }
  else
  {
    v11 = a1;
    v4 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11) != 0;
  }
  *a3 = v4;
  if ( v4 )
  {
    GreLockVisRgnShared();
  }
  else
  {
    SessionState = W32GetSessionState(v5);
    GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v8, v9);
  }
  return 1LL;
}

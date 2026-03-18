/*
 * XREFs of GrepDeleteDC @ 0x14001CC30
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14001C980 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14001C9D0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x14010F820 (GreDeleteDC.c)
 *     GreMarkPendingDestroyDC @ 0x14011E2F8 (GreMarkPendingDestroyDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x14013734C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BB00 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14001BBA0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x14001BC30 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001CE78 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     UserReleaseDC @ 0x1400F4E50 (UserReleaseDC.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019EA2C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall GrepDeleteDC(HDC a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  DC *v8; // rcx
  int v9; // ebx
  int v10; // eax
  struct _DC_ATTR *UserAttr; // rax
  int v13; // r8d
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // eax
  DC *v17; // [rsp+20h] [rbp-50h] BYREF
  int v18; // [rsp+28h] [rbp-48h]
  char v19; // [rsp+40h] [rbp-30h]

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  DCOBJ::DCOBJ((DCOBJ *)&v17, (struct Gre::Base::SESSION_GLOBALS *)v4);
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 3032)
    && (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process()) != 0LL
    && *CurrentProcessWin32Process )
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v17, a1);
    v8 = v17;
    if ( !v17 )
      goto LABEL_23;
    if ( (*((_DWORD *)v17 + 11) & 2) == 0 )
    {
      if ( (v19 & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
        if ( UserAttr && !(unsigned int)DC::SaveAttributes(v17, UserAttr) )
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v17);
          v17 = 0LL;
          goto LABEL_23;
        }
        v8 = v17;
      }
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v17;
      v18 = 1;
    }
    v13 = *((_DWORD *)v8 + 130);
    if ( (v13 & 4) == 0 )
      goto LABEL_6;
    v14 = v13 & 0xFFFFFFFB;
    *((_DWORD *)v8 + 130) = v14;
    v7 = *((_QWORD *)v8 + 122);
    v15 = *(_DWORD *)(v7 + 340);
    if ( (v14 & 1) != 0 )
      v16 = v15 | 0x16090;
    else
      v16 = v15 | 0x6090;
    *(_DWORD *)(v7 + 340) = v16;
  }
  else
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v17, a1);
  }
  v8 = v17;
LABEL_6:
  if ( !v8 )
  {
LABEL_23:
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v17);
    return 0LL;
  }
  v9 = 0;
  if ( (a2 & 0x2000000) != 0 )
  {
    a2 = *((_DWORD *)v8 + 9) & 0x3C00000;
  }
  else
  {
    *((_DWORD *)v8 + 9) |= a2 & 0x3C00000;
    v8 = v17;
  }
  v10 = *((_DWORD *)v8 + 9);
  if ( (v10 & 8) != 0 )
  {
    if ( (a2 & 0x400000) != 0 )
    {
      *((_DWORD *)v8 + 9) = v10 & 0xFFFFFFF7;
      v8 = v17;
    }
    else
    {
      v9 = 1;
    }
  }
  if ( (a2 & 0x2000000) != 0 && !(unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)v8, v7) )
  {
    EngSetLastError(0x139Fu);
    goto LABEL_23;
  }
  if ( v9 )
    XDCOBJ::bCleanDC(&v17, HIBYTE(a2) & 1);
  else
    XDCOBJ::vDelete((XDCOBJ *)&v17, a2);
  DCOBJ::~DCOBJ((DCOBJ *)&v17);
  if ( !v9 )
    return 1LL;
  LOBYTE(v5) = (unsigned int)UserReleaseDC(a1) != 0;
  return v5;
}

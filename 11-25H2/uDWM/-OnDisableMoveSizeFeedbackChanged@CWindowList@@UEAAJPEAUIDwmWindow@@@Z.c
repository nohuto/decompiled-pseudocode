/*
 * XREFs of ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5DF0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDisableMoveSizeFeedbackChanged(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // al
  struct CWindowData *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 408LL))(a2);
  v5 = v11;
  if ( !v11 )
    goto LABEL_11;
  if ( ((*((_BYTE *)v11 + 678) & 4) != 0) == v4 )
    goto LABEL_11;
  *((_BYTE *)v11 + 678) ^= (*((_BYTE *)v11 + 678) ^ (4 * v4)) & 4;
  if ( !v4 )
    goto LABEL_11;
  if ( (*((_BYTE *)v5 + 677) & 0x10) == 0
    || (v6 = CWindowList::IsInWindowMoveChange(this, *((struct IDwmWindow **)v5 + 3), 0, IMDT_TOUCH), v7 = v6, v6 >= 0) )
  {
    if ( (*((_BYTE *)v5 + 677) & 0x20) != 0 )
    {
      v6 = CWindowList::IsInWindowResizeChange(
             (struct CWindowData **)this,
             *((struct IDwmWindow **)v5 + 3),
             0,
             0,
             IMDT_TOUCH);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 2875LL;
        goto LABEL_10;
      }
    }
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v8 = 2870LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v6);
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}

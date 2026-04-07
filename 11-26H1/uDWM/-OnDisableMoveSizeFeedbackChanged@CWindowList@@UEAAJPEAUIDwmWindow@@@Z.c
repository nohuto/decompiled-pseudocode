/*
 * XREFs of ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1810 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1A80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnDisableMoveSizeFeedbackChanged(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // al
  struct CWindowData *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  enum tagINPUT_MESSAGE_DEVICE_TYPE v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWindowData *v12; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 408LL))(a2);
  v5 = v12;
  if ( v12 )
  {
    if ( ((*((_BYTE *)v12 + 742) & 2) != 0) != v4 )
    {
      *((_BYTE *)v12 + 742) ^= (*((_BYTE *)v12 + 742) ^ (2 * v4)) & 2;
      if ( v4 )
      {
        if ( (*((_BYTE *)v5 + 741) & 8) != 0 )
        {
          v6 = CWindowList::IsInWindowMoveChange(this, *((struct IDwmWindow **)v5 + 3), 0, IMDT_TOUCH);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 3147LL;
LABEL_10:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v8,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)v6,
              v10);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
            return v7;
          }
        }
        if ( (*((_BYTE *)v5 + 741) & 0x10) != 0 )
        {
          v6 = CWindowList::IsInWindowResizeChange(this, *((struct IDwmWindow **)v5 + 3), 0, 0, IMDT_TOUCH);
          v7 = v6;
          if ( v6 < 0 )
          {
            v8 = 3152LL;
            goto LABEL_10;
          }
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}

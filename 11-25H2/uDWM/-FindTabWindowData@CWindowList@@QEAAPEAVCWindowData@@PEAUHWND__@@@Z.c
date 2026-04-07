/*
 * XREFs of ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800E4204
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x180045388 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

struct CWindowData *__fastcall CWindowList::FindTabWindowData(CWindowList *this, HWND a2)
{
  __int64 v4; // rbx
  unsigned int i; // r8d
  __int64 v6; // rax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 130); ++i )
  {
    v6 = *((_QWORD *)this + 62);
    if ( *(HWND *)(*(_QWORD *)(v6 + 8LL * i) + 40LL) == a2 )
    {
      v4 = *(_QWORD *)(v6 + 8LL * i);
      break;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return (struct CWindowData *)v4;
}

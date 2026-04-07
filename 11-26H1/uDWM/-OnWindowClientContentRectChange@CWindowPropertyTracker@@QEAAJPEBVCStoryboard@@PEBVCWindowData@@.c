/*
 * XREFs of ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800BEFF8
 * Callers:
 *     ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180017690 (-OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800604B0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::OnWindowClientContentRectChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  unsigned int v9; // ebx
  const struct tagRECT *v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = a5;
  if ( a4 || a5 )
  {
    v16 = 0;
    v11 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v16);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x49u, 0LL);
    }
    else
    {
      if ( a4 )
      {
        v12 = (unsigned int)v16;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v16) + 120LL) = *a4;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v12) + 40LL) |= 8u;
      }
      if ( v10 )
      {
        v13 = (unsigned int)v16;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v16) + 136LL) = *v10;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v13) + 40LL) |= 0x10u;
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}

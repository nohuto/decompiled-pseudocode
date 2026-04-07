/*
 * XREFs of ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800A2D40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::StopCapturesForWindow(CCaptureManager *this, __int64 *a2)
{
  __int64 ***v4; // rdi
  __int64 **v5; // rbx
  struct DWM_CAPTURE_TOKEN *v6; // rsi
  __int64 v7; // rax
  const struct DWM_CAPTURE_TOKEN *i; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  struct DWM_CAPTURE_TOKEN *v12[2]; // [rsp+20h] [rbp-20h] BYREF
  struct DWM_CAPTURE_TOKEN *v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+80h] [rbp+40h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v4 = (__int64 ***)*((_QWORD *)this + 2);
  v5 = *v4;
  v6 = 0LL;
  while ( v5 != (__int64 **)v4 )
  {
    if ( v5[5] == a2 )
    {
      v7 = (__int64)v5[3];
      v15 = v7;
      if ( v6 == v13 )
      {
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>((__int64)v12, (__int64)v6, &v15);
        v6 = v12[1];
      }
      else
      {
        *(_QWORD *)v6 = v7;
        v6 = (struct DWM_CAPTURE_TOKEN *)((char *)v12[1] + 8);
        v12[1] = (struct DWM_CAPTURE_TOKEN *)((char *)v12[1] + 8);
      }
    }
    v5 = (__int64 **)*v5;
  }
  for ( i = v12[0]; i != v6; i = (const struct DWM_CAPTURE_TOKEN *)((char *)i + 8) )
  {
    v9 = CCaptureManager::StopWindowCapture(this, i);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A6,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v12[0] )
      {
        std::_Deallocate<16>(v12[0], (v13 - v12[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_OWORD *)v12 = 0LL;
        v13 = 0LL;
      }
      goto LABEL_17;
    }
  }
  if ( v12[0] )
  {
    std::_Deallocate<16>(v12[0], (v13 - v12[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_OWORD *)v12 = 0LL;
    v13 = 0LL;
  }
  v10 = 0;
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v10;
}

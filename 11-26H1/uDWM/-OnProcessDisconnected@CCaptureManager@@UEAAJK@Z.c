/*
 * XREFs of ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800760C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2E90 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::OnProcessDisconnected(CCaptureManager *this, int a2)
{
  __int64 **v4; // rdi
  __int64 *v5; // rbx
  struct DWM_CAPTURE_TOKEN *v6; // rsi
  __int64 v7; // rax
  const struct DWM_CAPTURE_TOKEN *i; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  struct DWM_CAPTURE_TOKEN *v11; // rsi
  __int64 **v12; // rdi
  __int64 *j; // rbx
  __int64 v14; // rax
  const struct DWM_CAPTURE_TOKEN *k; // rdi
  int v16; // eax
  struct DWM_CAPTURE_TOKEN *v17; // rsi
  __int64 **v18; // rdi
  __int64 *m; // rbx
  __int64 v20; // rax
  const struct DWM_CAPTURE_TOKEN *n; // rbx
  int v22; // eax
  int v23; // edi
  struct DWM_CAPTURE_TOKEN *v25[2]; // [rsp+20h] [rbp-20h] BYREF
  struct DWM_CAPTURE_TOKEN *v26; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v28; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+80h] [rbp+40h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v4 = (__int64 **)*((_QWORD *)this + 2);
  v5 = *v4;
  v6 = 0LL;
  while ( v5 != (__int64 *)v4 )
  {
    if ( *((_DWORD *)v5 + 7) == a2 )
    {
      v7 = v5[3];
      v28 = v7;
      if ( v6 == v26 )
      {
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(v25, v6, &v28);
        v6 = v25[1];
      }
      else
      {
        *(_QWORD *)v6 = v7;
        v6 = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
        v25[1] = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
      }
    }
    v5 = (__int64 *)*v5;
  }
  for ( i = v25[0]; i != v6; i = (const struct DWM_CAPTURE_TOKEN *)((char *)i + 8) )
  {
    v9 = CCaptureManager::StopWindowCapture(this, i);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x375,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v9,
        (int)v25[0]);
      if ( v25[0] )
      {
        std::_Deallocate<16>(v25[0], (v26 - v25[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_OWORD *)v25 = 0LL;
        v26 = 0LL;
      }
LABEL_45:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
      return v10;
    }
  }
  v11 = v25[1];
  if ( v25[0] != v25[1] )
  {
    v11 = v25[0];
    v25[1] = v25[0];
  }
  v12 = (__int64 **)*((_QWORD *)this + 18);
  for ( j = *v12; j != (__int64 *)v12; j = (__int64 *)*j )
  {
    if ( *((_DWORD *)j + 7) == a2 )
    {
      v14 = j[3];
      v28 = v14;
      if ( v11 == v26 )
      {
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(v25, v11, &v28);
        v11 = v25[1];
      }
      else
      {
        *(_QWORD *)v11 = v14;
        v11 = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
        v25[1] = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
      }
    }
  }
  for ( k = v25[0]; k != v11; k = (const struct DWM_CAPTURE_TOKEN *)((char *)k + 8) )
  {
    v16 = CCaptureManager::StopDisplayCapture(this, k);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x383,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v16,
        (int)v25[0]);
      if ( v25[0] )
      {
        std::_Deallocate<16>(v25[0], (v26 - v25[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_OWORD *)v25 = 0LL;
        v26 = 0LL;
      }
      goto LABEL_49;
    }
  }
  v17 = v25[1];
  if ( v25[0] != v25[1] )
  {
    v17 = v25[0];
    v25[1] = v25[0];
  }
  v18 = (__int64 **)*((_QWORD *)this + 26);
  for ( m = *v18; m != (__int64 *)v18; m = (__int64 *)*m )
  {
    if ( *((_DWORD *)m + 7) == a2 )
    {
      v20 = m[3];
      v28 = v20;
      if ( v17 == v26 )
      {
        std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(v25, v17, &v28);
        v17 = v25[1];
      }
      else
      {
        *(_QWORD *)v17 = v20;
        v17 = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
        v25[1] = (struct DWM_CAPTURE_TOKEN *)((char *)v25[1] + 8);
      }
    }
  }
  for ( n = v25[0]; n != v17; n = (const struct DWM_CAPTURE_TOKEN *)((char *)n + 8) )
  {
    v22 = CCaptureManager::StopFilteredDisplayCapture(this, n);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x391,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v22,
        (int)v25[0]);
      if ( v25[0] )
      {
        std::_Deallocate<16>(v25[0], (v26 - v25[0]) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_OWORD *)v25 = 0LL;
        v26 = 0LL;
      }
      v10 = v23;
      goto LABEL_45;
    }
  }
  if ( v25[0] )
  {
    std::_Deallocate<16>(v25[0], (v26 - v25[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_OWORD *)v25 = 0LL;
    v26 = 0LL;
  }
  v10 = 0;
LABEL_49:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}

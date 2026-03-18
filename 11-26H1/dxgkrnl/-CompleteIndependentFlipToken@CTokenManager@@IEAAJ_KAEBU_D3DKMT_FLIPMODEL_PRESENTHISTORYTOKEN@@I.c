/*
 * XREFs of ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001FD20 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140027AD0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140039F40 (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x14003C3A4 (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x140041B04 (-UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x140042560 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z @ 0x140046CCC (-FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z.c)
 *     ?CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAA_N_KI@Z @ 0x140049BA4 (-CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAA_N_KI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401CFB9C (DxgkGetNominalRefreshRateInfo.c)
 *     DxgkGetPresentStats @ 0x140372490 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndependentFlipToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *hCompSurf; // r13
  char v9; // r8
  int PresentStats; // r15d
  LARGE_INTEGER v11; // rbx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int v13; // r12d
  CompositionSurfaceObject *v14; // r15
  void *v15; // rcx
  bool IsVBlankVirtualizationDisabled; // al
  __int64 v17; // rax
  LONG v18; // r8d
  LUID compSurfLuid; // rdx
  _QWORD *v20; // r13
  unsigned __int64 v21; // rax
  __int64 Win32kImportTable; // rax
  __int64 v23; // rsi
  void (__fastcall *v24)(_QWORD, _QWORD, __int64, __int64); // r14
  __int64 v25; // rdi
  unsigned int v26; // ebx
  int v27; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-79h] BYREF
  struct CTokenQueue *v30; // [rsp+38h] [rbp-71h] BYREF
  PVOID Object; // [rsp+40h] [rbp-69h] BYREF
  LONG y; // [rsp+48h] [rbp-61h] BYREF
  int v33; // [rsp+4Ch] [rbp-5Dh]
  int v34; // [rsp+50h] [rbp-59h]
  int v35; // [rsp+54h] [rbp-55h]
  __int64 v36; // [rsp+58h] [rbp-51h]
  __int64 v37; // [rsp+60h] [rbp-49h]
  HANDLE Handle; // [rsp+68h] [rbp-41h]
  _QWORD v39[10]; // [rsp+70h] [rbp-39h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  Handle = hCompSurf;
  Object = 0LL;
  memset(v39, 0, sizeof(v39));
  PresentStats = DxgkGetPresentStats(a4, a3->VidPnSourceId, a3->CustomDuration, v39);
  if ( PresentStats < 0 || v39[7] == 0xFFFFFFFFLL )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PresentStats >= 0
      && (VidPnSourceId = a3->VidPnSourceId, v30 = 0LL, (int)DxgkGetNominalRefreshRateInfo(a4, VidPnSourceId) >= 0)
      && (_DWORD)v30
      && HIDWORD(v30) )
    {
      v9 = (char)v30;
      v39[7] = PerformanceFrequency.QuadPart * HIDWORD(v30) / (unsigned int)v30;
    }
    else
    {
      LODWORD(v39[8]) = 1;
      v39[4] = v11.QuadPart;
      v39[6] = v11.QuadPart;
      v39[7] = PerformanceFrequency.QuadPart / 60;
    }
  }
  v13 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v9, (struct CompositionSurfaceObject **)&Object);
  if ( v13 >= 0 )
  {
    v14 = (CompositionSurfaceObject *)Object;
    v30 = 0LL;
    if ( (int)CTokenManager::FindTokenQueue(this, (struct CompositionSurfaceObject *)Object, &v30) >= 0
      && CTokenQueue::CompleteIndependentFlipNotifyToken(v30, a2, a3->ScrollOffset.y) )
    {
      v15 = (void *)*((_QWORD *)this + 9);
      PerformanceFrequency.LowPart = 0;
      ZwSetEvent(v15, (PLONG)&PerformanceFrequency);
    }
    v35 = 0;
    IsVBlankVirtualizationDisabled = CompositionSurfaceObject::IsVBlankVirtualizationDisabled(v14, a2);
    y = a3->ScrollOffset.y;
    if ( IsVBlankVirtualizationDisabled )
    {
      v33 = v39[1];
      v34 = v39[3];
      v17 = v39[4];
    }
    else
    {
      v33 = HIDWORD(v39[5]);
      v34 = HIDWORD(v39[5]);
      v17 = v39[6];
    }
    v36 = v17;
    v37 = v17;
    CompositionSurfaceObject::UpdateStatsForIndependentFlip(v14, a2, (const struct DXGI_FRAME_STATISTICS *)&y, v39[5]);
    v18 = a3->ScrollOffset.y;
    compSurfLuid = a3->compSurfLuid;
    Object = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v18, (struct CToken **)&Object);
    v20 = Object;
    if ( Object )
    {
      v21 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)Object + 136LL))(
              Object,
              v36,
              v39[7],
              v39[7] * LODWORD(v39[8]));
      CompositionSurfaceObject::SetSyncRefreshTime(v14, v21);
      Win32kImportTable = DxgkGetWin32kImportTable();
      v23 = v20[7];
      v24 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(Win32kImportTable + 424);
      v25 = *(_QWORD *)(v20[6] + 24LL);
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 112LL))(v20);
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 120LL))(v20);
      v24((unsigned int)(LODWORD(v39[3]) + v27), v26, v25, v23);
      (*(void (__fastcall **)(_QWORD *))(*v20 + 56LL))(v20);
      (*(void (__fastcall **)(_QWORD *, __int64))*v20)(v20, 1LL);
    }
    ObfDereferenceObject(v14);
    ObCloseHandle(Handle, 1);
  }
  return (unsigned int)v13;
}

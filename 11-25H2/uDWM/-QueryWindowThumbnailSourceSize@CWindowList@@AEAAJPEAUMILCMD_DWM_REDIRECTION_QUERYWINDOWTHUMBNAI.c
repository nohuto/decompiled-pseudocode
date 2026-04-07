/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008F2B0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18001E45C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z @ 0x1800769FC (-s_CalculateSWRUsageFlags@CThumbnailVisual@@SA-AU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  const struct std::nothrow_t *v4; // rdx
  struct CWindowData *v5; // r15
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  unsigned int *v9; // rax
  int v10; // eax
  CSecondaryWindowRepresentation *v11; // r14
  int v12; // ecx
  int v13; // eax
  struct CWindowData *RepresentationWindowData; // rax
  void *v16; // [rsp+20h] [rbp-20h]
  struct tagRECT v17; // [rsp+30h] [rbp-10h] BYREF
  struct CWindowData *v18; // [rsp+88h] [rbp+48h] BYREF
  CSecondaryWindowRepresentation *v19; // [rsp+90h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+98h] [rbp+58h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  v19 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v18);
  v5 = v18;
  if ( v18 )
  {
    v7 = operator new[](0x18uLL, v4);
    v18 = (struct CWindowData *)v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = 0LL;
      v7[2] = 0LL;
      CBaseObject::CBaseObject((CBaseObject *)(v7 + 1));
      *v7 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
      *v8 = &CSWRListener::`vftable'{for `CBaseObject'};
      v9 = CThumbnailVisual::s_CalculateSWRUsageFlags((unsigned int *)&v18, *((_DWORD *)a2 + 3), 0, 0);
      LODWORD(v16) = 100;
      v10 = CSecondaryWindowRepresentation::Create(*v9, (__int64)v7, (__int64)v5, 0, v16, &v19);
      v6 = v10;
      v11 = v19;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x138Du, 0LL);
      }
      else
      {
        CSecondaryWindowRepresentation::GetRelativeWindowRect(v19, &v17);
        v12 = 0;
        if ( v17.right - v17.left >= 0 )
          v12 = v17.right - v17.left;
        *((_DWORD *)a2 + 4) = v12;
        v13 = 0;
        if ( v17.bottom - v17.top >= 0 )
          v13 = v17.bottom - v17.top;
        *((_DWORD *)a2 + 5) = v13;
        if ( (*((_BYTE *)v5 + 676) & 8) != 0
          && !*((_DWORD *)a2 + 3)
          && *((_DWORD *)v11 + 18) == 2
          && ((*((_DWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v11 + 64))
               + 29) & 0x1000000) != 0
           || (*((_BYTE *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v11 + 64))
               + 677) & 1) != 0) )
        {
          RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v11 + 64));
          *((_DWORD *)a2 + 4) -= *((_DWORD *)RepresentationWindowData + 76) + *((_DWORD *)RepresentationWindowData + 77);
          *((_DWORD *)a2 + 5) -= *((_DWORD *)RepresentationWindowData + 78) + *((_DWORD *)RepresentationWindowData + 79);
        }
      }
      if ( v11 )
        CBaseObject::Release(v11);
      CBaseObject::Release((CBaseObject *)(v7 + 1));
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1386u, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}

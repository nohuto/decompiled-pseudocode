/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180029EEC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z @ 0x180028B18 (-s_CalculateSWRUsageFlags@CThumbnailVisual@@SA-AU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  struct CWindowData *v4; // r15
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  unsigned int *v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  CSecondaryWindowRepresentation *v10; // r14
  int v11; // ecx
  int v12; // eax
  struct CWindowData *RepresentationWindowData; // rax
  struct tagRECT v15; // [rsp+30h] [rbp-10h] BYREF
  struct CWindowData *v16; // [rsp+88h] [rbp+48h] BYREF
  CSecondaryWindowRepresentation *v17; // [rsp+90h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+98h] [rbp+58h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0LL;
  v17 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v16);
  v4 = v16;
  if ( v16 )
  {
    v5 = operator new(0x18uLL);
    v16 = (struct CWindowData *)v5;
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      v5[2] = 0LL;
      CBaseObject::CBaseObject((CBaseObject *)(v5 + 1));
      *v5 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
      *v6 = &CSWRListener::`vftable'{for `CBaseObject'};
      v7 = CThumbnailVisual::s_CalculateSWRUsageFlags((unsigned int *)&v16, *((_DWORD *)a2 + 3), 0, 0);
      v8 = CSecondaryWindowRepresentation::Create(*v7, (__int64)v5, (__int64)v4, 0, 100, &v17);
      v9 = v8;
      v10 = v17;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x14AEu, 0LL);
      }
      else
      {
        CSecondaryWindowRepresentation::GetRelativeWindowRect(v17, &v15);
        v11 = 0;
        if ( v15.right - v15.left >= 0 )
          v11 = v15.right - v15.left;
        *((_DWORD *)a2 + 4) = v11;
        v12 = 0;
        if ( v15.bottom - v15.top >= 0 )
          v12 = v15.bottom - v15.top;
        *((_DWORD *)a2 + 5) = v12;
        if ( (*((_BYTE *)v4 + 740) & 8) != 0
          && !*((_DWORD *)a2 + 3)
          && *((_DWORD *)v10 + 18) == 2
          && ((*((_DWORD *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v10 + 64))
               + 29) & 0x1000000) != 0
           || (*((_BYTE *)CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v10 + 64))
               + 741) & 1) != 0) )
        {
          RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)v10 + 64));
          *((_DWORD *)a2 + 4) -= *((_DWORD *)RepresentationWindowData + 76) + *((_DWORD *)RepresentationWindowData + 77);
          *((_DWORD *)a2 + 5) -= *((_DWORD *)RepresentationWindowData + 78) + *((_DWORD *)RepresentationWindowData + 79);
        }
      }
      if ( v10 )
        CBaseObject::Release(v10);
      CBaseObject::Release((CBaseObject *)(v5 + 1));
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x14A7u, 0LL);
    }
  }
  else
  {
    v9 = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}

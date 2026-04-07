/*
 * XREFs of ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800183A8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x180083B58 (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x1800E5084 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800E58A8 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::MonitorChange(CAcrylicSheet **this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  struct CWindowData *v5; // rbx
  __int64 v6; // rdi
  int v7; // r14d
  int v8; // r15d
  double v9; // xmm6_8
  bool v10; // cl
  BOOL v11; // esi
  int updated; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  CAcrylicSheet *v17; // rcx
  int v18; // eax
  struct CWindowData *v19; // [rsp+90h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+98h] [rbp+20h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v19 = 0LL;
  CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, &v19);
  v5 = v19;
  if ( v19 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    v7 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v9 = *(double *)v6;
    if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 7 )
      IsWCOSContainer();
    v10 = *((double *)v5 + 42) != v9 || *((_DWORD *)v5 + 86) != v8 || *((_DWORD *)v5 + 87) != v7;
    v11 = *((_DWORD *)v5 + 88) != *(_DWORD *)(v6 + 16)
       || *((_DWORD *)v5 + 89) != *(_DWORD *)(v6 + 20)
       || *((_DWORD *)v5 + 90) != *(_DWORD *)(v6 + 24)
       || *((_DWORD *)v5 + 91) != *(_DWORD *)(v6 + 28)
       || ((*((_BYTE *)v5 + 372) ^ *(_BYTE *)(v6 + 36)) & 1) != 0
       || *((_DWORD *)v5 + 92) != *(_DWORD *)(v6 + 32);
    *((_OWORD *)v5 + 21) = *(_OWORD *)v6;
    *((_OWORD *)v5 + 22) = *(_OWORD *)(v6 + 16);
    *((_OWORD *)v5 + 23) = *(_OWORD *)(v6 + 32);
    *((_OWORD *)v5 + 24) = *(_OWORD *)(v6 + 48);
    *((_QWORD *)v5 + 50) = *(_QWORD *)(v6 + 64);
    *((_DWORD *)v5 + 87) = v7;
    *((_DWORD *)v5 + 86) = v8;
    *((double *)v5 + 42) = v9;
    if ( *((_QWORD *)v5 + 55)
      && v10
      && (CTopLevelWindow::OnSettingsUpdated(*((CTopLevelWindow **)v5 + 55), 1u), (v17 = this[67]) != 0LL)
      && this[87] == v5
      && (v18 = CAcrylicSheet::SetDpi(v17, v7), v4 = v18, v18 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x18D8u, 0LL);
    }
    else
    {
      updated = CWindowList::UpdateWindowScale((CWindowList *)this, v5, v11);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x18DCu, 0LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0pddddd_EtwEventWriteTransfer(
            v14,
            v13,
            *((_QWORD *)v5 + 5),
            *((_DWORD *)v5 + 86),
            *((_DWORD *)v5 + 88),
            *((_DWORD *)v5 + 89),
            *((_DWORD *)v5 + 90),
            *((_DWORD *)v5 + 91));
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 59)
                                                                      + 112LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                v5);
        v4 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x18E8u, 0LL);
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}

/*
 * XREFs of ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001C6E8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009418C (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x1800E9368 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800E9C40 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  CAcrylicSheet *v12; // rcx
  int v13; // eax
  int updated; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  struct CWindowData *v19; // [rsp+90h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+98h] [rbp+20h] BYREF

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
       || ((*(_BYTE *)(v6 + 36) ^ *((_BYTE *)v5 + 372)) & 1) != 0
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
      && (CTopLevelWindow::OnSettingsUpdated(*((CTopLevelWindow **)v5 + 55), 1), (v12 = this[67]) != 0LL)
      && this[87] == v5
      && (v13 = CAcrylicSheet::SetDpi(v12, v7), v4 = v13, v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x17B7u, 0LL);
    }
    else
    {
      updated = CWindowList::UpdateWindowScale(this, v5, v11);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x17BBu, 0LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0pddddd_EtwEventWriteTransfer(
            v16,
            v15,
            *((_QWORD *)v5 + 5),
            *((_DWORD *)v5 + 86),
            *((_DWORD *)v5 + 88),
            *((_DWORD *)v5 + 89),
            *((_DWORD *)v5 + 90),
            *((_DWORD *)v5 + 91));
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 58)
                                                                      + 128LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                v5);
        v4 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x17C7u, 0LL);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v4;
}

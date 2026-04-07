/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180028C4C
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@@Z @ 0x180028DC8 (-AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032A64 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        struct CSecondaryWindowRepresentation *a1,
        int a2,
        __int64 a3,
        CWindowData *a4,
        int a5,
        int a6)
{
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v12; // eax
  HWND v13; // rdx
  int v14; // r9d
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // eax
  CBaseObject *v19; // rcx
  CBaseObject *v20; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 41) = a5;
  *((_DWORD *)a1 + 30) = a6;
  *((_DWORD *)a1 + 10) = a2;
  *((_QWORD *)a1 + 4) = a4;
  *((_QWORD *)a1 + 21) = a3;
  if ( (a2 & 1) != 0 && (v12 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(a1), v9 = v12, v12 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x71u, 0LL);
  }
  else
  {
    v8 = CWindowData::AddSecondaryWindowRepresentationToPrimary(a4, a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x74u, 0LL);
    }
    else
    {
      *((_BYTE *)a1 + 160) = 1;
      v10 = CSecondaryWindowRepresentation::OnRepresentationUpdated(a1);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x7Cu, 0LL);
      }
      else if ( (*((_DWORD *)a1 + 10) & 0x400) != 0 )
      {
        v13 = (HWND)*((_QWORD *)a4 + 5);
        v20 = 0LL;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                    v13,
                    &v20) >= 0 )
        {
          if ( *((_BYTE *)v20 + 276) )
          {
            v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 56LL)
                - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 48LL);
            v15 = 0;
            v16 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)a1 + 4) + 48LL);
            v17 = 0;
            if ( v16 >= 0 )
              v15 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)a1 + 4) + 48LL);
            if ( v14 >= 0 )
              v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 56LL)
                  - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 48LL);
            if ( v17 == v15 )
            {
              v18 = 0;
              if ( v14 >= 0 )
                v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 56LL)
                    - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 26) + 32LL) + 48LL);
              if ( v16 < 0 )
                v16 = 0;
              if ( v18 == v16 )
              {
                v19 = v20;
                *((_QWORD *)a1 + 31) = v20;
                CBaseObject::AddRef(v19);
                *((_BYTE *)a1 + 161) = 1;
              }
            }
          }
        }
      }
    }
  }
  return v9;
}

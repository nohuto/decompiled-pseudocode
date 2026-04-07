/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800042C8
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180003EAC (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800040AC (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000A5C4 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180003BB4 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800D0B7C (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // r9
  bool v3; // bl
  unsigned int v4; // edi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  struct CTransitionWindowSnapshot *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 36);
  v3 = 0;
  v4 = a2;
  if ( (*(_BYTE *)(v2 + 676) & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 680) & 0xFFF) == 0xFFF
      || (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                *(HWND *)(v2 + 40),
                &v11) < 0 )
    {
      return v3;
    }
    v3 = 1;
    goto LABEL_12;
  }
  v7 = 0x100000LL;
  do
  {
    v8 = (unsigned int)v7;
    if ( !v2 )
      break;
    v9 = *(_DWORD *)(v2 + 680);
    v2 = *(_QWORD *)(v2 + 600);
    v10 = v7 & v9;
    LODWORD(v7) = v7 | 0x10000000;
    v3 = v10 == (_DWORD)v8;
  }
  while ( v10 != (_DWORD)v8 );
  if ( v3 )
  {
LABEL_12:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pq_EtwEventWriteTransfer(v7, v8, *(_QWORD *)(*((_QWORD *)this + 36) + 40LL), v4);
  }
  return v3;
}

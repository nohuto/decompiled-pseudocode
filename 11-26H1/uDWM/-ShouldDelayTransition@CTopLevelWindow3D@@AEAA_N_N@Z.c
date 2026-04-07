/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180014854 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x1800430D0 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032A64 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800CC320 (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // rax
  bool v3; // bl
  unsigned int v4; // esi
  CTopLevelWindow3D *v5; // rdi
  __int64 v6; // rdx
  int v8; // r8d
  struct CTransitionWindowSnapshot *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 29);
  v3 = 0;
  v4 = a2;
  v5 = this;
  if ( (*(_BYTE *)(v2 + 740) & 1) == 0 )
  {
    if ( a2 )
    {
      v6 = 0x100000LL;
      do
      {
        v8 = v6;
        if ( !v2 )
          break;
        this = (CTopLevelWindow3D *)(*(_DWORD *)(v2 + 744) & (unsigned int)v6);
        v2 = *(_QWORD *)(v2 + 600);
        v3 = (_DWORD)this == (_DWORD)v6;
        LODWORD(v6) = v6 | 0x10000000;
      }
      while ( (_DWORD)this != v8 );
      if ( !v3 )
        return v3;
    }
    else
    {
      if ( (*(_DWORD *)(v2 + 744) & 0xFFF) == 0xFFF
        || (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                  *(HWND *)(v2 + 40),
                  &v9) < 0 )
      {
        return 0;
      }
      v3 = 1;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pq_EtwEventWriteTransfer(this, v6, *(_QWORD *)(*((_QWORD *)v5 + 29) + 40LL), v4);
  }
  return v3;
}

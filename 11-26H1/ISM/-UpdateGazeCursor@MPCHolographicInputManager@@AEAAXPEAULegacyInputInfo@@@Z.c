/*
 * XREFs of ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18000CB14
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18000EE4C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeCursor(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2)
{
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 418),
      (char *)a2 + 240,
      0LL,
      (char *)this + 3400);
    memcpy_0((char *)this + 264, a2, 0xBC0uLL);
  }
}

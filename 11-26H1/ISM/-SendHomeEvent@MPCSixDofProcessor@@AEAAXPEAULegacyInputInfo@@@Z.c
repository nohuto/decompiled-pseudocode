/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C17D0
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B8618 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_180254D1C )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_180254D18,
      &v4);
    byte_180254D1C = 1;
  }
  if ( dword_180254D18 != 1 )
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **((_DWORD **)this + 6),
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 567),
      0x10u);
}

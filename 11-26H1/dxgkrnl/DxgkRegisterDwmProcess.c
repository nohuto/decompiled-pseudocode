/*
 * XREFs of DxgkRegisterDwmProcess @ 0x14041AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x14001826C (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400635F4 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int CurrentProcessSessionId; // eax
  DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rdi
  VIDSCH_EXPORT *v14; // rbx
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2, v1, v4, v5);
    DxgkLogCodePointPacketForSession(115, CurrentProcessSessionId, 0, 1u, 0, 0LL);
    *((_DWORD *)Current + 102) |= 4u;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v9, v10, v11);
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionData);
    v13 = 0LL;
    *(_BYTE *)(*((_QWORD *)Current + 8) + 138LL) = 1;
    while ( (unsigned int)v13 < 2 )
    {
      DXGGLOBAL::GetGlobal();
      if ( DXGGLOBAL::m_pDxgmmsExport[v13] )
      {
        v14 = (VIDSCH_EXPORT *)*((_QWORD *)DXGGLOBAL::GetGlobal() + v13 + 35);
        v16 = DXGPROCESS::GetCurrent(v15);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v14, v16);
        if ( (int)result < 0 )
          return result;
      }
      v13 = (unsigned int)(v13 + 1);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3850;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"An attempt was made to register the DWM process for a process that has no DXGPROCESS",
      3850LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}

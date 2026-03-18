/*
 * XREFs of ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x14018E10C
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018DFF4 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, unsigned int a2)
{
  DXGPROCESS *Current; // rax

  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESS::FreeHandleSafe(Current, a2);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1175;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 1175LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}

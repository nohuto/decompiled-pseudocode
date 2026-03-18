/*
 * XREFs of ?SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z @ 0x1403FBD8C
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403FBC3C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x140064F70 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::SetPartOfDesktop(DISPLAY_SOURCE *this, char a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *SessionData; // rax

  if ( (*((_BYTE *)this + 762) != 0) != (a2 != 0) )
  {
    *((_BYTE *)this + 762) = a2;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = (volatile signed __int32 *)DXGGLOBAL::GetSessionData(Global, v4, v5, v6);
    if ( a2 )
      _InterlockedIncrement(SessionData + 4632);
    else
      DXGSESSIONDATA::DecrementDesktopVidPnCount((DXGSESSIONDATA *)SessionData);
  }
}

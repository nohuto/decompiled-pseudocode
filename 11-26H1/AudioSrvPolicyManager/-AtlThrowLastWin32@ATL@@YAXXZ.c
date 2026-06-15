/*
 * XREFs of ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002E7BC
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18001E310 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18001E600 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18001E92C (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800240B0 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180028D64 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::AtlThrowLastWin32(void)
{
  signed int LastError; // eax

  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  ATL::AtlThrowImpl(LastError);
}

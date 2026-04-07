/*
 * XREFs of ??$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180072D64
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetFirstNonNull<CSpriteVisual,CAccent,CSystemBackdropVisual>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+18h] [rbp-10h] BYREF

  v6[0] = a2;
  v4 = v6;
  v6[1] = a3;
  v6[2] = a4;
  while ( 1 )
  {
    if ( v4 == &v7 )
      return 0LL;
    if ( *v4 )
      break;
    ++v4;
  }
  return *v4;
}

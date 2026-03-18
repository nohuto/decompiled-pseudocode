/*
 * XREFs of ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402A79AC
 * Callers:
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A803C (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A948C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140029D14 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall MarkActionForMoveSizeShellNotifications(
        struct MOVESIZEDATA *a1,
        struct AdvancedWindowPos::CWindowAction *a2)
{
  int v2; // eax
  int v5; // eax
  int v6; // r8d
  int v7; // eax

  v2 = *((_DWORD *)a1 + 78);
  *(_DWORD *)a2 |= 0x400u;
  *((_DWORD *)a2 + 33) = v2;
  v5 = 1;
  v6 = *((_DWORD *)a1 + 44);
  *((_DWORD *)a2 + 27) |= 4u;
  if ( v6 == 9 )
    v5 = 3;
  *((_DWORD *)a2 + 35) = v5;
  if ( IsShellParticipatesInSizing(*((const struct tagWND **)a1 + 2), (unsigned int)a2) )
  {
    if ( (*((_DWORD *)a1 + 79) & 2) != 0 )
    {
      v7 = *((_DWORD *)a1 + 50);
      *((_DWORD *)a2 + 27) |= 8u;
      *((_DWORD *)a2 + 34) = (v7 & 0x8000) == 0;
    }
  }
}

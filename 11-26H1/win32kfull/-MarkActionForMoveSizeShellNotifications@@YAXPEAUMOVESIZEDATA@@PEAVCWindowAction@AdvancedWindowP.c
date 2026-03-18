/*
 * XREFs of ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402C48F8
 * Callers:
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C4EA8 (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C623C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x1400110B0 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall MarkActionForMoveSizeShellNotifications(
        struct MOVESIZEDATA *a1,
        struct AdvancedWindowPos::CWindowAction *a2)
{
  int v2; // eax
  int v5; // eax
  int v6; // r8d
  char v7; // al
  int v8; // ecx
  int v9; // eax

  v2 = *((_DWORD *)a1 + 94);
  *(_DWORD *)a2 |= 0x400u;
  *((_DWORD *)a2 + 33) = v2;
  v5 = 1;
  v6 = *((_DWORD *)a1 + 44);
  *((_DWORD *)a2 + 27) |= 4u;
  if ( v6 == 9 )
    v5 = 3;
  *((_DWORD *)a2 + 35) = v5;
  v7 = IsShellParticipatesInSizing(*((const struct tagWND **)a1 + 2), (unsigned int)a2);
  v8 = 0;
  if ( v7 )
  {
    if ( (*((_DWORD *)a1 + 95) & 2) != 0 )
    {
      v9 = *((_DWORD *)a1 + 50);
      *((_DWORD *)a2 + 27) |= 8u;
      LOBYTE(v8) = (v9 & 0x8000) == 0;
      *((_DWORD *)a2 + 34) = v8;
    }
  }
}

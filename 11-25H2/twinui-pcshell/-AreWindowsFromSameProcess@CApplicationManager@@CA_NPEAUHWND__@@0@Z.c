/*
 * XREFs of ?AreWindowsFromSameProcess@CApplicationManager@@CA_NPEAUHWND__@@0@Z @ 0x1802E5140
 * Callers:
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801F0B58 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManager::AreWindowsFromSameProcess(HWND a1, HWND a2)
{
  char v3; // si
  DWORD WindowThreadProcessId; // ebx
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF
  DWORD v7; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0;
  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a1, &v7);
  if ( WindowThreadProcessId == GetWindowThreadProcessId(a2, &dwProcessId) )
    return v7 == dwProcessId;
  return v3;
}

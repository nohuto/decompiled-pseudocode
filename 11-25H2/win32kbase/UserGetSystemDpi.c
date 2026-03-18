/*
 * XREFs of UserGetSystemDpi @ 0x1401C1B80
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetSystemDpi(_WORD *a1, _WORD *a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  *a1 = *(_WORD *)(CurrentProcessWin32Process + 272);
  result = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872) + 6998LL);
  *a2 = result;
  return result;
}

/*
 * XREFs of ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x140247D80
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ClientFrame @ 0x14030280C (ClientFrame.c)
 */

void __fastcall DWP_DrawItem(struct tagDRAWITEMSTRUCT *a1, __int64 a2)
{
  int v3; // eax

  if ( *(_DWORD *)a1 == 2 )
  {
    v3 = *((_DWORD *)a1 + 3);
    if ( v3 == 4 || v3 == 1 && (*((_DWORD *)a1 + 4) & 0x10) != 0 )
    {
      W32GetUserSessionState(a1, a2);
      ClientFrame(*((HDC *)a1 + 4));
    }
  }
}

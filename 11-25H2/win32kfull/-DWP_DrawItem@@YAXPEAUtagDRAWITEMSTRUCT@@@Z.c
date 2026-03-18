/*
 * XREFs of ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14020E5F4
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ClientFrame @ 0x1402F2E1C (ClientFrame.c)
 */

void __fastcall DWP_DrawItem(struct tagDRAWITEMSTRUCT *a1, __int64 a2)
{
  int v3; // eax
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)a1 == 2 )
  {
    v3 = *((_DWORD *)a1 + 3);
    if ( v3 == 4 || v3 == 1 && (*((_DWORD *)a1 + 4) & 0x10) != 0 )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      ClientFrame(*((_QWORD *)a1 + 4), (char *)a1 + 40, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4944LL));
    }
  }
}

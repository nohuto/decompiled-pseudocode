/*
 * XREFs of FeedbackGetWindowSetting @ 0x1401D21D0
 * Callers:
 *     _anonymous_namespace_::GetWindowBarrelVisualizationSetting @ 0x140197200 (_anonymous_namespace_--GetWindowBarrelVisualizationSetting.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x1401972D4 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1401D2070 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // edi
  __int64 UserSessionState; // rax
  int Prop; // eax
  unsigned __int8 v11; // cf
  __int64 result; // rax

  v6 = a2;
  v7 = a1;
  v8 = 0;
  while ( v7 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    Prop = GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41350), 1u);
    a1 = v6;
    a2 = (unsigned int)(0x10000 << v6);
    if ( ((unsigned int)a2 & Prop) != 0 )
    {
      v11 = _bittest(&Prop, v6);
      result = 1LL;
      LOBYTE(v8) = v11;
      *a4 = v8;
      return result;
    }
    if ( (a3 & 1) == 0 || IsTopLevelWindow(v7) )
      v7 = 0LL;
    else
      v7 = *(_QWORD *)(v7 + 104);
  }
  return 0LL;
}

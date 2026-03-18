/*
 * XREFs of UpdateInputSettingWnfState @ 0x14016D960
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x140163F00 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1401D7790 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  char v5; // r10
  _DWORD *v6; // r11
  _DWORD *v7; // rdx
  unsigned int i; // r9d
  __int64 v10; // r8

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = 0;
  v6 = (_DWORD *)(UserSessionState + 18640);
  ++*(_DWORD *)(UserSessionState + 18640);
  v7 = (_DWORD *)(UserSessionState + 18644);
  for ( i = 0; i < 4; ++i )
  {
    if ( *v7 == a1 )
    {
      v5 = 1;
      v7[1] = *v6;
    }
    else if ( !v5 )
    {
      goto LABEL_4;
    }
    if ( i < 3 )
    {
      v10 = *(_QWORD *)v7;
      *(_QWORD *)v7 = *(_QWORD *)(UserSessionState + 8LL * (i + 1) + 18644);
      *(_QWORD *)(UserSessionState + 8LL * (i + 1) + 18644) = v10;
    }
LABEL_4:
    v7 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, v6, 36LL, 0LL, 0LL, 0, 0);
}

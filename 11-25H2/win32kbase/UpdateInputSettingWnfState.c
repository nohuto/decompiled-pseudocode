/*
 * XREFs of UpdateInputSettingWnfState @ 0x1401334C0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012F2E0 (UpdateTPCurrentActiveState.c)
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInputSettingWnfState(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 UserSessionState; // rax
  char v4; // r10
  __int64 v5; // rbx
  _DWORD *v6; // r11
  _DWORD *v7; // rdx
  unsigned int i; // r9d
  __int64 v10; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0;
  v5 = UserSessionState;
  v6 = (_DWORD *)(UserSessionState + 18592);
  ++*(_DWORD *)(UserSessionState + 18592);
  v7 = (_DWORD *)(UserSessionState + 18596);
  for ( i = 0; i < 4; ++i )
  {
    if ( *v7 == v2 )
    {
      v4 = 1;
      v7[1] = *v6;
    }
    else if ( !v4 )
    {
      goto LABEL_4;
    }
    if ( i < 3 )
    {
      v10 = *(_QWORD *)v7;
      *(_QWORD *)v7 = *(_QWORD *)(v5 + 8LL * (i + 1) + 18596);
      *(_QWORD *)(v5 + 8LL * (i + 1) + 18596) = v10;
    }
LABEL_4:
    v7 += 2;
  }
  return ZwUpdateWnfStateData(&WNF_INPT_SETTINGS_CHANGE, v6, 36LL, 0LL, 0LL);
}

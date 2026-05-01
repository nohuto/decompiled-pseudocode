/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x1802EDF50
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802EE248 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802EE464 (-_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

int __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v2; // r14
  CImmersiveApplicationTransitionHelper *v3; // rbp
  HWND v4; // rsi
  HWND v5; // rbx
  int result; // eax
  int v7; // r15d
  char v8; // di
  HWND v9; // r8
  HWND v10; // r8

  v2 = (HWND)*((_QWORD *)a2 + 1);
  v3 = (CImmersiveApplicationTransitionHelper *)((char *)this - 32);
  v4 = *(HWND *)a2;
  v5 = 0LL;
  if ( !*((_BYTE *)this + 16) )
    return -2147483638;
  v7 = (unsigned __int8)GetPropW(v2, L"AppWindowTransitionType") & 4;
  if ( ((unsigned __int8)GetPropW(v4, L"AppWindowTransitionType") & 4) != 0 )
  {
    v8 = 1;
    v9 = v4;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  result = CImmersiveApplicationTransitionHelper::_BeginCharmPopupTransitionRequest(
             v3,
             (HWND)((unsigned __int64)v2 & -(__int64)(v7 != 0)),
             v9);
  if ( result >= 0 )
  {
    v10 = 0LL;
    if ( !v8 )
      v10 = v4;
    if ( !v7 )
      v5 = v2;
    return CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(v3, v5, v10);
  }
  return result;
}

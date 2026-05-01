/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x1802F2FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802F32B4 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802F34D0 (-_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

int __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v2; // rdi
  HWND v4; // rsi
  int result; // eax
  int v6; // ebp
  CImmersiveApplicationTransitionHelper *v7; // rbx
  char v8; // r14
  HWND v9; // r8

  v2 = (HWND)*((_QWORD *)a2 + 1);
  v4 = *(HWND *)a2;
  if ( !*((_BYTE *)this + 16) )
    return -2147483638;
  v6 = (unsigned __int8)GetPropW(v2, L"AppWindowTransitionType") & 4;
  v7 = (CImmersiveApplicationTransitionHelper *)((char *)this - 32);
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
             v7,
             (HWND)((unsigned __int64)v2 & -(__int64)(v6 != 0)),
             v9);
  if ( result >= 0 )
  {
    if ( v8 )
      v4 = 0LL;
    if ( v6 )
      v2 = 0LL;
    return CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(v7, v2, v4);
  }
  return result;
}

/*
 * XREFs of ?HandleVisibilityOverrideImmunityChange@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1802FE060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1802090C8 (WPP_SF_Sd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::HandleVisibilityOverrideImmunityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( a2 == 1 && a3 == 2 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_Sd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xCu,
        &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
        *(const wchar_t **)(a1 + 464),
        *(_DWORD *)(a1 + 472));
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
  }
  return result;
}

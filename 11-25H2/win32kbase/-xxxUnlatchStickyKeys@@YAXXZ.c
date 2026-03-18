/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x14015C490
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB7B0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxUnlatchStickyKeys(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 (__fastcall **v7)(struct tagKE *, __int64, int); // rcx
  bool v8; // zf

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = W32GetUserSessionState(v4, v3);
  if ( *(_BYTE *)(v5 + 21849) )
  {
    LODWORD(v6) = 0;
    v7 = (__int64 (__fastcall **)(struct tagKE *, __int64, int))off_14024BD38;
    while ( (unsigned int)v6 < 5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( *v7 == xxxStickyKeys )
      {
        xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21850), v6);
        v8 = *(_BYTE *)(v5 + 21849) == 0;
        *(_BYTE *)(v5 + 21849) = 0;
        if ( !v8 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        return;
      }
      ++v7;
    }
  }
}

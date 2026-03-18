/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x14019C560
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxUnlatchStickyKeys(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 (__fastcall **v9)(struct tagKE *, unsigned int, int); // rcx
  bool v10; // zf

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v7 = W32GetUserSessionState(v5, v4, v6);
  if ( *(_BYTE *)(v7 + 21881) )
  {
    v8 = 0;
    v9 = off_140255F50;
    while ( v8 < 5 )
    {
      ++v8;
      if ( *v9 == xxxStickyKeys )
      {
        xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21882), v8, (int)xxxStickyKeys);
        v10 = *(_BYTE *)(v7 + 21881) == 0;
        *(_BYTE *)(v7 + 21881) = 0;
        if ( !v10 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        return;
      }
      ++v9;
    }
  }
}

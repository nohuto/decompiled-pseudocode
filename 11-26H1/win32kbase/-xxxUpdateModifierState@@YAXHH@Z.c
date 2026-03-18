/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x14019C560 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1402134A0 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateModifierState(int a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // esi
  _DWORD *v10; // rbx
  unsigned int i; // edi
  int v12; // ecx
  __int16 v13; // ax
  _OWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v5 = *(unsigned __int8 *)(W32GetUserSessionState(a1, a2, a3) + 21881);
  v9 = v5 | *(unsigned __int8 *)(W32GetUserSessionState(v7, v6, v8) + 21882);
  v10 = &unk_14026A954;
  for ( i = 0; i < 8; ++i )
  {
    v12 = v9 & *(v10 - 1);
    if ( v12 != (a1 & *(v10 - 1)) )
    {
      LOBYTE(v14[0]) = *(_BYTE *)v10;
      v13 = *((_WORD *)v10 + 1);
      WORD1(v14[0]) = v13;
      if ( v12 )
        WORD1(v14[0]) = v13 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v14, 0, a2) )
        xxxProcessKeyEvent((unsigned int)v14, 0, 0, 0, 0LL, 0LL);
    }
    v10 += 2;
  }
}

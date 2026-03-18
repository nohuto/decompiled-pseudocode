/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB7B0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FB2C0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x14015C490 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F9CB0 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateModifierState(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // ebp
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  _DWORD *v8; // rbx
  unsigned int i; // edi
  int v10; // ecx
  __int16 v11; // ax
  _OWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  memset(v12, 0, sizeof(v12));
  v3 = a1;
  v4 = *(unsigned __int8 *)(W32GetUserSessionState(a1, a2) + 21849);
  v7 = v4 | *(unsigned __int8 *)(W32GetUserSessionState(v6, v5) + 21850);
  v8 = &unk_140261F34;
  for ( i = 0; i < 8; ++i )
  {
    v10 = v7 & *(v8 - 1);
    if ( v10 != (v3 & *(v8 - 1)) )
    {
      LOBYTE(v12[0]) = *(_BYTE *)v8;
      v11 = *((_WORD *)v8 + 1);
      WORD1(v12[0]) = v11;
      if ( v10 )
        WORD1(v12[0]) = v11 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v12, 0, v2) )
        xxxProcessKeyEvent((unsigned int)v12, 0, 0, 0, 0LL, 0LL);
    }
    v8 += 2;
  }
}

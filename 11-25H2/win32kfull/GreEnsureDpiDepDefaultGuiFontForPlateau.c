/*
 * XREFs of GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x140309F70
 * Callers:
 *     NtGdiEnsureDpiDepDefaultGuiFontForPlateau @ 0x140339220 (NtGdiEnsureDpiDepDefaultGuiFontForPlateau.c)
 * Callees:
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1403EDDD8 (hfontInitDefaultGuiFont.c)
 */

void __fastcall GreEnsureDpiDepDefaultGuiFontForPlateau(Gre::Base *a1)
{
  unsigned int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  int v3; // ecx
  int v4; // edx
  __int64 v5; // rsi
  struct W32_PUSH_LOCK *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  v2 = Gre::Base::Globals(a1);
  if ( !v1 || v1 != 96 && v1 == 24 * ((int)v1 / 24) )
  {
    v3 = v1 - 120;
    if ( v1 - 120 <= 0x168 )
    {
      v4 = v3 / 24;
      if ( v3 / 24 >= 0 )
      {
        v5 = v4;
        if ( !*(_QWORD *)(*((_QWORD *)v2 + 378) + 8LL * v4) )
        {
          v6 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v2 + 2168);
          if ( v2 != (struct Gre::Base::SESSION_GLOBALS *)-2168LL )
            GreAcquirePushLockExclusive((struct Gre::Base::SESSION_GLOBALS *)((char *)v2 + 2168));
          if ( !*(_QWORD *)(*((_QWORD *)v2 + 378) + 8 * v5) )
            *(_QWORD *)(*((_QWORD *)v2 + 378) + 8 * v5) = hfontInitDefaultGuiFont(v1);
          Gre::PUSHLOCKEX::vUnlock(&v6, 0);
        }
      }
    }
  }
}

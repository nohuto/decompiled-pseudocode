/*
 * XREFs of ?vSetIncludeSprites@SURFACE@@SAXXZ @ 0x1401759F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SURFACE::vSetIncludeSprites(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax

  CurrentThread = GreGetCurrentThread(a1, a2);
  if ( CurrentThread )
    *((_DWORD *)CurrentThread + 84) |= 2u;
}

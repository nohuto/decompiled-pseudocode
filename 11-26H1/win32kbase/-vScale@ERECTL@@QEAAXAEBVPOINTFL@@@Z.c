/*
 * XREFs of ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x14003828C
 * Callers:
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140038B40 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x140038EBC (bFToL.c)
 */

void __fastcall ERECTL::vScale(ERECTL *this, const struct POINTFL *a2)
{
  _DWORD *v2; // rsi
  _DWORD *v3; // rbx
  _DWORD *v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8

  v2 = (_DWORD *)((char *)this + 4);
  v3 = (_DWORD *)((char *)this + 12);
  v4 = (_DWORD *)((char *)this + 8);
  if ( !(unsigned int)bFToL(this, this, 6LL)
    || !(unsigned int)bFToL(v6, v2, v7)
    || !(unsigned int)bFToL(v8, v4, v9)
    || !(unsigned int)bFToL(v10, v3, v11) )
  {
    *v3 = 0;
    *v4 = 0;
    *v2 = 0;
    *(_DWORD *)this = 0;
  }
}

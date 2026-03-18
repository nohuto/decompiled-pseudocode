/*
 * XREFs of HmgMarkDeletable @ 0x1400354E0
 * Callers:
 *     GreMarkDeletableBitmap @ 0x1400354C0 (GreMarkDeletableBitmap.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140035600 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HmgMarkDeletable(__int64 a1, char a2)
{
  __int16 v3; // edi^2
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+2Dh] [rbp-1Bh]

  v3 = WORD1(a1);
  v4 = 0;
  HANDLELOCK::HANDLELOCK(&v6, a1, 1LL);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v3 )
    {
      *(_BYTE *)(v6 + 15) &= ~1u;
      v4 = 1;
    }
    else
    {
      v8 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  return v4;
}

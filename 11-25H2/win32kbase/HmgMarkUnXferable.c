/*
 * XREFs of HmgMarkUnXferable @ 0x140143C10
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HmgMarkUnXferable(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+2Dh] [rbp-1Bh]

  v3 = HIWORD(a1);
  v4 = 0;
  HANDLELOCK::HANDLELOCK((__int64)&v8, a1, 3u);
  if ( v9 )
  {
    v5 = v8;
    if ( *(_BYTE *)(v8 + 14) == a2
      && *(_WORD *)(v8 + 12) == v3
      && (v6 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE, v6 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      *(_BYTE *)(v5 + 15) &= ~0x20u;
      v4 = 1;
    }
    else
    {
      v10 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  return v4;
}

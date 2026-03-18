/*
 * XREFs of GreSetSolidBrushLight @ 0x140071A70
 * Callers:
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x140090080 (GreDCSelectPen.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x140071BD0 (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140091E00 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // esi
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  __int16 v19; // [rsp+2Ch] [rbp-2Ch]
  __int64 v20; // [rsp+30h] [rbp-28h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 )
    {
      v8 = (v7 >> 10) & 1;
      if ( (a3 != 0) == (_DWORD)v8 )
      {
        v9 = 0;
        v10 = 0LL;
        v17 = 0LL;
        v18 = 0;
        v19 = 0;
        v11 = *(_QWORD *)(W32GetSessionState(v8) + 88);
        v12 = (*(_DWORD *)a1 >> 8) & 0xFF0000;
        v13 = (unsigned __int16)*(_DWORD *)a1;
        v20 = v11;
        HANDLELOCK::vLockHandle(&v17, v13 | v12, 1);
        if ( v18 )
        {
          if ( *(_DWORD *)(a1 + 8) == 1 )
          {
            *(_DWORD *)(a1 + 76) = a2;
            v3 = 1;
            if ( *(_DWORD *)(a1 + 100) != -1 )
            {
              v14 = *(_DWORD *)(a1 + 40);
              if ( v14 >= 0 )
              {
                v10 = *(volatile signed __int32 **)(a1 + 120);
                v9 = ((unsigned int)v14 >> 30) & 1;
              }
            }
            *(_DWORD *)(a1 + 96) = 0;
            *(_DWORD *)(a1 + 100) = -1;
            if ( a3 )
              v15 = *(_DWORD *)(a1 + 40) & 0xC00 | 0x10;
            else
              v15 = 20;
            *(_DWORD *)(a1 + 80) = 7;
            *(_DWORD *)(a1 + 40) = v15;
            *(_DWORD *)(a1 + 44) = BRUSH::ulGlobalBrushUnique((BRUSH *)0xFFFFFFFFLL);
          }
          else
          {
            HIBYTE(v19) = 1;
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
        }
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v10, v9);
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
    }
  }
  return v3;
}

/*
 * XREFs of GreSetSolidBrushLight @ 0x1400325A0
 * Callers:
 *     GreDCSelectPen @ 0x140038F40 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x14003A7C0 (GreDCSelectBrush.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1400326E0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x14003293C (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(__int64 a1, int a2, int a3)
{
  unsigned int v3; // r14d
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // eax
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+2Dh] [rbp-2Bh]

  v3 = 0;
  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( (v7 & 0x210) == 0x10 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0LL;
      v9 = -1;
      HANDLELOCK::HANDLELOCK(v13, a1, 1LL);
      if ( v14 )
      {
        if ( *(_DWORD *)(a1 + 8) == 1 )
        {
          *(_DWORD *)(a1 + 76) = a2;
          v3 = 1;
          if ( *(_DWORD *)(a1 + 100) != -1 )
          {
            v10 = *(_DWORD *)(a1 + 40);
            if ( v10 >= 0 )
            {
              v8 = *(volatile signed __int32 **)(a1 + 120);
              v9 = ((unsigned int)v10 >> 30) & 1;
            }
          }
          *(_DWORD *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 100) = -1;
          if ( a3 )
            v11 = *(_DWORD *)(a1 + 40) & 0xC00 | 0x10;
          else
            v11 = 20;
          *(_DWORD *)(a1 + 80) = 7;
          *(_DWORD *)(a1 + 40) = v11;
          *(_DWORD *)(a1 + 44) = BRUSH::ulGlobalBrushUnique((BRUSH *)0xFFFFFFFFLL);
        }
        else
        {
          v15 = 1;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v13);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v13);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v8, v9);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
  }
  return v3;
}

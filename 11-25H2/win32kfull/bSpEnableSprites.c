/*
 * XREFs of bSpEnableSprites @ 0x140330140
 * Callers:
 *     <none>
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140200E34 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032E3E4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const struct _RECTL *v4; // r14
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // rsi
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v11; // rdx
  REGION *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct REGION *v17; // [rsp+60h] [rbp+30h] BYREF
  REGION *v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 2544);
  v3 = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1;
  v4 = (const struct _RECTL *)(a1 + 120);
  v5 = (v2 + 24) & -(__int64)(v2 != 0);
  *(_QWORD *)(a1 + 112) = v5 & -(__int64)(v5 != 24);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v5 + 0x48);
  v6 = *(unsigned __int16 *)(v5 + 0x4C);
  *(_DWORD *)(v3 + 96) = v6;
  LODWORD(v2) = *(_DWORD *)(v5 + 0x58);
  *(_DWORD *)(v3 + 92) = v2;
  *(_DWORD *)(v3 + 104) = v6;
  *(_DWORD *)(v3 + 100) = v2;
  *(_DWORD *)(v3 + 112) = **(_DWORD **)(*(_QWORD *)(v5 + 104) + 112LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 104)
                                                                                               + 112LL)
                                                                                   + 8LL);
  v4->left = 0;
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(v5 + 36);
  *(_QWORD *)(v3 + 120) = GreCreateSemaphore();
  *(_BYTE *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(v3 + 672), (PULONG)(v3 + 688), 0x40u);
  GreInitializePushLock((struct W32_PUSH_LOCK *)(v3 + 696));
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
  if ( *(_QWORD *)(v3 + 120) )
  {
    if ( *(_QWORD *)(v3 + 136) )
    {
      if ( v18 )
      {
        if ( v19 )
        {
          if ( v17 )
          {
            v9 = (_DWORD *)Win32AllocPoolZInit(40LL, 1919972167LL);
            if ( v9 )
            {
              Surface = psoSpCreateSurface((struct _SPRITESTATE *)v3, 0, 1u, 1u);
              if ( Surface )
              {
                *v9 = *(_DWORD *)(v3 + 44);
                v9[1] = *(_DWORD *)(v3 + 52);
                *((_QWORD *)v9 + 1) = 40LL;
                *((_QWORD *)v9 + 2) = 0LL;
                v9[6] = v4->left;
                v9[7] = *(_DWORD *)(v3 + 48);
                *((_QWORD *)v9 + 4) = 0LL;
                *(_QWORD *)(v3 + 1032) = Surface;
                *(_QWORD *)(v3 + 144) = v9;
                *(_QWORD *)(v3 + 152) = v9 + 10;
                RGNOBJ::vSet((RGNOBJ *)&v17, v4);
                v11 = v17;
                *(_QWORD *)(v3 + 872) = v17;
                XCLIPOBJ::vSetup((XCLIPOBJ *)(v3 + 880), v11, (const struct ERECTL *)v4, 1);
                v12 = v18;
                *(_QWORD *)(v3 + 704) = v18;
                REGION::vStamp(v12);
                *(_QWORD *)(v3 + 712) = v19;
                *(_QWORD *)(v3 + 1064) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
                *(_QWORD *)(v3 + 1200) = *(_QWORD *)(a1 + 2808);
                *(_QWORD *)(v3 + 1208) = *(_QWORD *)(a1 + 2792);
                *(_QWORD *)(v3 + 1216) = *(_QWORD *)(a1 + 2800);
                *(_QWORD *)(v3 + 1232) = *(_QWORD *)(a1 + 2824);
                *(_QWORD *)(v3 + 1240) = *(_QWORD *)(a1 + 2832);
                *(_QWORD *)(v3 + 1248) = *(_QWORD *)(a1 + 2840);
                *(_QWORD *)(v3 + 1256) = *(_QWORD *)(a1 + 2864);
                *(_QWORD *)(v3 + 1264) = *(_QWORD *)(a1 + 2928);
                *(_QWORD *)(v3 + 1272) = *(_QWORD *)(a1 + 3272);
                *(_QWORD *)(v3 + 1280) = *(_QWORD *)(a1 + 3248);
                *(_QWORD *)(v3 + 1288) = *(_QWORD *)(a1 + 3240);
                *(_QWORD *)(v3 + 1296) = *(_QWORD *)(a1 + 3224);
                *(_QWORD *)(v3 + 1312) = *(_QWORD *)(a1 + 3232);
                *(_QWORD *)(v3 + 1304) = *(_QWORD *)(a1 + 3000);
                *(_QWORD *)(v3 + 1320) = *(_QWORD *)(a1 + 3400);
                if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
                {
                  vSpHook((struct _SPRITESTATE *)v3);
                  vSpComputeSpriteRanges(v13);
                }
                return 1LL;
              }
              Win32FreePool(v9);
            }
          }
        }
      }
    }
  }
  v15 = *(_QWORD *)(v3 + 120);
  if ( v15 )
    GreDeleteSemaphore(v15, v7, v8);
  v16 = *(_QWORD *)(v3 + 136);
  if ( v16 )
    GreDeleteSemaphore(v16, v7, v8);
  *(_QWORD *)(v3 + 120) = 0LL;
  *(_QWORD *)(v3 + 136) = 0LL;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  return 0LL;
}

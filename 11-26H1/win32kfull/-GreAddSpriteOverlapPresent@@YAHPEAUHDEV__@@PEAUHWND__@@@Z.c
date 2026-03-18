/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1403134CC
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x140186368 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1401EF4F8 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1403151E4 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x14031796C (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  struct _PRESENT *Present; // r14
  BOOL v6; // edi
  unsigned int i; // r12d
  HWND v8; // rdx
  HDEV v9; // rcx
  unsigned int j; // r12d
  struct _PRESENT *v11; // rax
  HDEV v12; // rcx
  void *v13; // rdx
  SPRITERANGELOCK *v14; // rbx
  HWND v15; // rdx
  HDEV v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rbx
  HSEMAPHORE *v20; // [rsp+50h] [rbp+8h]
  HSEMAPHORE *v21; // [rsp+50h] [rbp+8h]

  v2 = 0;
  Present = 0LL;
  v6 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 35); ++i )
    {
      v20 = (HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * i) + 200LL);
      SPRITERANGELOCK::vLockExclusive(v20);
      Present = pSpGetPresent(*(_QWORD **)(*((_QWORD *)a1 + 18) + 8LL * i), a2);
      if ( !Present )
      {
        Present = pSpCreatePresent(v9, v8);
        if ( !Present )
        {
          SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)v20);
          v6 = 0;
          for ( j = 0; j < *((_DWORD *)a1 + 35); ++j )
          {
            v21 = (HSEMAPHORE *)(*(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * j) + 200LL);
            SPRITERANGELOCK::vLockExclusive(v21);
            v11 = pSpGetPresent(*(_QWORD **)(*((_QWORD *)a1 + 18) + 8LL * j), a2);
            Present = v11;
            if ( v11 )
            {
              vSpRemovePresent(v12, v11);
              Win32FreePool(v13);
            }
            SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)v21);
          }
          break;
        }
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)v20);
    }
    v14 = (SPRITERANGELOCK *)(a1 + 50);
  }
  else
  {
    v14 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)a1 + 25);
    Present = pSpGetPresent(a1, a2);
    if ( !Present )
    {
      Present = pSpCreatePresent(v16, v15);
      v6 = Present != 0LL;
    }
    SPRITERANGELOCK::vUnlockExclusive(v14);
  }
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      v17 = 0;
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v17);
        SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(v18 + 200));
        vSpUpdateSpriteOverlapPresent(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v17), 0);
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v18 + 200));
        ++v17;
      }
      while ( v17 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)v14);
      vSpUpdateSpriteOverlapPresent(a1, 0);
      SPRITERANGELOCK::vUnlockExclusive(v14);
    }
  }
  LOBYTE(v2) = Present != 0LL;
  return v2;
}

/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     vSpDynamicModeChange @ 0x140185A00 (vSpDynamicModeChange.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140185EB0 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC564 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  unsigned __int64 *CurrentThreadWin32Thread; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  Gre::Base *v15; // rcx
  Gre::Base *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = *(_QWORD *)a1;
  CurrentThreadWin32Thread = (unsigned __int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = (v5 + 8) & ((unsigned __int128)-(__int128)v5 >> 64);
  if ( a2 )
  {
    if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v17) && (*(_DWORD *)(v6 + 340) || *(_DWORD *)(v6 + 344)) )
    {
      v7 = *((_DWORD *)a1 + 23);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL) = v7;
      v8 = *((_DWORD *)a1 + 24);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL) = v8;
      v9 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) = v9;
      v10 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 24LL) = v10;
      vSpTlSpriteStateDirectDriverAccess(a1, a2);
      **((_DWORD **)GreGetCurrentThread() + 34) = 1;
    }
    else
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v17) )
        Gre::Base::Globals(v15);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 23);
      *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 48);
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v17) && (*(_DWORD *)(v6 + 340) || *(_DWORD *)(v6 + 344)) )
  {
    v11 = *((_DWORD *)a1 + 25);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 12LL) = v11;
    v12 = *((_DWORD *)a1 + 26);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 16LL) = v12;
    v13 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 12LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) = v13;
    v14 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 16LL);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 24LL) = v14;
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    **((_DWORD **)GreGetCurrentThread() + 34) = 0;
  }
  else
  {
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v17) )
      Gre::Base::Globals(v16);
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 25);
    *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 52);
    *((_DWORD *)a1 + 22) = 0;
  }
}

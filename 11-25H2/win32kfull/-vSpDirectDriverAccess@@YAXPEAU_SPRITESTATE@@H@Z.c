/*
 * XREFs of ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DBA64
 * Callers:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1400DE37C (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     vSpDynamicModeChange @ 0x1400E0040 (vSpDynamicModeChange.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400E04FC (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DBD40 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall vSpDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 *CurrentThreadNonPaged; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  Gre::Base *v43; // rcx
  Gre::Base *v44; // rcx
  __int64 v45; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v45 = *(_QWORD *)a1;
  CurrentThreadNonPaged = (unsigned __int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  v6 = (v5 + 8) & ((unsigned __int128)-(__int128)v5 >> 64);
  if ( v2 )
  {
    if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v45) && (*(_DWORD *)(v6 + 348) || *(_DWORD *)(v6 + 352)) )
    {
      v9 = *((_DWORD *)a1 + 23);
      v10 = *((_QWORD *)GreGetCurrentThread(v8, v7) + 34);
      *(_DWORD *)(v10 + 4) = v9;
      v11 = *((_DWORD *)a1 + 24);
      v13 = *((_QWORD *)GreGetCurrentThread(v10, v12) + 34);
      *(_DWORD *)(v13 + 8) = v11;
      v15 = *((_QWORD *)GreGetCurrentThread(v13, v14) + 34);
      v16 = *(_DWORD *)(v15 + 4);
      v18 = *((_QWORD *)GreGetCurrentThread(v15, v17) + 34);
      *(_DWORD *)(v18 + 20) = v16;
      v20 = *((_QWORD *)GreGetCurrentThread(v18, v19) + 34);
      v21 = *(_DWORD *)(v20 + 8);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread(v20, v22) + 34) + 24LL) = v21;
      vSpTlSpriteStateDirectDriverAccess(a1, v2);
      **((_DWORD **)GreGetCurrentThread(v24, v23) + 34) = 1;
    }
    else
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v45) )
        Gre::Base::Globals(v43);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 23);
      *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 48);
      *((_DWORD *)a1 + 22) = 1;
    }
  }
  else if ( v6 && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v45) && (*(_DWORD *)(v6 + 348) || *(_DWORD *)(v6 + 352)) )
  {
    v27 = *((_DWORD *)a1 + 25);
    v28 = *((_QWORD *)GreGetCurrentThread(v26, v25) + 34);
    *(_DWORD *)(v28 + 12) = v27;
    v29 = *((_DWORD *)a1 + 26);
    v31 = *((_QWORD *)GreGetCurrentThread(v28, v30) + 34);
    *(_DWORD *)(v31 + 16) = v29;
    v33 = *((_QWORD *)GreGetCurrentThread(v31, v32) + 34);
    v34 = *(_DWORD *)(v33 + 12);
    v36 = *((_QWORD *)GreGetCurrentThread(v33, v35) + 34);
    *(_DWORD *)(v36 + 20) = v34;
    v38 = *((_QWORD *)GreGetCurrentThread(v36, v37) + 34);
    v39 = *(_DWORD *)(v38 + 16);
    *(_DWORD *)(*((_QWORD *)GreGetCurrentThread(v38, v40) + 34) + 24LL) = v39;
    vSpTlSpriteStateDirectDriverAccess(a1, 0);
    **((_DWORD **)GreGetCurrentThread(v42, v41) + 34) = 0;
  }
  else
  {
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v45) )
      Gre::Base::Globals(v44);
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) = *((_DWORD *)a1 + 25);
    *(_WORD *)(*((_QWORD *)a1 + 4) + 76LL) = *((_WORD *)a1 + 52);
    *((_DWORD *)a1 + 22) = 0;
  }
}

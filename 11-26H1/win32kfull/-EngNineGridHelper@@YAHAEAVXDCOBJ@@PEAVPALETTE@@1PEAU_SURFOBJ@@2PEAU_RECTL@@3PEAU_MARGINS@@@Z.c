/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x140312C80
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x140219F84 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1400DF040 (EngNineGrid.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  int v9; // r14d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v24; // [rsp+40h] [rbp-79h]
  Gre::Base *v25; // [rsp+60h] [rbp-59h] BYREF
  Gre::Base *v26; // [rsp+68h] [rbp-51h] BYREF
  Gre::Base *v27; // [rsp+70h] [rbp-49h] BYREF
  Gre::Base *v28; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v29[4]; // [rsp+80h] [rbp-39h] BYREF
  _DWORD v30[6]; // [rsp+A0h] [rbp-19h] BYREF

  v9 = (int)a4;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 3880LL);
  v30[1] = *(_DWORD *)a8;
  v30[2] = *((_DWORD *)a8 + 1);
  v30[3] = *((_DWORD *)a8 + 2);
  v30[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v30[0] = 5;
  v30[5] = 0;
  v29[0] = 33488896LL;
  v13 = *(_QWORD *)(v12 + 976);
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v24 = *(_DWORD *)(v13 + 176);
  LODWORD(v12) = *(_DWORD *)(v13 + 184);
  v25 = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v28,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       a3,
                       v12,
                       v24,
                       0,
                       0)
    && (unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v27, 0LL, 0, (__int64)a2, v11, (__int64)a3, a3, 0, 0, 0, 0)
    && (v29[1] = v27,
        (unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v26, 0LL, 0, (__int64)a2, v11, (__int64)a3, a3, 0, 0, 0, 0))
    && (v29[2] = v26,
        (unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v25, 0LL, 0, v11, (__int64)a2, (__int64)a3, a3, 0, 0, 0, 0)) )
  {
    v29[3] = v25;
    v16 = EngNineGrid(v9, (__int64)a5, 0, (int)v28, (__int64)a6, (__int64)a7, (__int64)v30, (__int64)v29);
  }
  else
  {
    v16 = 0;
  }
  EXLATEOBJ::vAltUnlock(&v25, v14, v15);
  EXLATEOBJ::vAltUnlock(&v26, v17, v18);
  EXLATEOBJ::vAltUnlock(&v27, v19, v20);
  EXLATEOBJ::vAltUnlock(&v28, v21, v22);
  return v16;
}

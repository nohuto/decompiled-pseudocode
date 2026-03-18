/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403149E0
 * Callers:
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403136D8 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140347B8C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpTearDownSprites(_DWORD *a1, struct _RECTL *a2, int a3)
{
  int v5; // eax
  HDEV v7; // rbx
  unsigned int v8; // edi
  int v9; // esi
  struct SPRITE *v10; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v13[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v14; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v15; // [rsp+170h] [rbp+70h] BYREF

  v11 = a1;
  v15 = 0LL;
  v14 = 0LL;
  v5 = a1[10];
  v10 = 0LL;
  if ( (v5 & 1) == 0 )
    return 0LL;
  v7 = (HDEV)(a1 + 20);
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v13, (struct PDEVOBJ *)&v11);
  v8 = 0;
  if ( *((_DWORD *)v7 + 14) && bIntersect(a2, (const struct _RECTL *)(v7 + 10), &v14) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v12, (struct _SPRITESTATE *)v7, &v14, 0, 0LL);
    do
    {
      v9 = ENUMAREAS::bEnum((ENUMAREAS *)v12, &v10, &v15);
      if ( v10 )
      {
        v8 = 1;
        vSpWriteToScreen((struct _SPRITESTATE *)v7, (struct _POINTL *)v10 + 21, *((struct _SURFOBJ **)v10 + 20), &v15);
      }
    }
    while ( v9 );
    if ( a3 )
      vSpComputeUnlockedRegion((HDEV *)v7);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v12);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v13);
  return v8;
}

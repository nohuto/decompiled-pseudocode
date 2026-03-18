/*
 * XREFs of vSpUnTearDownSprites @ 0x140330570
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140325BAC (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140326F1C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 * Callees:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140008C94 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140008D0C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400DB7DC (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400DB8E8 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1400DCE5C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x14026B484 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032E604 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpUnTearDownSprites(__int64 a1, const struct _RECTL *a2, int a3)
{
  HDEV *v3; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  __int64 v8; // rdx
  struct SPRITE *v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v12[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v13; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v14; // [rsp+170h] [rbp+70h] BYREF

  v9 = 0LL;
  v3 = (HDEV *)(a1 + 80);
  v10 = a1;
  v14 = 0LL;
  v13 = 0LL;
  if ( *(_DWORD *)(a1 + 136) && bIntersect(a2, (const struct _RECTL *)(a1 + 120), &v13) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v10);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v11, (struct _SPRITESTATE *)v3, &v13, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v11, &v9, &v14);
      v6 = v9;
      v7 = v5;
      if ( v9 )
      {
        while ( 1 )
        {
          vSpReadFromScreen((struct _SPRITESTATE *)v3, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v14);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v11, &v9) )
            break;
          v6 = v9;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea((struct _SPRITESTATE *)v3, &v13, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v11);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v12, v8);
  }
}

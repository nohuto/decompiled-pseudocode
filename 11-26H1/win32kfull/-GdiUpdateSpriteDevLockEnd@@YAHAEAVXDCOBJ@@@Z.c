/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140072F20
 * Callers:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x140169CC4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r15
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v4; // rbx
  unsigned __int8 v5; // r12
  struct _RECTL v7; // xmm0
  int v8; // esi
  unsigned int i; // r14d
  unsigned __int8 v10; // [rsp+30h] [rbp-D0h]
  struct REGION *v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTL v14; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v16; // [rsp+64h] [rbp-9Ch]
  char v17; // [rsp+74h] [rbp-8Ch]
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  int v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+E0h] [rbp-20h]
  __int64 v22; // [rsp+F0h] [rbp-10h]
  unsigned int v23; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v24[20]; // [rsp+104h] [rbp+4h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v14, 4LL) )
  {
LABEL_9:
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    *(_QWORD *)(*(_QWORD *)a1 + 1184LL) = 0LL;
    return 0LL;
  }
  v13 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13);
    CurrentThread = GreGetCurrentThread();
    v4 = CurrentThread;
    if ( CurrentThread )
    {
      v5 = *((_BYTE *)CurrentThread + 336);
      *((_DWORD *)CurrentThread + 84) &= ~1u;
    }
    else
    {
      v5 = v10;
    }
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v12, (struct PDEVOBJ *)&v13);
    v11 = *(struct REGION **)(*(_QWORD *)a1 + 1184LL);
    if ( !v11 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v14);
      goto LABEL_7;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v11) != 1 )
    {
      RGNOBJ::bOffset(
        (RGNOBJ *)&v11,
        (const struct _POINTL *)(*(_QWORD *)a1 + 8 * ((*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 127LL)));
      v19 = 0LL;
      v20 = 0;
      v21 = 1;
      v22 = 0LL;
      v18 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v15, v11, (const struct ERECTL *)&v14, 1);
      memset_0(&v23, 0, 0x144uLL);
      switch ( v17 )
      {
        case 0:
          v7 = v14;
          goto LABEL_15;
        case 1:
          v7 = v16;
LABEL_15:
          v24[0] = v7;
          v23 = 1;
          v8 = 0;
LABEL_16:
          if ( v8 )
            goto LABEL_19;
          while ( 1 )
          {
            for ( i = 0; i < v23; ++i )
            {
              if ( v24[i].left < v14.left )
                v24[i].left = v14.left;
              if ( v24[i].right > v14.right )
                v24[i].right = v14.right;
              if ( v24[i].top < v14.top )
                v24[i].top = v14.top;
              if ( v24[i].bottom > v14.bottom )
                v24[i].bottom = v14.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, &v24[i]);
            }
            if ( !v8 )
              break;
LABEL_19:
            v8 = XCLIPOBJ::bEnum((XCLIPOBJ *)v15, 0x144u, &v23, 0LL);
          }
          break;
        case 3:
          v8 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v15, 0, 0, 4u, 0x14u);
          goto LABEL_16;
      }
    }
LABEL_7:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v12);
    if ( v4 )
      *((_DWORD *)v4 + 84) ^= ((unsigned __int8)*((_DWORD *)v4 + 84) ^ v5) & 1;
    goto LABEL_9;
  }
  return 0LL;
}

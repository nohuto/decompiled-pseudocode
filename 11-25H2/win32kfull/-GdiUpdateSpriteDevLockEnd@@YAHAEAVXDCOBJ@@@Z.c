/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x14008C6BC
 * Callers:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1400DED60 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v6; // rbx
  unsigned __int8 v7; // r12
  int v9; // esi
  struct _RECTL v10; // xmm0
  unsigned int i; // r14d
  struct _RECTL *v12; // r8
  unsigned __int8 v13; // [rsp+30h] [rbp-D0h]
  struct REGION *v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  HDEV v16; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTL v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v19; // [rsp+64h] [rbp-9Ch]
  char v20; // [rsp+74h] [rbp-8Ch]
  unsigned int v21; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v22[20]; // [rsp+104h] [rbp+4h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v17, 4LL) )
  {
LABEL_9:
    v15 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    *(_QWORD *)(*(_QWORD *)a1 + 1184LL) = 0LL;
    return 0LL;
  }
  v16 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16);
    CurrentThread = GreGetCurrentThread(v4, v3);
    v6 = CurrentThread;
    if ( CurrentThread )
    {
      v7 = *((_BYTE *)CurrentThread + 344);
      *((_DWORD *)CurrentThread + 86) &= ~1u;
    }
    else
    {
      v7 = v13;
    }
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v15, (struct PDEVOBJ *)&v16);
    v14 = *(struct REGION **)(*(_QWORD *)a1 + 1184LL);
    if ( !v14 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v17);
      goto LABEL_7;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) == 1 )
      goto LABEL_7;
    RGNOBJ::bOffset(
      (RGNOBJ *)&v14,
      (const struct _POINTL *)(*(_QWORD *)a1 + 8 * ((*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) + 127LL)));
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v18);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v18, v14, (const struct ERECTL *)&v17, 1);
    memset_0(&v21, 0, 0x144uLL);
    if ( v20 )
    {
      if ( v20 != 1 )
      {
        if ( v20 == 3 )
        {
          v9 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v18, 0, 0, 4u, 0x14u);
LABEL_20:
          if ( !v9 )
            goto LABEL_22;
          do
          {
            v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)v18, 0x144u, (char *)&v21, 0LL);
LABEL_22:
            for ( i = 0; i < v21; ++i )
            {
              v12 = (struct _RECTL *)&v22[i];
              if ( v12->left < v17.left )
                v12->left = v17.left;
              if ( v12->right > v17.right )
                v12->right = v17.right;
              if ( v12->top < v17.top )
                v12->top = v17.top;
              if ( v12->bottom > v17.bottom )
                v12->bottom = v17.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v12);
            }
          }
          while ( v9 );
        }
LABEL_7:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v15);
        if ( v6 )
          *((_DWORD *)v6 + 86) ^= ((unsigned __int8)*((_DWORD *)v6 + 86) ^ v7) & 1;
        goto LABEL_9;
      }
      v10 = v19;
    }
    else
    {
      v10 = v17;
    }
    v22[0] = v10;
    v21 = 1;
    v9 = 0;
    goto LABEL_20;
  }
  return 0LL;
}

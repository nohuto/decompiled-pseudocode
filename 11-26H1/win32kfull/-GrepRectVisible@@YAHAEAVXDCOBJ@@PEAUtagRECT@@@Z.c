/*
 * XREFs of ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1401B9860
 * Callers:
 *     NtGdiRectVisible @ 0x1401B9780 (NtGdiRectVisible.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019C490 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x14019C4CC (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140224CD8 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectVisible(struct XDCOBJ *this, struct _RECTL *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  struct REGION *v6; // rax
  __int64 v7; // rcx
  struct _RECTL v8; // xmm0
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rbx
  LONG v12; // r8d
  LONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  LONG right; // eax
  LONG left; // edx
  struct _RECTL *v19; // r9
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D8h] BYREF
  struct REGION *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  bool v24; // [rsp+40h] [rbp-C0h]
  _BYTE v25[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _BYTE v27[160]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v28; // [rsp+170h] [rbp+70h] BYREF
  struct _POINTL v29; // [rsp+180h] [rbp+80h] BYREF
  struct _POINTL v30; // [rsp+188h] [rbp+88h] BYREF
  LONG v31; // [rsp+190h] [rbp+90h]
  LONG bottom; // [rsp+194h] [rbp+94h]
  LONG v33; // [rsp+198h] [rbp+98h]
  LONG v34; // [rsp+19Ch] [rbp+9Ch]

  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v27);
  v4 = 1;
  v5 = 0;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, this, 1) )
    goto LABEL_8;
  v6 = XDCOBJ::prgnEffRao((DC **)this);
  v7 = *(_QWORD *)this;
  v8 = *a2;
  v22 = v6;
  v28 = v8;
  v9 = *(_DWORD *)(*(_QWORD *)(v7 + 976) + 208LL);
  DC::QuickInitXform(v7, &v20, 2147484164LL);
  v10 = 2;
  v23 = v20;
  v24 = v9 != 2;
  if ( (*(_BYTE *)(v20 + 32) & 1) == 0 )
  {
    right = a2->right;
    left = a2->left;
    v29.y = a2->top;
    v30.x = right;
    v30.y = v29.y;
    v31 = right;
    bottom = a2->bottom;
    v34 = bottom;
    v29.x = left;
    v33 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v25);
    if ( v26 )
    {
      if ( (unsigned __int8)EPATHOBJ::bMoveTo((EPATHOBJ *)v25, (const struct EXFORMOBJR *)&v23, &v29)
        && (unsigned __int8)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v25, (const struct EXFORMOBJR *)&v23, &v30, 3LL)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v25) )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20, (struct EPATHOBJ *)v25, 1u, v19);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        if ( v20 && v21 )
        {
          if ( !RGNOBJ::bMerge((RGNOBJ *)&v21, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v20, 8u)
            || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21) == 1 )
          {
            v10 = 1;
          }
        }
        else
        {
          EngSetLastError(8u);
          v10 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = -1;
LABEL_13:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v25);
    v4 = v10;
    goto LABEL_8;
  }
  EXFORMOBJ::vOrder((EXFORMOBJ *)&v23, &v28);
  v11 = *(_QWORD *)this;
  if ( ((*(_BYTE *)(v23 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v23, (__int64)&v28, 2LL))
    && (*(_DWORD *)(*(_QWORD *)(v11 + 976) + 108LL) & 1) != 0 )
  {
    v13 = v28.left + 1;
    v12 = v28.right + 1;
    ++v28.left;
    ++v28.right;
  }
  else
  {
    v12 = v28.right;
    v13 = v28.left;
  }
  v14 = *(_QWORD *)this;
  v15 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v28.left = *(_DWORD *)(*(_QWORD *)this + 8 * v15 + 1016) + v13;
  v28.right = *(_DWORD *)(v14 + 8 * v15 + 1016) + v12;
  v28.top += *(_DWORD *)(v14 + 8 * v15 + 1020);
  v28.bottom += *(_DWORD *)(v14 + 8 * v15 + 1020);
  LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v22, &v28) == 2;
  v4 = v5;
LABEL_8:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v27);
  return v4;
}

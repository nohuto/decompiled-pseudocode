/*
 * XREFs of ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400A0744
 * Callers:
 *     NtGdiRectVisible @ 0x1400A0660 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400D5AFC (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400D5B3C (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1401F323C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectVisible(struct XDCOBJ *this, struct _RECTL *a2)
{
  unsigned int v4; // esi
  struct REGION *v5; // rax
  __int64 v6; // rcx
  struct _RECTL v7; // xmm0
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rbx
  LONG v11; // ecx
  LONG v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  LONG right; // eax
  LONG left; // edx
  struct _RECTL *v18; // r9
  __int64 v19; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct REGION *v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  bool v23; // [rsp+48h] [rbp-B8h]
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  _QWORD v27[14]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-18h]
  struct _RECTL v30; // [rsp+160h] [rbp+60h] BYREF
  struct _POINTL v31; // [rsp+170h] [rbp+70h] BYREF
  struct _POINTL v32; // [rsp+178h] [rbp+78h] BYREF
  LONG v33; // [rsp+180h] [rbp+80h]
  LONG bottom; // [rsp+184h] [rbp+84h]
  LONG v35; // [rsp+188h] [rbp+88h]
  LONG v36; // [rsp+18Ch] [rbp+8Ch]

  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
  v4 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0;
  v27[0] = 0LL;
  memset(&v27[10], 0, 24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v24, this, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v24);
    return 1LL;
  }
  v5 = XDCOBJ::prgnEffRao((DC **)this);
  v6 = *(_QWORD *)this;
  v7 = *a2;
  v21 = v5;
  v30 = v7;
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 976) + 208LL);
  DC::QuickInitXform(v6, &v19, 2147484164LL);
  v9 = 2;
  v22 = v19;
  v23 = v8 != 2;
  if ( (*(_BYTE *)(v19 + 32) & 1) == 0 )
  {
    right = a2->right;
    left = a2->left;
    v31.y = a2->top;
    v32.x = right;
    v32.y = v31.y;
    v33 = right;
    bottom = a2->bottom;
    v36 = bottom;
    v31.x = left;
    v35 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v28);
    if ( v29 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v28, (const struct EXFORMOBJR *)&v22, &v31)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v28, (const struct EXFORMOBJR *)&v22, &v32, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v28) )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19, (struct EPATHOBJ *)v28, 1u, v18);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        if ( v19 && v20 )
        {
          if ( !RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v19, 8u)
            || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v20) == 1 )
          {
            v9 = 1;
          }
        }
        else
        {
          EngSetLastError(8u);
          v9 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
        goto LABEL_14;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = -1;
LABEL_14:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v28);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v24);
    return v9;
  }
  EXFORMOBJ::vOrder((EXFORMOBJ *)&v22, &v30);
  v10 = *(_QWORD *)this;
  if ( ((*(_BYTE *)(v22 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v22, (__int64)&v30, 2LL))
    && (*(_BYTE *)(*(_QWORD *)(v10 + 976) + 108LL) & 1) != 0 )
  {
    v12 = v30.left + 1;
    v11 = v30.right + 1;
    ++v30.left;
    ++v30.right;
  }
  else
  {
    v11 = v30.right;
    v12 = v30.left;
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1;
  v30.left = *(_DWORD *)(*(_QWORD *)this + 8 * v14 + 1016) + v12;
  v30.right = *(_DWORD *)(v13 + 8 * v14 + 1016) + v11;
  v30.top += *(_DWORD *)(v13 + 8 * v14 + 1020);
  v30.bottom += *(_DWORD *)(v13 + 8 * v14 + 1020);
  LOBYTE(v4) = RGNOBJ::bInside((RGNOBJ *)&v21, &v30) == 2;
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v24);
  return v4;
}

/*
 * XREFs of bInitBRUSHOBJ @ 0x1402E9AB8
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14006E5A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x14006F6A0 (HmgModifyHandleType.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     GreCreateBitmap @ 0x14008BDE0 (GreCreateBitmap.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010C320 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 *     bInitBrush @ 0x1402EA240 (bInitBrush.c)
 */

__int64 __fastcall bInitBRUSHOBJ(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  int v9; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdx
  HSURF Bitmap; // rax
  struct HOBJ__ *v16; // rdi
  __int64 PatternBrushInternal; // rax
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 *v20[6]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !(unsigned int)bInitBrush(0, 0) )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 7u, 0, 0);
  W32GetSessionState(v2);
  if ( v20[0] )
  {
    v21 = 1;
    *((_DWORD *)v20[0] + 10) |= 0x40200u;
    HmgSetOwner(*v20[0], 0, 16);
    HmgMarkUndeletable(*v20[0], 16);
    bSetStockObject(*v20[0], 4, 0);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  if ( !v3 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 8421504, 7u, 0, 0);
  W32GetSessionState(v4);
  if ( v20[0] )
  {
    v21 = 1;
    *((_DWORD *)v20[0] + 10) |= 0x40200u;
    HmgSetOwner(*v20[0], 0, 16);
    HmgMarkUndeletable(*v20[0], 16);
    *((_DWORD *)v20[0] + 10) |= 4u;
    bSetStockObject(*v20[0], 2, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  if ( !v5 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 4210752, 7u, 0, 0);
  W32GetSessionState(v6);
  if ( v20[0] )
  {
    v21 = 1;
    *((_DWORD *)v20[0] + 10) |= 0x40200u;
    HmgSetOwner(*v20[0], 0, 16);
    HmgMarkUndeletable(*v20[0], 16);
    *((_DWORD *)v20[0] + 10) |= 4u;
    bSetStockObject(*v20[0], 3, 0);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  if ( !v7 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 12632256, 7u, 0, 0);
  W32GetSessionState(v8);
  if ( v20[0] )
  {
    v21 = 1;
    *((_DWORD *)v20[0] + 10) |= 0x40200u;
    HmgSetOwner(*v20[0], 0, 16);
    HmgMarkUndeletable(*v20[0], 16);
    *((_DWORD *)v20[0] + 10) |= 4u;
    bSetStockObject(*v20[0], 1, 0);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  if ( !v9 || !(unsigned int)bInitBrush(5, 0) )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 0xCu, 1, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  *((_DWORD *)v20[0] + 10) |= 0xC00u;
  *((_DWORD *)v20[0] + 44) = 5;
  *((_DWORD *)v20[0] + 42) = 1;
  HmgModifyHandleType(*v20[0] | 0x300000);
  bSetStockObject(*v20[0], 8, 0);
  *(__int64 **)(v1 + 88) = v20[0];
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 7u, 1, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  *((_DWORD *)v20[0] + 10) |= 0xC00u;
  *((_DWORD *)v20[0] + 44) = 0;
  *((_DWORD *)v20[0] + 42) = 0;
  *((_DWORD *)v20[0] + 43) = 0;
  *((_BYTE *)v20[0] + 184) = 0;
  *((_BYTE *)v20[0] + 185) = 0;
  v20[0][19] = 0LL;
  HmgModifyHandleType(*v20[0] | 0x300000);
  bSetStockObject(*v20[0], 7, 0);
  v11 = *v20[0];
  *(__int64 **)(v1 + 648) = v20[0];
  *(_QWORD *)(v1 + 312) = v11;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 7u, 1, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  *((_DWORD *)v20[0] + 10) |= 0xC00u;
  *((_DWORD *)v20[0] + 44) = 0;
  *((_DWORD *)v20[0] + 42) = 0;
  *((_DWORD *)v20[0] + 43) = 0;
  *((_BYTE *)v20[0] + 184) = 0;
  *((_BYTE *)v20[0] + 185) = 0;
  v20[0][19] = 0LL;
  HmgModifyHandleType(*v20[0] | 0x300000);
  bSetStockObject(*v20[0], 6, 0);
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 7u, 1, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  *((_DWORD *)v20[0] + 10) |= 0xC00u;
  *((_DWORD *)v20[0] + 44) = 0;
  *((_DWORD *)v20[0] + 42) = 0;
  *((_DWORD *)v20[0] + 43) = 0;
  *((_BYTE *)v20[0] + 184) = 0;
  *((_BYTE *)v20[0] + 185) = 0;
  v20[0][19] = 0LL;
  HmgModifyHandleType(*v20[0] | 0x300000);
  bSetStockObject(*v20[0], 19, 0);
  v12 = *v20[0];
  *(__int64 **)(v1 + 120) = v20[0];
  *(_QWORD *)(v1 + 112) = v12;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 9u, 0, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  v13 = *v20[0];
  *(__int64 **)(v1 + 64) = v20[0];
  *(_QWORD *)(v1 + 40) = v13;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 0xBu, 0, 0);
  if ( !v20[0] )
    goto LABEL_16;
  v21 = 1;
  *((_DWORD *)v20[0] + 10) |= 0x40200u;
  HmgSetOwner(*v20[0], 0, 16);
  HmgMarkUndeletable(*v20[0], 16);
  v14 = v20[0];
  *(_QWORD *)(v1 + 48) = *v20[0];
  *(_QWORD *)(v1 + 80) = v14;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  Bitmap = (HSURF)GreCreateBitmap(8, 8, 1, 1, (__int64)&unk_140267F18);
  v16 = (struct HOBJ__ *)Bitmap;
  if ( !Bitmap )
    return 0LL;
  PatternBrushInternal = GreCreatePatternBrushInternal(Bitmap, 0, 0);
  *(_QWORD *)(v1 + 56) = PatternBrushInternal;
  if ( !PatternBrushInternal )
    return 0LL;
  GreDeleteObject(v16);
  GreSetBrushOwner(*(HBRUSH *)(v1 + 56), 0);
  v18 = HmgShareLockCheck(*(_QWORD *)(v1 + 56), 16);
  if ( !v18 )
    return 0LL;
  *(_DWORD *)(v18 + 40) |= 0x200u;
  HmgMarkUndeletable(*(_QWORD *)(v1 + 56), 16);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 7u, 0, 0);
  if ( !v20[0] )
  {
LABEL_16:
    BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
    return 0LL;
  }
  v21 = 1;
  BRUSHMEMOBJ::vGlobal(v20);
  bSetStockObject(*v20[0], 18, 0);
  v19 = v20[0];
  *(_QWORD *)(v1 + 96) = *v20[0];
  *(_QWORD *)(v1 + 104) = v19;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((struct HOBJ__ ***)v20);
  return 1LL;
}

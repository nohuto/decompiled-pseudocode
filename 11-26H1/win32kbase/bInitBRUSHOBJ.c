/*
 * XREFs of bInitBRUSHOBJ @ 0x1402F4354
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x140035090 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x140035570 (HmgMarkUndeletable.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     HmgModifyHandleType @ 0x140057BB0 (HmgModifyHandleType.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14019BAFC (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 */

__int64 __fastcall bInitBRUSHOBJ(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int *v3; // rcx
  __int64 SessionState; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // rcx
  __int64 v11; // rax
  HBITMAP BitmapInternal; // rax
  struct HOBJ__ *v13; // rdi
  __int64 PatternBrushInternal; // rax
  __int64 v15; // rax
  unsigned int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int *v19[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int16 v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !(unsigned int)bInitBrush(0, 0)
    || !(unsigned int)bInitBrush(4, 0)
    || !(unsigned int)bInitBrush(2, 1)
    || !(unsigned int)bInitBrush(3, 1)
    || !(unsigned int)bInitBrush(1, 1)
    || !(unsigned int)bInitBrush(5, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0, 0xCu, 1, 0);
  if ( !v19[0] )
    goto LABEL_8;
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v19[0][10] |= 0xC00u;
  v19[0][44] = 5;
  v19[0][42] = 1;
  HmgModifyHandleType(*(_QWORD *)v19[0] | 0x300000LL);
  bSetStockObject(*(_QWORD *)v19[0], 8, 0);
  *(unsigned int **)(v1 + 176) = v19[0];
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v19);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0, 7u, 1, 0);
  if ( !v19[0] )
  {
LABEL_11:
    PopThreadGuardedObject(&v20);
    return 0LL;
  }
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v19[0][10] |= 0xC00u;
  v19[0][44] = 0;
  v19[0][42] = 0;
  v19[0][43] = 0;
  *((_BYTE *)v19[0] + 184) = 0;
  *((_BYTE *)v19[0] + 185) = 0;
  *((_QWORD *)v19[0] + 19) = 0LL;
  HmgModifyHandleType(*(_QWORD *)v19[0] | 0x300000LL);
  bSetStockObject(*(_QWORD *)v19[0], 7, 0);
  v3 = v19[0];
  *(_QWORD *)(v1 + 400) = *(_QWORD *)v19[0];
  *(_QWORD *)(v1 + 736) = v3;
  SessionState = W32GetSessionState(v3);
  HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v19[0]);
  if ( !v22 )
    bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
  v19[0] = 0LL;
  PopThreadGuardedObject(&v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0xFFFFFF, 7u, 1, 0);
  if ( !v19[0] )
    goto LABEL_8;
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v19[0][10] |= 0xC00u;
  v19[0][44] = 0;
  v19[0][42] = 0;
  v19[0][43] = 0;
  *((_BYTE *)v19[0] + 184) = 0;
  *((_BYTE *)v19[0] + 185) = 0;
  *((_QWORD *)v19[0] + 19) = 0LL;
  HmgModifyHandleType(*(_QWORD *)v19[0] | 0x300000LL);
  bSetStockObject(*(_QWORD *)v19[0], 6, 0);
  if ( v19[0] )
  {
    v18 = W32GetSessionState(v5);
    HmgDecrementShareReferenceCount(*(_QWORD *)(v18 + 88), v19[0]);
    if ( !v22 )
      bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
    v19[0] = 0LL;
  }
  PopThreadGuardedObject(&v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0, 7u, 1, 0);
  if ( !v19[0] )
    goto LABEL_8;
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v19[0][10] |= 0xC00u;
  v19[0][44] = 0;
  v19[0][42] = 0;
  v19[0][43] = 0;
  *((_BYTE *)v19[0] + 184) = 0;
  *((_BYTE *)v19[0] + 185) = 0;
  *((_QWORD *)v19[0] + 19) = 0LL;
  HmgModifyHandleType(*(_QWORD *)v19[0] | 0x300000LL);
  bSetStockObject(*(_QWORD *)v19[0], 19, 0);
  v6 = v19[0];
  *(_QWORD *)(v1 + 200) = *(_QWORD *)v19[0];
  *(_QWORD *)(v1 + 208) = v6;
  v7 = W32GetSessionState(v6);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v7 + 88), v19[0]);
  if ( !v22 )
    bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
  v19[0] = 0LL;
  PopThreadGuardedObject(&v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0, 9u, 0, 0);
  if ( !v19[0] )
    goto LABEL_11;
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v8 = v19[0];
  *(_QWORD *)(v1 + 128) = *(_QWORD *)v19[0];
  *(_QWORD *)(v1 + 152) = v8;
  v9 = W32GetSessionState(v8);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v9 + 88), v19[0]);
  if ( !v22 )
    bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
  v19[0] = 0LL;
  PopThreadGuardedObject(&v20);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0xFFFFFF, 0xBu, 0, 0);
  if ( !v19[0] )
    goto LABEL_11;
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  v10 = v19[0];
  *(_QWORD *)(v1 + 136) = *(_QWORD *)v19[0];
  *(_QWORD *)(v1 + 168) = v10;
  v11 = W32GetSessionState(v10);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v11 + 88), v19[0]);
  if ( !v22 )
    bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
  v19[0] = 0LL;
  PopThreadGuardedObject(&v20);
  v19[1] = (unsigned int *)16;
  v19[0] = (unsigned int *)"U";
  v20 = 0LL;
  v21 = 0;
  BitmapInternal = (HBITMAP)GreCreateBitmapInternal(8LL, 8, 1u, 1u, (__int64)v19);
  v13 = (struct HOBJ__ *)BitmapInternal;
  if ( !BitmapInternal )
    return 0LL;
  PatternBrushInternal = GreCreatePatternBrushInternal(BitmapInternal, 0, 0);
  *(_QWORD *)(v1 + 144) = PatternBrushInternal;
  if ( !PatternBrushInternal )
    return 0LL;
  GreDeleteObject(v13);
  GreSetBrushOwner(*(HBRUSH *)(v1 + 144), 0);
  v15 = HmgShareLock(v1, *(_QWORD *)(v1 + 144), 16, 0);
  if ( !v15 )
    return 0LL;
  *(_DWORD *)(v15 + 40) |= 0x200u;
  HmgMarkUndeletable(*(_QWORD *)(v1 + 144), 16);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v19, 0xFFFFFF, 7u, 0, 0);
  if ( !v19[0] )
  {
LABEL_8:
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v19);
    return 0LL;
  }
  v22 = 1;
  v19[0][10] |= 0x40200u;
  HmgSetOwner(*(_QWORD *)v19[0], 0, 16);
  HmgMarkUndeletable(*(_QWORD *)v19[0], 16);
  bSetStockObject(*(_QWORD *)v19[0], 18, 0);
  v16 = v19[0];
  *(_QWORD *)(v1 + 184) = *(_QWORD *)v19[0];
  *(_QWORD *)(v1 + 192) = v16;
  v17 = W32GetSessionState(v16);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v17 + 88), v19[0]);
  if ( !v22 )
    bDeleteBrush(*(struct HOBJ__ **)v19[0], 0, 0);
  v19[0] = 0LL;
  PopThreadGuardedObject(&v20);
  return 1LL;
}

/*
 * XREFs of ?ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1403292A0
 * Callers:
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140328A70 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ulSimulateSaveScreenBits(struct _SURFOBJ *a1, int a2, SURFOBJ *a3, struct _RECTL *a4)
{
  HDEV hdev; // rbx
  ULONG *p_iBitmapFormat; // r14
  int v9; // ebp
  int v10; // r12d
  __int64 (__fastcall *v11)(DHPDEV, unsigned __int64, _QWORD); // rax
  HBITMAP Bitmap; // rax
  SURFOBJ *v13; // rax
  __int64 v14; // rdi
  __int64 p_hsurf; // rax
  HSURF hsurf; // rbx
  __int64 v18; // [rsp+48h] [rbp-60h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+5Ch] [rbp-4Ch]

  hdev = a1->hdev;
  v18 = 0LL;
  if ( a2 )
  {
    v14 = 1LL;
    if ( a2 == 1 )
    {
      p_hsurf = (__int64)&a1[1].hsurf;
      if ( !a1 )
        p_hsurf = 112LL;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*((void (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, __int64 *))hdev + 354))(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          &v18);
      else
        ((void (__fastcall *)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, __int64 *))EngCopyBits)(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          &v18);
    }
    hsurf = a3->hsurf;
    EngUnlockSurface(a3);
    EngDeleteSurface(hsurf);
  }
  else
  {
    p_iBitmapFormat = &a1->iBitmapFormat;
    v9 = a4->right - a4->left;
    v10 = a4->bottom - a4->top;
    v11 = (__int64 (__fastcall *)(DHPDEV, unsigned __int64, _QWORD))*((_QWORD *)hdev + 345);
    if ( !v11
      || (Bitmap = (HBITMAP)v11(a1->dhpdev, __PAIR64__(v10, v9), *p_iBitmapFormat)) == 0LL
      || (_DWORD)Bitmap == -1 )
    {
      Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(v10, v9), 0, *p_iBitmapFormat, 1u, 0LL);
    }
    v13 = EngLockSurface((HSURF)Bitmap);
    v14 = (__int64)v13;
    if ( v13 )
    {
      v19 = 0LL;
      v20 = v9;
      v21 = v10;
      if ( ((__int64)v13[1].hsurf & 0x400) != 0 )
        (*((void (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, _QWORD, __int64 *, struct _RECTL *))hdev + 354))(
          v13,
          a1,
          0LL,
          0LL,
          &v19,
          a4);
      else
        ((void (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, _QWORD, __int64 *, struct _RECTL *))EngCopyBits)(
          v13,
          a1,
          0LL,
          0LL,
          &v19,
          a4);
    }
  }
  return v14;
}

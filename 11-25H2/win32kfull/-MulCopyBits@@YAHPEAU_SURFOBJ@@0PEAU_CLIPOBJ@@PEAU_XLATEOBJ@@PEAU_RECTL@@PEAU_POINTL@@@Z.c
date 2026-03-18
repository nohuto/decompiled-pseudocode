/*
 * XREFs of ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14000C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x14000D764 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x14000E210 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA4C (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x14000EA6C (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1401EF4E4 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

int __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  int v9; // esi
  int v10; // eax
  HDEV hdev; // rbx
  struct _SURFOBJ *v13; // rcx
  __int64 v14; // r10
  struct _SURFOBJ *v15; // r9
  __int64 v16; // r10
  int v17; // eax
  struct _SURFOBJ *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  BOOL (__stdcall *v22)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v23; // eax
  _QWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[56]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  _BYTE v29[88]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp+28h]

  v9 = 1;
  if ( a2->iType != 3 || (v10 = 1, (HIDWORD(a2[1].hsurf) & 9) == 0) )
    v10 = 0;
  if ( !v10 )
    return MulBitBlt(a1, a2, 0LL, a3, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
  if ( (unsigned int)MSURF::bFindSurface((MSURF *)v25, a2, a3, a5) )
  {
    while ( 1 )
    {
      v24[0] = 0LL;
      hdev = v27->hdev;
      if ( ((_DWORD)hdev[528] & 0x8000) == 0 )
      {
        if ( (HIDWORD(a2[1].hsurf) & 0x10) != 0 )
          SURFREFVIEW::bMap((SURFREFVIEW *)v24, v27);
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        {
          MULTISURF::MULTISURF((MULTISURF *)v29, a1);
          if ( ((__int64)v27[1].hsurf & 0x400) != 0 )
            v23 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v26 + 56) + 2832LL))(
                    v30,
                    v27,
                    v28,
                    a4,
                    a5,
                    a6);
          else
            v23 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                    v30,
                    v27,
                    v28,
                    a4,
                    a5,
                    a6);
          v9 &= v23;
          MULTISURF::~MULTISURF((MULTISURF *)v29);
        }
      }
      if ( !(unsigned int)IsMetaDevBitmapForMirroring(a1) )
        break;
      v20 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v26 + 16));
      if ( v20 )
      {
        if ( (*(_DWORD *)(v14 + 88) & 0x400) != 0 )
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v26 + 56) + 2832LL))(
                  v20,
                  v14,
                  v28,
                  a4,
                  a5,
                  a6);
        else
          v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v20,
                  v14,
                  v28,
                  a4,
                  a5,
                  a6);
LABEL_30:
        v9 &= v21;
      }
LABEL_22:
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v24);
      v24[0] = 0LL;
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v24);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v25) )
        return v9;
    }
    if ( !(unsigned int)IsMetaRedirectionBitmap(v13) )
    {
      v17 = (_DWORD)hdev[528] & 0x8000;
      if ( !v17 || *(_WORD *)(v16 + 76) != (_WORD)v15 )
      {
        v18 = v15;
        if ( v17 )
        {
          a1->fjBitmap |= 0x8000u;
          v18 = a1;
        }
        if ( (*(_DWORD *)(v16 + 88) & 0x400) != 0 )
          v19 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v26 + 56) + 2832LL))(
                  a1,
                  v16,
                  v28,
                  a4,
                  a5,
                  a6);
        else
          v19 = ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  a1,
                  v16,
                  v28,
                  a4,
                  a5,
                  a6);
        v9 &= v19;
        if ( v18 )
          v18->fjBitmap &= ~0x8000u;
      }
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(v16 + 88) & 0x400) != 0 )
      v22 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v26 + 56)
                                                                                                 + 2832LL);
    else
      v22 = EngCopyBits;
    v21 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))v22)(
            *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v26 + 16)),
            v16,
            v28,
            a4,
            a5,
            a6);
    goto LABEL_30;
  }
  return v9;
}

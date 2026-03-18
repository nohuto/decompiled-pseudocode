/*
 * XREFs of ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140064EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x140063260 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x140064AD8 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x140064B84 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400651E0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x140065CCC (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140066484 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x140066C18 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  unsigned int v10; // r14d
  HDEV hdev; // rbx
  struct _SURFOBJ *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r11
  int v15; // eax
  struct _SURFOBJ *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v21; // eax
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-48h]
  struct _SURFOBJ *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  _BYTE v27[88]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+138h] [rbp+38h]

  if ( a2->iType != 3 || (HIDWORD(a2[1].hsurf) & 9) == 0 )
    return MulBitBlt(a1, a2, 0LL, a3, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
  v10 = 1;
  if ( (unsigned int)MSURF::bFindSurface((MSURF *)v23, a2, a3, a5) )
  {
    while ( 1 )
    {
      v22[0] = 0LL;
      hdev = v25->hdev;
      if ( ((_DWORD)hdev[528] & 0x8000) == 0 )
      {
        if ( (HIDWORD(a2[1].hsurf) & 0x10) != 0 )
          SURFREFVIEW::bMap((SURFREFVIEW *)v22, v25);
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        {
          MULTISURF::MULTISURF((MULTISURF *)v27, a1);
          if ( ((__int64)v25[1].hsurf & 0x400) != 0 )
            v21 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v24 + 56) + 2832LL))(
                    v28,
                    v25,
                    v26,
                    a4,
                    a5,
                    a6);
          else
            v21 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                    v28,
                    v25,
                    v26,
                    a4,
                    a5,
                    a6);
          v10 &= v21;
          MULTISURF::~MULTISURF((MULTISURF *)v27);
        }
      }
      if ( !(unsigned int)IsMetaDevBitmapForMirroring(a1) )
        break;
      v18 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v24 + 16));
      if ( v18 )
      {
        if ( (*(_DWORD *)(v13 + 88) & 0x400) != 0 )
          v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v24 + 56) + 2832LL))(
                  v18,
                  v13,
                  v26,
                  a4,
                  a5,
                  a6);
        else
          v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v18,
                  v13,
                  v26,
                  a4,
                  a5,
                  a6);
LABEL_27:
        v10 &= v19;
      }
LABEL_19:
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v22);
      v22[0] = 0LL;
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v22);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v23) )
        return v10;
    }
    if ( !IsMetaRedirectionBitmap(v12) )
    {
      v15 = (_DWORD)hdev[528] & 0x8000;
      if ( !v15 || *(_WORD *)(v14 + 76) )
      {
        v16 = 0LL;
        if ( v15 )
        {
          a1->fjBitmap |= 0x8000u;
          v16 = a1;
        }
        if ( (*(_DWORD *)(v14 + 88) & 0x400) != 0 )
          v17 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v24 + 56) + 2832LL))(
                  a1,
                  v14,
                  v26,
                  a4,
                  a5,
                  a6);
        else
          v17 = ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  a1,
                  v14,
                  v26,
                  a4,
                  a5,
                  a6);
        v10 &= v17;
        if ( v16 )
          v16->fjBitmap &= ~0x8000u;
      }
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(v14 + 88) & 0x400) != 0 )
      v20 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v24 + 56)
                                                                                                 + 2832LL);
    else
      v20 = EngCopyBits;
    v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))v20)(
            *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v24 + 16)),
            v14,
            v26,
            a4,
            a5,
            a6);
    goto LABEL_27;
  }
  return v10;
}

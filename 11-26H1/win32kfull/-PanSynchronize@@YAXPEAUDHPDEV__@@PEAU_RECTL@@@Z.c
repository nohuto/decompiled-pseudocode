/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140288790
 * Callers:
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x140288680 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140321BD0 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140066BC4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14026675C (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x140323400 (-vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x140323594 (-vUnLockShadow@PANSURFLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, __m128i *a2)
{
  __m128i *v4; // rdx
  __int64 v5; // rcx
  HSEMAPHORE v6; // rbx
  struct REGION *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rdx
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  int v14; // [rsp+4Ch] [rbp-B4h]
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  struct DHPDEV__ *v17; // [rsp+70h] [rbp-90h]
  struct _CLIPOBJ v18; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+108h] [rbp+8h]
  __int64 v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+160h] [rbp+60h]

  v12 = 0LL;
  v4 = (__m128i *)&v12;
  v5 = *((_QWORD *)a1 + 8);
  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
    v4 = a2;
  v13 = *(_DWORD *)(v5 + 32);
  v14 = *(_DWORD *)(v5 + 36);
  v17 = a1;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v16, v4, 0LL, 1);
  v6 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v6);
  if ( *((_DWORD *)a1 + 26) )
  {
    v7 = (struct REGION *)*((_QWORD *)a1 + 10);
    v22 = 1;
    v20 = 0LL;
    v21 = 0;
    v23 = 0LL;
    v19 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, v7, (const struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
    {
      CLIPOBJ_vOffset(&v18, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_QWORD *)(*((_QWORD *)a1 + 9) + 16LL) = *((_QWORD *)a1 + 4);
      v8 = *((_QWORD *)a1 + 8);
      v9 = *((_QWORD *)a1 + 9) - 24LL;
      v10 = *((_QWORD *)a1 + 9);
      v11 = v9 & ((unsigned __int128)-(__int128)v10 >> 64);
      DWORD2(v15) = *(_DWORD *)(v11 + 0x38);
      HIDWORD(v15) = *(_DWORD *)(v11 + 0x3C);
      if ( v8 )
      {
        if ( (*(_DWORD *)((v9 & ((unsigned __int128)-(__int128)v10 >> 64)) + 0x70) & 0x400) != 0 )
          (*((void (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))a1 + 118))(
            (v11 + 24) & -(__int64)(v11 != 0),
            v8,
            &v18,
            0LL,
            &v15,
            a1 + 4);
        else
          ((void (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))EngCopyBits)(
            (v11 + 24) & -(__int64)(v11 != 0),
            v8,
            &v18,
            0LL,
            &v15,
            a1 + 4);
      }
    }
    v12 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 26) = 0;
    RGNOBJ::vSet((RGNOBJ *)&v12);
  }
  if ( v6 )
    EngReleaseSemaphore(v6);
  if ( (_QWORD)v16 )
    MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt((MULTIPANSURFLOCK *)&v16);
  if ( v17 )
    PANSURFLOCK::vUnLockShadow((PANSURFLOCK *)&v16);
}

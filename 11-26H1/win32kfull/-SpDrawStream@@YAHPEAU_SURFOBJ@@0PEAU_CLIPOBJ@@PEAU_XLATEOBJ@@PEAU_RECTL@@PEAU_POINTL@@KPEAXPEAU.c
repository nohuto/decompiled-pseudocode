/*
 * XREFs of ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1401FE960
 * Callers:
 *     <none>
 * Callees:
 *     OffDrawStream @ 0x140067A54 (OffDrawStream.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  unsigned int v11; // r14d
  HDEV hdev; // rcx
  SURFOBJ *v13; // rdi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  CLIPOBJ *ppco; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v18; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  _BYTE v24[912]; // [rsp+A0h] [rbp-60h] BYREF

  v22 = (__int64)a6;
  v11 = 1;
  v19 = a1;
  hdev = a2->hdev;
  v21 = (__int64)a8;
  v20 = (__int64)a9;
  v23 = (__int64)a4;
  ppco = a3;
  v18 = 0LL;
  if ( hdev && *((struct _SURFOBJ **)hdev + 14) == a2 )
  {
    DbgPrint("SpDrawStream: source is the screen, this should never happen\n", a1);
    return 1LL;
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v24, a1, a3, a5);
    while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v24, &v19, &v18, &ppco) )
    {
      v13 = v19;
      p_pvScan0 = 0LL;
      if ( !v19
        || (hsurf = (int)v19[1].hsurf, (hsurf & 0x4000) == 0) && hsurf >= 0
        || (hsurf & 0x200) != 0
        || (p_pvScan0 = &v19[-1].pvScan0, GreAcquireSemaphore<8,PDEVOBJ>((__int64)v19->hdev), v13 == (SURFOBJ *)24)
        || *((_WORD *)p_pvScan0 + 50) != 1
        || EngUpdateDeviceSurface(v13, &ppco) )
      {
        v11 &= OffDrawStream(
                 (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64))EngDrawStream,
                 (LONG *)&v18,
                 (__int64)v13,
                 (__int64)a2,
                 ppco,
                 v23,
                 (__int128 *)&a5->left,
                 (__int64 *)v22,
                 a7,
                 v21,
                 v20);
        if ( !p_pvScan0 )
          continue;
      }
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
    }
    return v11;
  }
}

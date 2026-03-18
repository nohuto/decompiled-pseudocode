/*
 * XREFs of ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14000B880
 * Callers:
 *     <none>
 * Callees:
 *     OffDrawStream @ 0x14000C080 (OffDrawStream.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  struct _SURFOBJ *v13; // rdi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  PVOID *v16; // rsi
  PVOID v18; // rcx
  CLIPOBJ *ppco; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v20; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[912]; // [rsp+A0h] [rbp-60h] BYREF

  v20 = 0LL;
  v24 = (__int64)a6;
  v11 = 1;
  v21 = a1;
  hdev = a2->hdev;
  v23 = (__int64)a8;
  v22 = (__int64)a9;
  v25 = (__int64)a4;
  ppco = a3;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v26, a1, a3, a5);
    if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v26, &v21, &v20, &ppco) )
      return v11;
    while ( 1 )
    {
      v13 = v21;
      p_pvScan0 = 0LL;
      if ( v21
        && (hsurf = (int)v21[1].hsurf, (hsurf & 0x80004000) != 0)
        && (hsurf & 0x200) == 0
        && (p_pvScan0 = &v21[-1].pvScan0,
            v16 = &v21[-1].pvScan0,
            GreLockDisplayDevice(v21->hdev),
            *((_WORD *)p_pvScan0 + 50) == 1)
        && (p_pvScan0 = &v13[-1].pvScan0,
            !EngUpdateDeviceSurface(
               (SURFOBJ *)((unsigned __int64)v13 & -(__int64)(v13 != (struct _SURFOBJ *)24)),
               &ppco)) )
      {
        if ( v13 != (struct _SURFOBJ *)24 )
        {
          v18 = v16[6];
LABEL_16:
          GreUnlockDisplayDevice(v18);
        }
      }
      else
      {
        v11 &= OffDrawStream(
                 (int)EngDrawStream,
                 (int)&v20,
                 (int)v13,
                 (int)a2,
                 ppco,
                 v25,
                 (__int64)a5,
                 v24,
                 a7,
                 v23,
                 v22);
        if ( p_pvScan0 )
        {
          v18 = p_pvScan0[6];
          goto LABEL_16;
        }
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v26, &v21, &v20, &ppco) )
        return v11;
    }
  }
  DbgPrint("SpDrawStream: source is the screen, this should never happen\n", a1);
  return 1LL;
}

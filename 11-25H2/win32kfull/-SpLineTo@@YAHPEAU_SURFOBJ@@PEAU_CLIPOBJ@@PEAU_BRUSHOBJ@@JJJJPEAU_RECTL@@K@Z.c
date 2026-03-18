/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140010910
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffLineTo @ 0x14000C850 (OffLineTo.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        LONG a7,
        struct _RECTL *a8,
        MIX a9)
{
  int v9; // r14d
  unsigned int v10; // r15d
  struct _SURFOBJ *v11; // rdi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  PVOID *v14; // rsi
  CLIPOBJ *v15; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  PVOID v18; // rcx
  struct _POINTL v19; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *ppco; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v22; // [rsp+78h] [rbp-88h] BYREF
  RECTL *v23; // [rsp+80h] [rbp-80h]
  BRUSHOBJ *v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[912]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 0;
  v24 = a3;
  ppco = a2;
  v21 = a4;
  v22 = a1;
  v10 = 1;
  v19 = 0LL;
  v23 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v25, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v25, &v22, &v19, &ppco) )
  {
    while ( 1 )
    {
      v11 = v22;
      p_pvScan0 = 0LL;
      if ( !v22 )
        break;
      hsurf = (int)v22[1].hsurf;
      if ( (hsurf & 0x80004000) == 0 )
        break;
      if ( (hsurf & 0x200) != 0 )
        break;
      p_pvScan0 = &v22[-1].pvScan0;
      v14 = &v22[-1].pvScan0;
      GreLockDisplayDevice(v22->hdev);
      if ( *((_WORD *)p_pvScan0 + 50) != 1 )
        break;
      p_pvScan0 = &v11[-1].pvScan0;
      if ( EngUpdateDeviceSurface((SURFOBJ *)((unsigned __int64)v11 & -(__int64)(v11 != (struct _SURFOBJ *)24)), &ppco) )
        break;
      if ( v11 != (struct _SURFOBJ *)24 )
      {
        v18 = v14[6];
LABEL_32:
        GreUnlockDisplayDevice(v18);
      }
LABEL_13:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v25, &v22, &v19, &ppco) )
        return v10;
    }
    v15 = ppco;
    if ( v11->iType != 1 )
      goto LABEL_8;
    if ( bAllowShareAccess(v11)
      && GreGetCurrentThread()
      && *((_QWORD *)GreGetCurrentThread() + 34)
      && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
      && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x100) != 0 )
    {
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 104LL);
      goto LABEL_10;
    }
    if ( v11->iType != 1
      || !bAllowShareAccess(v11)
      || !GreGetCurrentThread()
      || !*((_QWORD *)GreGetCurrentThread() + 34)
      || !*((_DWORD *)GreGetCurrentThread() + 87) && !*((_DWORD *)GreGetCurrentThread() + 88) )
    {
LABEL_8:
      if ( ((__int64)v11[1].hsurf & 0x100) != 0 )
      {
        v9 |= 1u;
        v16 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v11->hdev + 168);
LABEL_10:
        v10 &= OffLineTo(
                 (__int64 (__fastcall *)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX))v16,
                 (int *)&v19,
                 v11,
                 v15,
                 v24,
                 v21,
                 a5,
                 a6,
                 a7,
                 v23,
                 a9);
        if ( (v9 & 1) != 0 )
          v9 &= ~1u;
        if ( !p_pvScan0 )
          goto LABEL_13;
        v18 = p_pvScan0[6];
        goto LABEL_32;
      }
    }
    v16 = EngLineTo;
    goto LABEL_10;
  }
  return v10;
}

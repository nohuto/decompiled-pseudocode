/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140068720
 * Callers:
 *     <none>
 * Callees:
 *     OffLineTo @ 0x140064D40 (OffLineTo.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        LONG a5,
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
  CLIPOBJ *v14; // rsi
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  struct _POINTL v17; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *ppco; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v20; // [rsp+78h] [rbp-88h] BYREF
  RECTL *v21; // [rsp+80h] [rbp-80h]
  BRUSHOBJ *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[912]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 0;
  v22 = a3;
  ppco = a2;
  v19 = a4;
  v20 = a1;
  v10 = 1;
  v21 = a8;
  v17 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v23, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v23, &v20, &v17, &ppco) )
  {
    while ( 1 )
    {
      v11 = v20;
      p_pvScan0 = 0LL;
      if ( !v20 )
        break;
      hsurf = (int)v20[1].hsurf;
      if ( (hsurf & 0x4000) == 0 && hsurf >= 0 )
        break;
      if ( (hsurf & 0x200) != 0 )
        break;
      p_pvScan0 = &v20[-1].pvScan0;
      GreAcquireSemaphore<8,PDEVOBJ>(v20->hdev);
      if ( v11 == (struct _SURFOBJ *)24 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface(v11, &ppco) )
        break;
LABEL_17:
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
LABEL_15:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v23, &v20, &v17, &ppco) )
        return v10;
    }
    v14 = ppco;
    if ( v11->iType != 1 )
      goto LABEL_10;
    if ( (unsigned int)bAllowShareAccess(v11)
      && GreGetCurrentThread()
      && *((_QWORD *)GreGetCurrentThread() + 34)
      && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
      && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x100) != 0 )
    {
      v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)GreGetCurrentThread() + 34) + 104LL);
      goto LABEL_12;
    }
    if ( v11->iType != 1
      || !(unsigned int)bAllowShareAccess(v11)
      || !GreGetCurrentThread()
      || !*((_QWORD *)GreGetCurrentThread() + 34)
      || !*((_DWORD *)GreGetCurrentThread() + 85) && !*((_DWORD *)GreGetCurrentThread() + 86) )
    {
LABEL_10:
      if ( ((__int64)v11[1].hsurf & 0x100) != 0 )
      {
        v9 |= 1u;
        v15 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v11->hdev + 168);
        goto LABEL_12;
      }
    }
    v15 = EngLineTo;
LABEL_12:
    v10 &= OffLineTo(
             (__int64 (__fastcall *)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX))v15,
             (int *)&v17,
             v11,
             v14,
             v22,
             v19,
             a5,
             a6,
             a7,
             v21,
             a9);
    if ( (v9 & 1) != 0 )
      v9 &= ~1u;
    if ( !p_pvScan0 )
      goto LABEL_15;
    goto LABEL_17;
  }
  return v10;
}

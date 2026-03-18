/*
 * XREFs of ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1400CE6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D0D20 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvStartBanding(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v2; // edi
  int v4; // esi
  UMPDOBJ *v6; // rbx
  unsigned int v8; // eax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v10; // [rsp+40h] [rbp-29h] BYREF
  int v11; // [rsp+44h] [rbp-25h] BYREF
  int v12; // [rsp+48h] [rbp-21h] BYREF
  void *v13; // [rsp+50h] [rbp-19h] BYREF
  void *v14; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v15; // [rsp+60h] [rbp-9h] BYREF
  __int128 Src; // [rsp+68h] [rbp-1h] BYREF
  struct _SURFOBJ *v17[2]; // [rsp+78h] [rbp+Fh] BYREF
  void *v18; // [rsp+88h] [rbp+1Fh] BYREF

  v2 = 0;
  v10 = 1;
  v12 = 0;
  v11 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v6 = v15;
  v14 = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  Src = 0LL;
  *(_OWORD *)v17 = 0LL;
  if ( v15 )
  {
    if ( !*((_BYTE *)v15 + 456)
      || (v10 = 56, v8 = UMPDOBJ::bThunkLargeBitmap(v15, a1, &v14, &v13, &v12, &v11, &v10), v4 = v11, (v10 = v8) != 0) )
    {
      DWORD1(Src) = 57;
      LOBYTE(Src) = 0;
      v17[0] = *(struct _SURFOBJ **)v6;
      v17[1] = a1;
      v18 = a2;
      if ( (unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 80), &v17[1], v4) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v6, &v18, 8u) )
        {
          LODWORD(Size) = 4;
          if ( UMPDOBJ::Thunk(v6, &Src, 0x28u, &v10, Size) != -1 )
          {
            if ( a2 )
              *a2 = *(struct _POINTL *)UMPDOBJ::GetKernelPtr(v6, v18);
          }
        }
      }
    }
    if ( v12 )
      UMPDOBJ::RestoreBitmap(v6, a1, v14, v13, Size, v4);
    v2 = v10;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v15);
  return v2;
}

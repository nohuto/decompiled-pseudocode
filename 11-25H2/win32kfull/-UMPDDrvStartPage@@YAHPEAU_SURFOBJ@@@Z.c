/*
 * XREFs of ?UMPDDrvStartPage@@YAHPEAU_SURFOBJ@@@Z @ 0x14020EA30
 * Callers:
 *     <none>
 * Callees:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D0D20 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvStartPage(struct _SURFOBJ *a1)
{
  int v1; // r14d
  int v2; // r15d
  int v3; // esi
  UMPDOBJ *v4; // rbx
  void *v5; // r12
  void *v6; // r13
  unsigned int v8; // eax
  BOOL v9; // edi
  size_t Size; // [rsp+28h] [rbp-49h]
  unsigned int v11; // [rsp+48h] [rbp-29h] BYREF
  int v12; // [rsp+4Ch] [rbp-25h] BYREF
  int v13; // [rsp+50h] [rbp-21h] BYREF
  struct _SURFOBJ *v14; // [rsp+58h] [rbp-19h]
  UMPDOBJ *v15; // [rsp+60h] [rbp-11h] BYREF
  void *v16; // [rsp+68h] [rbp-9h] BYREF
  void *v17; // [rsp+70h] [rbp-1h] BYREF
  __int128 Src; // [rsp+78h] [rbp+7h] BYREF
  struct _SURFOBJ *v19[2]; // [rsp+88h] [rbp+17h] BYREF

  v14 = a1;
  v1 = 1;
  v2 = 0;
  v11 = 1;
  v3 = 0;
  v12 = 0;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v4 = v15;
  v5 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  *(_OWORD *)v19 = 0LL;
  if ( v15 )
  {
    v8 = 1;
    v9 = 1;
    if ( *((_BYTE *)v15 + 456) )
    {
      v11 = 40;
      v8 = UMPDOBJ::bThunkLargeBitmap(v15, v14, &v16, &v17, &v12, &v13, &v11);
      v2 = v12;
      v9 = v8;
      v3 = v13;
      v1 = v8;
      v5 = v16;
      v6 = v17;
      v11 = v8;
    }
    if ( v8 )
    {
      DWORD1(Src) = 33;
      LOBYTE(Src) = 0;
      v19[0] = *(struct _SURFOBJ **)v4;
      v19[1] = v14;
      v9 = 0;
      if ( (unsigned int)UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 80), &v19[1]) )
      {
        LODWORD(Size) = 4;
        if ( (unsigned int)UMPDOBJ::Thunk(v4, &Src, 0x20u, &v11, Size) != -1 )
        {
          if ( v11 )
            v9 = 1;
        }
      }
      v1 = v9;
    }
    if ( v2 )
    {
      UMPDOBJ::RestoreBitmap(v4, v14, v5, v6, Size, v3);
      v9 = v1;
    }
    XUMPDOBJ::~XUMPDOBJ(&v15);
    return v9;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v15);
    return 0LL;
  }
}

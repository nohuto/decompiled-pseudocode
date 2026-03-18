/*
 * XREFs of ?UMPDDrvStartBanding@@YAHPEAU_SURFOBJ@@PEAU_POINTL@@@Z @ 0x1402840D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvStartBanding(struct _SURFOBJ *a1, struct _POINTL *a2)
{
  unsigned int v4; // r15d
  int v5; // r14d
  UMPDOBJ *v6; // rbx
  size_t Size; // [rsp+20h] [rbp-98h]
  unsigned int v9; // [rsp+40h] [rbp-78h] BYREF
  int v10; // [rsp+44h] [rbp-74h] BYREF
  int v11; // [rsp+48h] [rbp-70h] BYREF
  UMPDOBJ *v12; // [rsp+50h] [rbp-68h] BYREF
  void *v13; // [rsp+58h] [rbp-60h] BYREF
  void *v14[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v15; // [rsp+70h] [rbp-48h] BYREF
  struct _SURFOBJ *v16[2]; // [rsp+80h] [rbp-38h] BYREF
  void *v17; // [rsp+90h] [rbp-28h] BYREF

  v14[1] = a1;
  v4 = 1;
  v9 = 1;
  v11 = 0;
  v5 = 0;
  v10 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v12);
  v14[0] = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v6 = v12;
  if ( v12 )
  {
    if ( *((_BYTE *)v12 + 440) )
    {
      v9 = 56;
      v4 = UMPDOBJ::bThunkLargeBitmap(v12, a1, v14, &v13, &v11, &v10, &v9);
      v9 = v4;
      v5 = v10;
    }
    if ( v4 )
    {
      DWORD1(v15) = 57;
      LOBYTE(v15) = 0;
      v16[0] = *(struct _SURFOBJ **)v6;
      v16[1] = a1;
      v17 = a2;
      if ( (unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 64), &v16[1], v5) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v6, &v17, 8u) )
        {
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v6, &v15, 0x28u, &v9, Size) != -1 )
          {
            if ( a2 )
              UMPDOBJ::CopyFromUser(v6, a2, v17, 8uLL);
          }
        }
      }
    }
    if ( v11 )
      UMPDOBJ::RestoreBitmap(v6, a1, v14[0], v13, Size, v5);
    XUMPDOBJ::~XUMPDOBJ(&v12);
    return v9;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v12);
    return 0LL;
  }
}

/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x140283E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *Src)
{
  unsigned int v4; // r15d
  UMPDOBJ *v5; // rbx
  void *v7; // rax
  size_t Size; // [rsp+20h] [rbp-A8h]
  unsigned int v9; // [rsp+40h] [rbp-88h] BYREF
  int v10; // [rsp+44h] [rbp-84h] BYREF
  int v11; // [rsp+48h] [rbp-80h] BYREF
  UMPDOBJ *v12[2]; // [rsp+50h] [rbp-78h] BYREF
  void *v13; // [rsp+60h] [rbp-68h] BYREF
  void *v14[2]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v15; // [rsp+78h] [rbp-50h] BYREF
  struct _SURFOBJ *v16[2]; // [rsp+88h] [rbp-40h] BYREF
  void *v17; // [rsp+98h] [rbp-30h]

  v12[1] = (UMPDOBJ *)a1;
  v14[1] = Src;
  v4 = 1;
  v9 = 1;
  v11 = 0;
  v10 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v12);
  v14[0] = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v5 = v12[0];
  if ( v12[0] )
  {
    if ( *((_BYTE *)v12[0] + 440) )
    {
      v9 = 72;
      v4 = UMPDOBJ::bThunkLargeBitmap(v12[0], a1, v14, &v13, &v11, &v10, &v9);
      v9 = v4;
    }
    if ( v4 )
    {
      DWORD1(v15) = 75;
      LOBYTE(v15) = 0;
      v16[0] = *(struct _SURFOBJ **)v5;
      v16[1] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v5, (UMPDOBJ *)((char *)v5 + 64), &v16[1], v10) )
      {
        v7 = UMPDOBJ::_AllocUserMem(v5, 0x14u, 0);
        v17 = v7;
        if ( v7 )
        {
          if ( Src )
            UMPDOBJ::CopyToUser(v5, v7, Src, 0x14uLL);
          if ( v9 )
          {
            LODWORD(Size) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v5, &v15, 0x28u, &v9, Size) != -1 )
            {
              if ( Src )
                UMPDOBJ::CopyFromUser(v5, Src, v17, 0x14uLL);
            }
          }
        }
      }
    }
    if ( v11 )
      UMPDOBJ::RestoreBitmap(v5, a1, v14[0], v13, Size, v10);
    XUMPDOBJ::~XUMPDOBJ(v12);
    return v9;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(v12);
    return 0LL;
  }
}

/*
 * XREFs of ?UMPDDrvStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400D1150
 * Callers:
 *     <none>
 * Callees:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z @ 0x1400CF8C8 (-ThunkLINEATTRS@UMPDOBJ@@QEAAHPEAPEAU_LINEATTRS@@@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D0D20 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall UMPDDrvStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  int v9; // esi
  int v10; // r13d
  int v11; // r15d
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  UMPDOBJ *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _PATHOBJ *v24; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v26; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v27; // [rsp+80h] [rbp-80h]
  struct _POINTL *v28; // [rsp+88h] [rbp-78h]
  _BYTE Src[4]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+94h] [rbp-6Ch]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v32; // [rsp+A8h] [rbp-58h] BYREF
  void *v33; // [rsp+B0h] [rbp-50h] BYREF
  void *v34; // [rsp+B8h] [rbp-48h] BYREF
  void *v35; // [rsp+C0h] [rbp-40h] BYREF
  void *v36; // [rsp+C8h] [rbp-38h] BYREF
  void *v37; // [rsp+D0h] [rbp-30h] BYREF
  struct _LINEATTRS *v38; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v39; // [rsp+E8h] [rbp-18h]

  v27 = a5;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v28 = a6;
  v26 = a4;
  v25 = a3;
  v24 = a2;
  v18 = 1;
  v20 = 0;
  v19 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v23 = 0LL;
  v22 = 0LL;
  memset_0(Src, 0, 0x60uLL);
  v12 = v21;
  if ( v21 )
  {
    v13 = 1;
    v14 = 1;
    if ( *((_BYTE *)v21 + 456) )
    {
      if ( a7 )
        v16 = ((4 * a7->cstyle + 7) & 0xFFFFFFF8) + 216;
      else
        v16 = 176;
      v18 = v16;
      v13 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v23, &v22, &v20, &v19, &v18);
      v10 = v20;
      v14 = v13;
      v11 = v19;
      v9 = v13;
      v18 = v13;
    }
    if ( v13 )
    {
      v30 = 14;
      v14 = 0;
      Src[0] = 0;
      v31 = *(_QWORD *)v12;
      v33 = v24;
      v34 = v25;
      v35 = v26;
      v36 = v27;
      v37 = v28;
      v39 = a8;
      v32 = a1;
      v38 = a7;
      if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), &v32, v11) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 240), &v33, 8u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 128), &v34, 0x18u, 0LL) )
          {
            if ( !v35
              || (v19 = 0, (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 288), &v35, 4u, &v19)) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 160), &v36, 0x18u, 0LL) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v12, &v37, 8u) )
                {
                  if ( (unsigned int)UMPDOBJ::ThunkLINEATTRS(v12, &v38) )
                  {
                    LODWORD(Size) = 4;
                    if ( UMPDOBJ::Thunk(v12, Src, 0x60u, &v18, Size) != -1 )
                    {
                      if ( v18 )
                        v14 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v9 = v14;
    }
    if ( v10 )
    {
      UMPDOBJ::RestoreBitmap(v12, a1, v23, v22, Size, v11);
      v14 = v9;
    }
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v21);
    return v14;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v21);
    return 0LL;
  }
}

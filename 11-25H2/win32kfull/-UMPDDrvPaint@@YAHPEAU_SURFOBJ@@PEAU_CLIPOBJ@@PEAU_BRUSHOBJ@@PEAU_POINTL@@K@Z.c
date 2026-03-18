/*
 * XREFs of ?UMPDDrvPaint@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140335F30
 * Callers:
 *     <none>
 * Callees:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1400CF7F8 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
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

_BOOL8 __fastcall UMPDDrvPaint(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        struct _POINTL *a4,
        unsigned int a5)
{
  int v6; // esi
  int v7; // r12d
  int v8; // r14d
  void *v9; // r13
  UMPDOBJ *v10; // rbx
  unsigned int v12; // eax
  BOOL v13; // edi
  size_t Size; // [rsp+20h] [rbp-C1h]
  unsigned int v15; // [rsp+40h] [rbp-A1h] BYREF
  int v16; // [rsp+44h] [rbp-9Dh] BYREF
  int v17; // [rsp+48h] [rbp-99h] BYREF
  UMPDOBJ *v18; // [rsp+50h] [rbp-91h] BYREF
  void *v19; // [rsp+58h] [rbp-89h] BYREF
  void *v20; // [rsp+60h] [rbp-81h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-79h]
  struct _BRUSHOBJ *v22; // [rsp+70h] [rbp-71h]
  struct _POINTL *v23; // [rsp+78h] [rbp-69h]
  _DWORD Src[4]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v25; // [rsp+90h] [rbp-51h]
  struct _SURFOBJ *v26; // [rsp+98h] [rbp-49h] BYREF
  void *v27; // [rsp+A8h] [rbp-39h] BYREF
  void *v28; // [rsp+B8h] [rbp-29h] BYREF
  void *v29; // [rsp+C0h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp-9h]

  v23 = a4;
  v6 = 1;
  v22 = a3;
  v7 = 0;
  v15 = 1;
  v8 = 0;
  v16 = 0;
  v17 = 0;
  v21 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v20 = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  memset_0(Src, 0, 0x60uLL);
  v10 = v18;
  if ( v18 )
  {
    v12 = 1;
    v13 = 1;
    if ( *((_BYTE *)v18 + 456) )
    {
      v15 = 160;
      v12 = UMPDOBJ::bThunkLargeBitmap(v18, a1, &v19, &v20, &v16, &v17, &v15);
      v7 = v16;
      v13 = v12;
      v8 = v17;
      v6 = v12;
      v9 = v19;
      v15 = v12;
    }
    if ( v12 )
    {
      Src[1] = 17;
      v13 = 0;
      LOBYTE(Src[0]) = 0;
      v25 = *(_QWORD *)v10;
      v27 = v21;
      v28 = v22;
      v29 = v23;
      v30 = a5;
      v26 = a1;
      if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 80), &v26) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 128), (const void **)&v27, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 160), (const void **)&v28, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v29, 8u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, Src, 0x60u, &v15, Size) != -1 )
                v13 = v15 != 0;
            }
          }
        }
      }
      v6 = v13;
    }
    if ( v7 )
    {
      UMPDOBJ::RestoreBitmap(v10, a1, v9, v20, Size, v8);
      v13 = v6;
    }
    XUMPDOBJ::~XUMPDOBJ(&v18);
    return v13;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v18);
    return 0LL;
  }
}

/*
 * XREFs of ?UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z @ 0x14024E350
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D7C20 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1400D9364 (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x14021CFC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvSendPage(struct _SURFOBJ *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  int v3; // r15d
  int v4; // r14d
  UMPDOBJ *v5; // rbx
  void *v6; // r12
  void *v7; // r13
  unsigned int v8; // eax
  size_t Size; // [rsp+28h] [rbp-49h]
  unsigned int v11; // [rsp+48h] [rbp-29h] BYREF
  int v12; // [rsp+4Ch] [rbp-25h] BYREF
  int v13; // [rsp+50h] [rbp-21h] BYREF
  struct _SURFOBJ *v14; // [rsp+58h] [rbp-19h]
  void *v15; // [rsp+60h] [rbp-11h] BYREF
  void *v16; // [rsp+68h] [rbp-9h] BYREF
  UMPDOBJ *v17; // [rsp+70h] [rbp-1h] BYREF
  __int128 v18; // [rsp+78h] [rbp+7h] BYREF
  struct _SURFOBJ *v19[2]; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0;
  v14 = a1;
  v2 = 1;
  v12 = 0;
  v11 = 1;
  v3 = 0;
  v13 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  v5 = v17;
  v15 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  if ( v17 )
  {
    if ( *((_BYTE *)v17 + 440) )
    {
      v11 = 40;
      v8 = UMPDOBJ::bThunkLargeBitmap(v17, v14, &v15, &v16, &v12, &v13, &v11);
      v3 = v12;
      v2 = v8;
      v4 = v13;
      v6 = v15;
      v7 = v16;
      v11 = v8;
    }
    if ( v2 )
    {
      LOBYTE(v18) = 0;
      DWORD1(v18) = 32;
      v19[0] = *(struct _SURFOBJ **)v5;
      v19[1] = v14;
      if ( !(unsigned int)UMPDOBJ::pso(v5, (UMPDOBJ *)((char *)v5 + 64), &v19[1], v4)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v5, &v18, 0x20u, &v11, Size) == -1)
        || (v2 = 1, !v11) )
      {
        v2 = 0;
      }
    }
    if ( v3 )
      UMPDOBJ::RestoreBitmap(v5, v14, v6, v7, Size, v4);
    v1 = v2;
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v1;
}

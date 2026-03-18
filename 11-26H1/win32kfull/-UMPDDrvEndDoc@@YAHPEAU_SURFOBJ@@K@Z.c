/*
 * XREFs of ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x14026C840
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

__int64 __fastcall UMPDDrvEndDoc(struct _SURFOBJ *a1, int a2)
{
  unsigned int v2; // edi
  int v4; // esi
  int v5; // r15d
  int v6; // r14d
  UMPDOBJ *v7; // rbx
  void *v8; // r13
  unsigned int v9; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v12; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+44h] [rbp-35h] BYREF
  int v14; // [rsp+48h] [rbp-31h] BYREF
  int v15; // [rsp+4Ch] [rbp-2Dh]
  void *v16; // [rsp+50h] [rbp-29h] BYREF
  void *v17; // [rsp+58h] [rbp-21h] BYREF
  UMPDOBJ *v18; // [rsp+60h] [rbp-19h] BYREF
  __int128 v19; // [rsp+68h] [rbp-11h] BYREF
  struct _SURFOBJ *v20[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+Fh]

  v2 = 0;
  v15 = a2;
  v13 = 0;
  v4 = 1;
  v14 = 0;
  v12 = 1;
  v5 = 0;
  v6 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v7 = v18;
  v16 = 0LL;
  v17 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( v18 )
  {
    if ( *((_BYTE *)v18 + 440) )
    {
      v12 = 48;
      v9 = UMPDOBJ::bThunkLargeBitmap(v18, a1, &v16, &v17, &v13, &v14, &v12);
      v5 = v13;
      v4 = v9;
      v6 = v14;
      v8 = v16;
      v12 = v9;
    }
    if ( v4 )
    {
      DWORD1(v19) = 34;
      LOBYTE(v19) = 0;
      v20[0] = *(struct _SURFOBJ **)v7;
      LODWORD(v21) = v15;
      v20[1] = a1;
      if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), &v20[1], v6)
        || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v7, &v19, 0x28u, &v12, Size) == -1)
        || (v4 = 1, !v12) )
      {
        v4 = 0;
      }
    }
    if ( v5 )
      UMPDOBJ::RestoreBitmap(v7, a1, v8, v17, Size, v6);
    v2 = v4;
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v2;
}
